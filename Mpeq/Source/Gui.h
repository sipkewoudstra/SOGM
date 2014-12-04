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
#include "FilmstripSlider.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Gui  : public Component,
             public ButtonListener,
            public Timer//,
            //public FilmstripSlider
{
public:
    //==============================================================================
    Gui ();
    ~Gui();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void timerCallback(); //change timercallback to sliderValueChanged;
    //void sliderValueChanged (Slider* slider);
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
    void buttonClicked (Button* buttonThatWasClicked);

    // Binary resources:
    static const char* switcherUp_png;
    static const int switcherUp_pngSize;
    static const char* switcherDown_png;
    static const int switcherDown_pngSize;
    static const char* eqinnerDial_png;
    static const int eqinnerDial_pngSize;
    static const char* filterInnerDial_png;
    static const int filterInnerDial_pngSize;
    static const char* eqouterDialFreqLf_png;
    static const int eqouterDialFreqLf_pngSize;
    static const char* eqouterDialFreqHf_png;
    static const int eqouterDialFreqHf_pngSize;
    static const char* eqouterDialFreqHmf_png;
    static const int eqouterDialFreqHmf_pngSize;
    static const char* eqouterDialFreqLmf_png;
    static const int eqouterDialFreqLmf_pngSize;
    static const char* eqouterDialGain_png;
    static const int eqouterDialGain_pngSize;
    static const char* background_png;
    static const int background_pngSize;
    static const char* switcherSideDown_png;
    static const int switcherSideDown_pngSize;
    static const char* switcherSideUp_png;
    static const int switcherSideUp_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //Image Dials
    FilmstripSlider LFShape;
    FilmstripSlider LFQ;
    FilmstripSlider LMFShape;
    FilmstripSlider LMFQ;
    FilmstripSlider HMFShape;
    FilmstripSlider HMFQ;
    FilmstripSlider HFShape;
    FilmstripSlider HFQ;
    FilmstripSlider HPQ;
    FilmstripSlider LPQ;
    FilmstripSlider LFFreq;
    FilmstripSlider LMFFreq;
    FilmstripSlider HMFFreq;
    FilmstripSlider HFFreq;
    FilmstripSlider HPFreq;
    FilmstripSlider LPFreq;
    FilmstripSlider LFGain;
    FilmstripSlider LMFGain;
    FilmstripSlider HMFGain;
    FilmstripSlider HFGain;


    //Dial Images
    Image EQInnerDial;
    Image FilterInnerDial;
    Image EQOuterDialLF;
    Image EQOuterDialLMF;
    Image EQOuterDialHMF;
    Image EQOuterDialHF;
    Image EQOuterDialGain;
    //[/UserVariables]

    //==============================================================================
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
    Image cachedImage_background_png;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Gui)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_1B7D314A9B5D26__
