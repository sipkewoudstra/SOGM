/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
    addKeyListener(this);
    
    addAndMakeVisible (&custom);
    setSize (custom.getWidth(), custom.getHeight());
}

bool MainContentComponent::keyPressed (const KeyPress& key, Component* originatingComponent){
    //set frequency according to the right key
    //C
    /*
    if (key == 'a') {
        frequency = ;
    }
    //Cis
    if (key == 'w'){
        frequency = ;
    }
    //D
    if (key == 's'){
        frequency = ;
    }
    //Dis
    if (key == 'e'){
        frequency = ;
    }
    //E
    if (key == 'd'){
        frequency = ;
    }
    //F
    if (key == 'f'){
        frequency = ;
    }
    //Fis
    if (key == 't'){
        frequency = ;
    }
    //G
    if (key == 'g') {
        frequency = ;
    }
    //Gis
    if (key == 'y') {
        frequency = ;
    }
    //A
    if (key == 'h') {
        frequency = ;
    }
    //Ais
    if (key == 'u') {
        frequency = ;
    }
    //B
    if (key == 'j') {
        frequency = ;
    }
    //C
    if (key == 'k') {
        frequency = ;
    }
    //Cis
    if (key == 'o') {
        frequency = ;
    }
    //D
    if (key == 'l') {
        frequency = ;
    }
    */
    return true;
}

bool MainContentComponent::keyStateChanged (bool isKeyDown, Component* originatingComponent){
    if (isKeyDown == true) {
        //noteOn();
    } else {
        //noteOff();
    }
    
    return true;
}

