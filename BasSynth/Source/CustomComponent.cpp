/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "CustomComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
CustomComponent::CustomComponent ()
{
    addAndMakeVisible (centsSlider = new Slider ("centsSlider"));
    centsSlider->setRange (-100, 100, 1);
    centsSlider->setSliderStyle (Slider::Rotary);
    centsSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    centsSlider->setColour (Slider::rotarySliderFillColourId, Colours::coral);
    centsSlider->setColour (Slider::rotarySliderOutlineColourId, Colours::white);
    centsSlider->addListener (this);

    addAndMakeVisible (oscBox = new ComboBox ("oscBox"));
    oscBox->setExplicitFocusOrder (1);
    oscBox->setEditableText (false);
    oscBox->setJustificationType (Justification::centredLeft);
    oscBox->setTextWhenNothingSelected (TRANS("Choose Oscillator"));
    oscBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    oscBox->addItem (TRANS("Sine"), 1);
    oscBox->addItem (TRANS("Saw"), 2);
    oscBox->addListener (this);

    addAndMakeVisible (octSlider = new Slider ("octSlider"));
    octSlider->setRange (0, 4, 1);
    octSlider->setSliderStyle (Slider::Rotary);
    octSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    octSlider->setColour (Slider::backgroundColourId, Colours::white);
    octSlider->setColour (Slider::trackColourId, Colours::white);
    octSlider->setColour (Slider::rotarySliderFillColourId, Colours::coral);
    octSlider->setColour (Slider::rotarySliderOutlineColourId, Colours::white);
    octSlider->addListener (this);

    addAndMakeVisible (OctUpDownButton = new TextButton ("OctUpDownButton"));
    OctUpDownButton->setButtonText (TRANS("Oct up/down"));
    OctUpDownButton->addListener (this);
    OctUpDownButton->setColour (TextButton::buttonColourId, Colours::coral);
    OctUpDownButton->setColour (TextButton::buttonOnColourId, Colour (0xfff85c22));

    addAndMakeVisible (reeseButton = new TextButton ("reeseButton"));
    reeseButton->setButtonText (TRANS("Reese"));
    reeseButton->addListener (this);
    reeseButton->setColour (TextButton::buttonColourId, Colours::coral);
    reeseButton->setColour (TextButton::buttonOnColourId, Colour (0xffff5a1e));

    addAndMakeVisible (attackSlider = new Slider ("attackSlider"));
    attackSlider->setRange (0, 10, 0);
    attackSlider->setSliderStyle (Slider::LinearVertical);
    attackSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    attackSlider->setColour (Slider::trackColourId, Colours::coral);
    attackSlider->setColour (Slider::rotarySliderFillColourId, Colours::coral);
    attackSlider->addListener (this);

    addAndMakeVisible (releaseSlider = new Slider ("releaseSlider"));
    releaseSlider->setRange (0, 10, 0);
    releaseSlider->setSliderStyle (Slider::LinearVertical);
    releaseSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    releaseSlider->setColour (Slider::trackColourId, Colours::coral);
    releaseSlider->setColour (Slider::rotarySliderFillColourId, Colours::coral);
    releaseSlider->addListener (this);

    addAndMakeVisible (filterBox1 = new ComboBox ("filterBox1"));
    filterBox1->setExplicitFocusOrder (1);
    filterBox1->setEditableText (false);
    filterBox1->setJustificationType (Justification::centredLeft);
    filterBox1->setTextWhenNothingSelected (TRANS("Choose Filter"));
    filterBox1->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    filterBox1->addItem (TRANS("LP"), 1);
    filterBox1->addItem (TRANS("HP"), 2);
    filterBox1->addItem (TRANS("NONE"), 3);
    filterBox1->addListener (this);

    addAndMakeVisible (filterFreqSlider1 = new Slider ("filterFreqSlider1"));
    filterFreqSlider1->setRange (0, 10, 0);
    filterFreqSlider1->setSliderStyle (Slider::Rotary);
    filterFreqSlider1->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    filterFreqSlider1->setColour (Slider::backgroundColourId, Colours::white);
    filterFreqSlider1->setColour (Slider::trackColourId, Colour (0x7dffffff));
    filterFreqSlider1->setColour (Slider::rotarySliderFillColourId, Colours::coral);
    filterFreqSlider1->setColour (Slider::rotarySliderOutlineColourId, Colours::white);
    filterFreqSlider1->setColour (Slider::textBoxTextColourId, Colours::aliceblue);
    filterFreqSlider1->addListener (this);

    addAndMakeVisible (distLevelSlider = new Slider ("distLevelSlider"));
    distLevelSlider->setRange (0, 10, 0);
    distLevelSlider->setSliderStyle (Slider::Rotary);
    distLevelSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    distLevelSlider->setColour (Slider::rotarySliderFillColourId, Colours::coral);
    distLevelSlider->setColour (Slider::rotarySliderOutlineColourId, Colours::white);
    distLevelSlider->addListener (this);

    addAndMakeVisible (filterBox2 = new ComboBox ("filterBox2"));
    filterBox2->setEditableText (false);
    filterBox2->setJustificationType (Justification::centredLeft);
    filterBox2->setTextWhenNothingSelected (TRANS("Choose Filter"));
    filterBox2->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    filterBox2->addItem (TRANS("LP"), 1);
    filterBox2->addItem (TRANS("HP"), 2);
    filterBox2->addItem (TRANS("NONE"), 3);
    filterBox2->addSeparator();
    filterBox2->addListener (this);

    addAndMakeVisible (filterFreqSlider2 = new Slider ("filterFreqSlider2"));
    filterFreqSlider2->setRange (0, 10, 0);
    filterFreqSlider2->setSliderStyle (Slider::Rotary);
    filterFreqSlider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    filterFreqSlider2->setColour (Slider::rotarySliderFillColourId, Colours::coral);
    filterFreqSlider2->setColour (Slider::rotarySliderOutlineColourId, Colours::white);
    filterFreqSlider2->addListener (this);

    addAndMakeVisible (centsLabel = new Label ("centsLabel",
                                               TRANS("Cents\n")));
    centsLabel->setFont (Font (15.00f, Font::plain));
    centsLabel->setJustificationType (Justification::centred);
    centsLabel->setEditable (false, false, false);
    centsLabel->setColour (TextEditor::textColourId, Colours::black);
    centsLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (octLabel = new Label ("octLabel",
                                             TRANS("Octave")));
    octLabel->setFont (Font (15.00f, Font::plain));
    octLabel->setJustificationType (Justification::centred);
    octLabel->setEditable (false, false, false);
    octLabel->setColour (TextEditor::textColourId, Colours::black);
    octLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (attRelLabel = new Label ("attRelLabel",
                                                TRANS("Att. Rel.")));
    attRelLabel->setFont (Font (15.00f, Font::plain));
    attRelLabel->setJustificationType (Justification::centred);
    attRelLabel->setEditable (false, false, false);
    attRelLabel->setColour (TextEditor::textColourId, Colours::black);
    attRelLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (freqLabel1 = new Label ("freqLabel1",
                                               TRANS("Frequency\n")));
    freqLabel1->setFont (Font (15.00f, Font::plain));
    freqLabel1->setJustificationType (Justification::centred);
    freqLabel1->setEditable (false, false, false);
    freqLabel1->setColour (TextEditor::textColourId, Colours::black);
    freqLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (freqLabel2 = new Label ("freqLabel2",
                                               TRANS("Frequency\n")));
    freqLabel2->setFont (Font (15.00f, Font::plain));
    freqLabel2->setJustificationType (Justification::centred);
    freqLabel2->setEditable (false, false, false);
    freqLabel2->setColour (TextEditor::textColourId, Colours::black);
    freqLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (distLevelLabel = new Label ("distLevelLabel",
                                                   TRANS("Dist. Level\n")));
    distLevelLabel->setFont (Font (15.00f, Font::plain));
    distLevelLabel->setJustificationType (Justification::centred);
    distLevelLabel->setEditable (false, false, false);
    distLevelLabel->setColour (TextEditor::textColourId, Colours::black);
    distLevelLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (850, 160);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

CustomComponent::~CustomComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    centsSlider = nullptr;
    oscBox = nullptr;
    octSlider = nullptr;
    OctUpDownButton = nullptr;
    reeseButton = nullptr;
    attackSlider = nullptr;
    releaseSlider = nullptr;
    filterBox1 = nullptr;
    filterFreqSlider1 = nullptr;
    distLevelSlider = nullptr;
    filterBox2 = nullptr;
    filterFreqSlider2 = nullptr;
    centsLabel = nullptr;
    octLabel = nullptr;
    attRelLabel = nullptr;
    freqLabel1 = nullptr;
    freqLabel2 = nullptr;
    distLevelLabel = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void CustomComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xffe31fad));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void CustomComponent::resized()
{
    centsSlider->setBounds (40, 80, 48, 48);
    oscBox->setBounds (32, 40, 150, 24);
    octSlider->setBounds (120, 80, 48, 48);
    OctUpDownButton->setBounds (200, 40, 88, 40);
    reeseButton->setBounds (200, 80, 88, 40);
    attackSlider->setBounds (312, 40, 16, 80);
    releaseSlider->setBounds (336, 40, 16, 80);
    filterBox1->setBounds (368, 40, 150, 24);
    filterFreqSlider1->setBounds (408, 80, 48, 48);
    distLevelSlider->setBounds (568, 80, 48, 48);
    filterBox2->setBounds (664, 40, 150, 24);
    filterFreqSlider2->setBounds (704, 80, 48, 48);
    centsLabel->setBounds (24, 136, 75, 12);
    octLabel->setBounds (104, 136, 75, 12);
    attRelLabel->setBounds (296, 136, 75, 12);
    freqLabel1->setBounds (392, 136, 75, 12);
    freqLabel2->setBounds (688, 136, 75, 12);
    distLevelLabel->setBounds (552, 136, 75, 12);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void CustomComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == centsSlider)
    {
        //[UserSliderCode_centsSlider] -- add your slider handling code here..
        centsLabel->setText(String(centsSlider->getValue()), sendNotification);
        //[/UserSliderCode_centsSlider]
    }
    else if (sliderThatWasMoved == octSlider)
    {
        //[UserSliderCode_octSlider] -- add your slider handling code here..
        //[/UserSliderCode_octSlider]
    }
    else if (sliderThatWasMoved == attackSlider)
    {
        //[UserSliderCode_attackSlider] -- add your slider handling code here..
        //[/UserSliderCode_attackSlider]
    }
    else if (sliderThatWasMoved == releaseSlider)
    {
        //[UserSliderCode_releaseSlider] -- add your slider handling code here..
        //[/UserSliderCode_releaseSlider]
    }
    else if (sliderThatWasMoved == filterFreqSlider1)
    {
        //[UserSliderCode_filterFreqSlider1] -- add your slider handling code here..
        //[/UserSliderCode_filterFreqSlider1]
    }
    else if (sliderThatWasMoved == distLevelSlider)
    {
        //[UserSliderCode_distLevelSlider] -- add your slider handling code here..
        //[/UserSliderCode_distLevelSlider]
    }
    else if (sliderThatWasMoved == filterFreqSlider2)
    {
        //[UserSliderCode_filterFreqSlider2] -- add your slider handling code here..
        //[/UserSliderCode_filterFreqSlider2]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void CustomComponent::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == oscBox)
    {
        //[UserComboBoxCode_oscBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_oscBox]
    }
    else if (comboBoxThatHasChanged == filterBox1)
    {
        //[UserComboBoxCode_filterBox1] -- add your combo box handling code here..
        //[/UserComboBoxCode_filterBox1]
    }
    else if (comboBoxThatHasChanged == filterBox2)
    {
        //[UserComboBoxCode_filterBox2] -- add your combo box handling code here..
        //[/UserComboBoxCode_filterBox2]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void CustomComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == OctUpDownButton)
    {
        //[UserButtonCode_OctUpDownButton] -- add your button handler code here..
        //[/UserButtonCode_OctUpDownButton]
    }
    else if (buttonThatWasClicked == reeseButton)
    {
        //[UserButtonCode_reeseButton] -- add your button handler code here..
        //[/UserButtonCode_reeseButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="CustomComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="850" initialHeight="160">
  <BACKGROUND backgroundColour="ffe31fad"/>
  <SLIDER name="centsSlider" id="70e09c9e15c2ecc1" memberName="centsSlider"
          virtualName="" explicitFocusOrder="0" pos="40 80 48 48" rotarysliderfill="ffff7f50"
          rotaryslideroutline="ffffffff" min="-100" max="100" int="1" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <COMBOBOX name="oscBox" id="397aee40c4eaa86f" memberName="oscBox" virtualName=""
            explicitFocusOrder="1" pos="32 40 150 24" editable="0" layout="33"
            items="Sine&#10;Saw" textWhenNonSelected="Choose Oscillator"
            textWhenNoItems="(no choices)"/>
  <SLIDER name="octSlider" id="66621a84ff4a50a4" memberName="octSlider"
          virtualName="" explicitFocusOrder="0" pos="120 80 48 48" bkgcol="ffffffff"
          trackcol="ffffffff" rotarysliderfill="ffff7f50" rotaryslideroutline="ffffffff"
          min="0" max="4" int="1" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <TEXTBUTTON name="OctUpDownButton" id="5ee9ad68e63beb27" memberName="OctUpDownButton"
              virtualName="" explicitFocusOrder="0" pos="200 40 88 40" bgColOff="ffff7f50"
              bgColOn="fff85c22" buttonText="Oct up/down" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="reeseButton" id="3dac3abdccccab36" memberName="reeseButton"
              virtualName="" explicitFocusOrder="0" pos="200 80 88 40" bgColOff="ffff7f50"
              bgColOn="ffff5a1e" buttonText="Reese" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <SLIDER name="attackSlider" id="72cc9d9a621872ad" memberName="attackSlider"
          virtualName="" explicitFocusOrder="0" pos="312 40 16 80" trackcol="ffff7f50"
          rotarysliderfill="ffff7f50" min="0" max="10" int="0" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="releaseSlider" id="900e077630470ab9" memberName="releaseSlider"
          virtualName="" explicitFocusOrder="0" pos="336 40 16 80" trackcol="ffff7f50"
          rotarysliderfill="ffff7f50" min="0" max="10" int="0" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <COMBOBOX name="filterBox1" id="df4381954b52decd" memberName="filterBox1"
            virtualName="" explicitFocusOrder="1" pos="368 40 150 24" editable="0"
            layout="33" items="LP&#10;HP&#10;NONE" textWhenNonSelected="Choose Filter"
            textWhenNoItems="(no choices)"/>
  <SLIDER name="filterFreqSlider1" id="99de78a14cb83ebf" memberName="filterFreqSlider1"
          virtualName="" explicitFocusOrder="0" pos="408 80 48 48" bkgcol="ffffffff"
          trackcol="7dffffff" rotarysliderfill="ffff7f50" rotaryslideroutline="ffffffff"
          textboxtext="fff0f8ff" min="0" max="10" int="0" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="distLevelSlider" id="3589a8bdf56cfced" memberName="distLevelSlider"
          virtualName="" explicitFocusOrder="0" pos="568 80 48 48" rotarysliderfill="ffff7f50"
          rotaryslideroutline="ffffffff" min="0" max="10" int="0" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <COMBOBOX name="filterBox2" id="94d9f236223c6bc" memberName="filterBox2"
            virtualName="" explicitFocusOrder="0" pos="664 40 150 24" editable="0"
            layout="33" items="LP&#10;HP&#10;NONE&#10;" textWhenNonSelected="Choose Filter"
            textWhenNoItems="(no choices)"/>
  <SLIDER name="filterFreqSlider2" id="b96ac7a1bd64ff4e" memberName="filterFreqSlider2"
          virtualName="" explicitFocusOrder="0" pos="704 80 48 48" rotarysliderfill="ffff7f50"
          rotaryslideroutline="ffffffff" min="0" max="10" int="0" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="centsLabel" id="97558cf84e626a68" memberName="centsLabel"
         virtualName="" explicitFocusOrder="0" pos="24 136 75 12" edTextCol="ff000000"
         edBkgCol="0" labelText="Cents&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="octLabel" id="ed4dc470df3dcfb3" memberName="octLabel" virtualName=""
         explicitFocusOrder="0" pos="104 136 75 12" edTextCol="ff000000"
         edBkgCol="0" labelText="Octave" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="attRelLabel" id="96ff56f3b2cd602a" memberName="attRelLabel"
         virtualName="" explicitFocusOrder="0" pos="296 136 75 12" edTextCol="ff000000"
         edBkgCol="0" labelText="Att. Rel." editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="freqLabel1" id="308fb1a95e13b34" memberName="freqLabel1"
         virtualName="" explicitFocusOrder="0" pos="392 136 75 12" edTextCol="ff000000"
         edBkgCol="0" labelText="Frequency&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="freqLabel2" id="43486f55910a9b06" memberName="freqLabel2"
         virtualName="" explicitFocusOrder="0" pos="688 136 75 12" edTextCol="ff000000"
         edBkgCol="0" labelText="Frequency&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="distLevelLabel" id="c57b059a7a836a25" memberName="distLevelLabel"
         virtualName="" explicitFocusOrder="0" pos="552 136 75 12" edTextCol="ff000000"
         edBkgCol="0" labelText="Dist. Level&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
