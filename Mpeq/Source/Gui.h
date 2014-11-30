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

#ifndef __JUCE_HEADER_1B7D314A9B5D26__
#define __JUCE_HEADER_1B7D314A9B5D26__

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
class Gui  : public Component,
             public SliderListener,
             public ButtonListener
{
public:
    //==============================================================================
    Gui ();
    ~Gui();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);
    void buttonClicked (Button* buttonThatWasClicked);

    // Binary resources:
    static const char* switcher2_png;
    static const int switcher2_pngSize;
    static const char* switcherUp_png;
    static const int switcherUp_pngSize;
    static const char* switcherDown_png;
    static const int switcherDown_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> LFGain;
    ScopedPointer<Slider> LFShape;
    ScopedPointer<ImageButton> LFPos;
    ScopedPointer<Slider> LFFreq;
    ScopedPointer<Slider> LFQ;
    ScopedPointer<Slider> LMFGain;
    ScopedPointer<Slider> LMFShape;
    ScopedPointer<Slider> LMFFreq;
    ScopedPointer<Slider> LMFQ;
    ScopedPointer<Slider> HMFGain;
    ScopedPointer<Slider> HMFShape;
    ScopedPointer<Slider> HMFFreq;
    ScopedPointer<Slider> HMFQ;
    ScopedPointer<Slider> HFGain;
    ScopedPointer<Slider> HFShape;
    ScopedPointer<Slider> HFFreq;
    ScopedPointer<Slider> HFQ;
    ScopedPointer<Slider> HPFreq;
    ScopedPointer<Slider> HPQ;
    ScopedPointer<Slider> LPFreq;
    ScopedPointer<Slider> LPQ;
    ScopedPointer<ImageButton> LFPN;
    ScopedPointer<ImageButton> LFEnable;
    ScopedPointer<ImageButton> LMFPos;
    ScopedPointer<ImageButton> LMFPN;
    ScopedPointer<ImageButton> LMFEnable;
    ScopedPointer<ImageButton> HMFPos;
    ScopedPointer<ImageButton> HMFPN;
    ScopedPointer<ImageButton> HMFEnable;
    ScopedPointer<ImageButton> HFPos;
    ScopedPointer<ImageButton> HFPN;
    ScopedPointer<ImageButton> HFEnable;
    ScopedPointer<ImageButton> HPEnable;
    ScopedPointer<ImageButton> LPEnable;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Gui)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_1B7D314A9B5D26__
