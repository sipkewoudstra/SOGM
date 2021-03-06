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

#ifndef __JUCE_HEADER_EB8324FC12BB4A8C__
#define __JUCE_HEADER_EB8324FC12BB4A8C__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class CustomComponent  : public Component,
                         public SliderListener,
                         public ComboBoxListener,
                         public ButtonListener
{
public:
    //==============================================================================
    CustomComponent ();
    ~CustomComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void getCents();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    double cents;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> centsSlider;
    ScopedPointer<ComboBox> oscBox;
    ScopedPointer<Slider> octSlider;
    ScopedPointer<TextButton> OctUpDownButton;
    ScopedPointer<TextButton> reeseButton;
    ScopedPointer<Slider> attackSlider;
    ScopedPointer<Slider> releaseSlider;
    ScopedPointer<ComboBox> filterBox1;
    ScopedPointer<Slider> filterFreqSlider1;
    ScopedPointer<Slider> distLevelSlider;
    ScopedPointer<ComboBox> filterBox2;
    ScopedPointer<Slider> filterFreqSlider2;
    ScopedPointer<Label> centsLabel;
    ScopedPointer<Label> octLabel;
    ScopedPointer<Label> attRelLabel;
    ScopedPointer<Label> freqLabel1;
    ScopedPointer<Label> freqLabel2;
    ScopedPointer<Label> distLevelLabel;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CustomComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_EB8324FC12BB4A8C__
