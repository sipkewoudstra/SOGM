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
    float get_LFGainValue();
    float get_LFShapeValue();
    float get_LFFreqValue();
    float get_LFQValue();
    float get_LMFGainValue();
    float get_LMFShapeValue();
    float get_LMFFreqValue();
    float get_LMFQValue();
    float get_HMFGainValue();
    float get_HMFShapeValue();
    float get_HMFFreqValue();
    float get_HMFQValue();
    float get_HFGainValue();
    float get_HFShapeValue();
    float get_HFFreqValue();
    float get_HFQValue();
    float get_HPFreqValue();
    float get_HPQValue();
    float get_LPFreqValue();
    float get_LPQValue();

    bool get_LFPosBool();
    bool get_LFPNBool();
    bool get_LFEnableBool();
    bool get_LMFPosBool();
    bool get_LMFPNBool();
    bool get_LMFEnableBool();
    bool get_HMFPosBool();
    bool get_HMFPNBool();
    bool get_HMFEnableBool();
    bool get_HFPosBool();
    bool get_HFPNBool();
    bool get_HFEnableBool();
    bool get_HPEnableBool();
    bool get_LPEnableBool();

    void set_LFGainValue(float input);
    void set_LFShapeValue(float input);
    void set_LFFreqValue(float input);
    void set_LFQValue(float input);
    void set_LMFGainValue(float input);
    void set_LMFShapeValue(float input);
    void set_LMFFreqValue(float input);
    void set_LMFQValue(float input);
    void set_HMFGainValue(float input);
    void set_HMFShapeValue(float input);
    void set_HMFFreqValue(float input);
    void set_HMFQValue(float input);
    void set_HFGainValue(float input);
    void set_HFShapeValue(float input);
    void set_HFFreqValue(float input);
    void set_HFQValue(float input);
    void set_HPFreqValue(float input);
    void set_HPQValue(float input);
    void set_LPFreqValue(float input);
    void set_LPQValue(float input);

    void set_LFPosBool(bool input);
    void set_LFPNBool(bool input);
    void set_LFEnableBool(bool input);
    void set_LMFPosBool(bool input);
    void set_LMFPNBool(bool input);
    void set_LMFEnableBool(bool input);
    void set_HMFPosBool(bool input);
    void set_HMFPNBool(bool input);
    void set_HMFEnableBool(bool input);
    void set_HFPosBool(bool input);
    void set_HFPNBool(bool input);
    void set_HFEnableBool(bool input);
    void set_HPEnableBool(bool input);
    void set_LPEnableBool(bool input);
    
    float LFGainValue;
    float LFShapeValue;
    float LFFreqValue;
    float LFQValue;
    float LMFGainValue;
    float LMFShapeValue;
    float LMFFreqValue;
    float LMFQValue;
    float HMFGainValue;
    float HMFShapeValue;
    float HMFFreqValue;
    float HMFQValue;
    float HFGainValue;
    float HFShapeValue;
    float HFFreqValue;
    float HFQValue;
    float HPFreqValue;
    float HPQValue;
    float LPFreqValue;
    float LPQValue;
    
    bool LFPosBool;
    bool LFPNBool;
    bool LFEnableBool;
    bool LMFPosBool;
    bool LMFPNBool;
    bool LMFEnableBool;
    bool HMFPosBool;
    bool HMFPNBool;
    bool HMFEnableBool;
    bool HFPosBool;
    bool HFPNBool;
    bool HFEnableBool;
    bool HPEnableBool;
    bool LPEnableBool;
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
    ScopedPointer<ImageButton> LFPos2;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Gui)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_1B7D314A9B5D26__
