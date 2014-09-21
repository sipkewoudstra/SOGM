
import themidibus.*; 
import processing.serial.*;

MidiBus myBus; // The MidiBus
Serial port;  // Create object from Serial class

String ports[] =  Serial.list();
String StatusText =  "";
String MainTextLineOne = "";
String MainTextLineTwo = "";
String MainTextLineThree = "";
String MainTextLineFour = "";

    String[] available_outputs = MidiBus.availableOutputs(); //Returns an array of available output devices
        String[] available_inputs = MidiBus.availableInputs(); //Returns an array of available input devices


String Letters =      "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
String LettersLower = "abcdefghijklmnopqrstuvwxyz";

int[] val = new int[3];
int[] buffer  = new int[16];
int num_ports;
boolean device_detected = false;
String[] port_list;
String detected_port = "";
int state = 2 ;
int SPortCount = 0;
int SerialPortID = 0;
int SerialPortBaudRate = 115200;
int MPortCount = 0;
int i = 0;
int channel = 0;
int midistatus = 128;
int pitch = 64;
int velocity = 127;
int midi_inputPORT = 0;
int midi_outputPORT =0;
float RX_flash = 0;
color RX_flashcolor = 0;
color TX_flashcolor = 0;
float TX_flash = 0;
int line_space = 0;
int lineSpacing = 15;

int number = 0;
int value = 90;
int keyselection = 99;

boolean SerPortFlag =  false;
boolean RX_ERROR_FLAG = false;

color flashcolor = color(00, 255, 00);
color flashOFFcolor = color(204, 204, 204);


void setup() {
  size(380, 440);
  textFont(createFont("Arial", 12));
  frameRate(25);
  background(255);
  
    num_ports = Serial.list().length;
    // save the current list of serial ports
    port_list = new String[num_ports];
    for (int i = 0; i < num_ports; i++) {
        port_list[i] = Serial.list()[i];
    }

}

void draw() {
  
    // see if Arduino or serial device was plugged in
    if ((Serial.list().length > num_ports) && !device_detected) {
        device_detected = true;
        // determine which port the device was plugge into
        if (num_ports == 0) {
            detected_port = Serial.list()[0];
            SerialPortID = 0;
            println(detected_port);
            println(SerialPortID);
        }
        else {
            for (int i = 0; i < Serial.list().length; i++) {  // go through the current port list
                for (int j = 0; j < num_ports; j++) {             // go through the saved port list
                    if (Serial.list()[i].equals(port_list[j])) {
                        break;
                    }
                    if (j == (num_ports - 1)) {
                        detected_port = Serial.list()[i];
                        SerialPortID = i;
                        println(detected_port);
                        println(SerialPortID);
                    }
                }
            }
        }
    }
    
    if (device_detected == true && state == 2) {
      state = 3;
    }

  switch(state)
  {
  case 0:                                                      // Running

    if((millis() - RX_flash) > 50)
    {
      RX_flashcolor = flashOFFcolor;
    }

    fill(RX_flashcolor);
    noStroke();
    rect(width-30, height-34, 8, 8);
    TX_activity(false);
    
    break;

  case 1:                                                      // Select serial Port
    break;
    
   case 2:                                                      // Select serial Speed
   updatedisplay();
    StatusText = "Please connect your midi controller";
    break;

  case 3:                                                      // Select MIDI INPUT Port
    updatedisplay();
    selectMidi_IN_port();
    break;

  case 4:                                                      // Select MIDI OUTPUT Port
    updatedisplay();
    selectMidi_OUT_port();
    break;
  }
}

void TX_activity(boolean SerialTX)                            // Used to flash TX indicator
{

  if(SerialTX){
    TX_flashcolor = flashcolor;
    TX_flash = millis();
  }
  else
  {
    if((millis() - TX_flash) > 100){
      TX_flashcolor = flashOFFcolor;

    }
  }
  fill(TX_flashcolor);
  noStroke();
  rect(width-30, height-21, 8, 8);

}

void serialEvent(Serial port)
{
  int i = 0;
  for(i=0; i < 3; i = i +1)
  {
    int inByte = port.read();
    val[i] = inByte;
    if(i==0 && inByte < 128)                                  // Verify 1st Byte is Status byte
    {
      i=3;
    }
  }

  if(val[0] >= 128)
  {
    myBus.sendMessage(val[0], val[1], val[2]);
    RX_flashcolor = flashcolor;
  }
  else
  {
    RX_flashcolor = color(255,0,0);                            // ERROR ! FLash
  }

  RX_flash = millis();
}

void noteOn(int channel, int pitch, int velocity)             // Receive a noteOn
{
  int midistatus = 0;
  int message = 144;
  midistatus = message | channel;
  TX_activity(true);
  port.write(midistatus);  
  port.write(pitch);
  port.write(velocity);
}

void noteOff(int channel, int pitch, int velocity)             // Receive a noteOff
{
  int midistatus = 0;
  int message = 128;
  midistatus = message | channel;

  TX_activity(true);
  port.write(midistatus);  
  port.write(pitch);
  port.write(velocity);
}

void controllerChange(int channel, int number, int value)       // Receive a controllerChange
{
  int midistatus = 0;
  int message = 176;
  midistatus = message | channel;

  TX_activity(true);
  port.write(midistatus);  
  port.write(number);
  port.write(value);
}

void selectSerialport() 
{
  StatusText = "Press the number key that matches your Arduino's serial Port:";
  SPortCount = Serial.list().length;
  if(SPortCount==0)
  {
    StatusText = "ERROR: No serial Ports avaliable";
  }
  else
  {
    fill(0);
    line_space = 0;
    for(i=0; i <Serial.list().length; i=i+1)
    {
      text("Port ["+Letters.charAt(i)+"] :    "+ports[i], 15, 80+(line_space), 600, 350);
     line_space= line_space+lineSpacing;
    }
  }
}


void selectMidi_IN_port() 
{
  StatusText = "Press the number key that matches MIDI INPUT Port:";
   MPortCount = available_inputs.length;
  if(MPortCount==0)
  {
    StatusText = "ERROR: No MIDI Ports avaliable";
  }
  else
  {
    fill(0);
    line_space = 0;
       for(i=0; i <available_inputs.length; i=i+1)
    {
         text("MIDI Port ["+Letters.charAt(i)+"] :    "+available_inputs[i], 15, 80+(line_space), 600, 350);
        line_space= line_space+lineSpacing;
    }
  }
}

void selectMidi_OUT_port() 
{
  StatusText = "Press the number key that matches MIDI OUTPUT Port:";
        MPortCount = available_outputs.length;

  if(MPortCount==0)
  {
    StatusText = "ERROR: No MIDI Ports avaliable";
  }
  else
  {
    fill(0);
    line_space = 0;
   for(i=0; i < available_outputs.length; i=i+1)
    {
        text("MIDI Port ["+Letters.charAt(i)+"] :    "+available_outputs[i], 15, 80+(line_space), 600, 350);
        line_space= line_space+lineSpacing;
    }
  }
}

void updatedisplay()
{
  background(255);
  int fadecolor = 220;

  for (int i = 0; i < 80; i = i+1)                                                       // Top area
  {
    stroke(0, fadecolor, 255);
    line(0, i, width, i);
    fadecolor = fadecolor -2;
  }
  fadecolor=128;
  for (int i = height-40; i < height; i = i+1)                                           // Bottom area
  {
    stroke(0, fadecolor, 255);
    line(0, i, width, i);
    fadecolor = fadecolor + 3;
  }

  fadecolor=50;
  for (int i = height-60; i < height-40; i = i+1)                                         // Upper-Bottom area
  {
    stroke(0, fadecolor, 255);
    line(0, i, width, i);
    fadecolor = fadecolor + 3;
  }

  fill(255);                                                                             // Status Title
  stroke(0);
  text("Status:", 15, height - 45);


  fill(0);                                                                                // Status Text
  stroke(50);
  text(StatusText, 15, height-25, 600, 350);

  if(state == 0)
  {
    text(MainTextLineOne, 15, 100);
    text(MainTextLineTwo, 15, 120);
    text(MainTextLineThree, 15, 140);
    text(MainTextLineFour, 15, 160);
    text("Serial RX", width-85, height-25);
    text("Serial TX", width-85, height-12);

    // RX Flash square
    rect(width-30, height-34, 8, 8);
    
    // TX Flash square
    rect(width-30, height-21, 8, 8);
  }


  textAlign(CENTER);
  fill(255);
  textSize(12);
  text("Serial <> MIDI Converter", (width/2)-(300/2),10,300,20);
  textSize(12);
  text("By Mark Demers - SpikenzieLabs.com, Modified by Sipke Woudstra", (width/2)-(300/2),30,300,100);
  textAlign(LEFT);
  textSize(12);
  

}

void keyPressed() {
  decodeLetter();
if ((keyselection != 99) || (keyselection != -1))
{
  
  switch(state)
  {
  case 0:                                                                  // Running
    break;

  case 1:                                                                  // Serial Select
    break;
    
    
   case 2:                                                                  // Serial Speed Select
    break;   

  case 3:                                                                  // midi Input Select

    if((keyselection) <=  (available_inputs.length-1))
    {
      state=4;
      StatusText = ("You are using MIDI INPUT port ["+(keyselection)+"] : "+available_inputs[keyselection]);
      midi_inputPORT = (keyselection);
      MainTextLineThree = ("MIDI Input port ["+(keyselection)+"] : "+available_inputs[keyselection]);
      delay(250);
    }
    break;

  case 4:                                                                  // Midi OUTput select

    if((keyselection) <=  (available_outputs.length-1))
    {
      state=0;
      StatusText = ("Converter is running");
      midi_outputPORT = (keyselection);
      //                 Parent             In              Out
      //                   |                |                |
      myBus = new MidiBus(this, midi_inputPORT, midi_outputPORT);
      MainTextLineFour = ("MIDI Output port ["+(keyselection)+"] : "+available_outputs[keyselection]);

      port = new Serial(this,detected_port, SerialPortBaudRate);
       //     port = new Serial(this,ports[SerialPortID], 115200); // was 57600 115200
      port.buffer(3);
      port.clear();
    }
    updatedisplay();
    break;

  }
}
}

void decodeLetter()
{
  keyselection = 99;
  if((key > 64) && (key < 91)) 
  {
     keyselection = Letters.indexOf(key);
    
  } else if ((key > 96) && (key < 123))
  {
     keyselection = LettersLower.indexOf(key); 
  }
}

void stop()
{
  port.stop();
  myBus.close();
}
