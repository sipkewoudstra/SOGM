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

#include "Gui.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Gui::Gui ()
{
    addAndMakeVisible (LFGain = new Slider ("LFGain"));
    LFGain->setRange (0, 10, 0);
    LFGain->setSliderStyle (Slider::Rotary);
    LFGain->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    LFGain->addListener (this);

    addAndMakeVisible (LFShape = new Slider ("LFShape"));
    LFShape->setRange (0, 1, 0);
    LFShape->setSliderStyle (Slider::Rotary);
    LFShape->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    LFShape->setColour (Slider::thumbColourId, Colour (0xffffbbbb));
    LFShape->setColour (Slider::rotarySliderFillColourId, Colour (0x7f1100ff));
    LFShape->setColour (Slider::textBoxHighlightColourId, Colour (0x40ee1111));
    LFShape->addListener (this);

    addAndMakeVisible (LFPos = new ImageButton ("LFPos"));
    LFPos->addListener (this);

    LFPos->setImages (false, true, true,
                      ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (LFFreq = new Slider ("LFFreq"));
    LFFreq->setRange (20, 340, 0);
    LFFreq->setSliderStyle (Slider::Rotary);
    LFFreq->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    LFFreq->addListener (this);

    addAndMakeVisible (LFQ = new Slider ("LFQ"));
    LFQ->setRange (0.5, 3, 0);
    LFQ->setSliderStyle (Slider::Rotary);
    LFQ->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    LFQ->setColour (Slider::thumbColourId, Colour (0xffffbbbb));
    LFQ->setColour (Slider::rotarySliderFillColourId, Colour (0x7f1100ff));
    LFQ->setColour (Slider::textBoxHighlightColourId, Colour (0x40ee1111));
    LFQ->addListener (this);

    addAndMakeVisible (LMFGain = new Slider ("LMFGain"));
    LMFGain->setRange (0, 10, 0);
    LMFGain->setSliderStyle (Slider::Rotary);
    LMFGain->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    LMFGain->addListener (this);

    addAndMakeVisible (LMFShape = new Slider ("LMFShape"));
    LMFShape->setRange (0, 1, 0);
    LMFShape->setSliderStyle (Slider::Rotary);
    LMFShape->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    LMFShape->setColour (Slider::thumbColourId, Colour (0xffffbbbb));
    LMFShape->setColour (Slider::rotarySliderFillColourId, Colour (0x7f1100ff));
    LMFShape->setColour (Slider::textBoxHighlightColourId, Colour (0x40ee1111));
    LMFShape->addListener (this);

    addAndMakeVisible (LMFFreq = new Slider ("LMFFreq"));
    LMFFreq->setRange (90, 1400, 0);
    LMFFreq->setSliderStyle (Slider::Rotary);
    LMFFreq->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    LMFFreq->addListener (this);

    addAndMakeVisible (LMFQ = new Slider ("LMFQ"));
    LMFQ->setRange (0.5, 3, 0);
    LMFQ->setSliderStyle (Slider::Rotary);
    LMFQ->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    LMFQ->setColour (Slider::thumbColourId, Colour (0xffffbbbb));
    LMFQ->setColour (Slider::rotarySliderFillColourId, Colour (0x7f1100ff));
    LMFQ->setColour (Slider::textBoxHighlightColourId, Colour (0x40ee1111));
    LMFQ->addListener (this);

    addAndMakeVisible (HMFGain = new Slider ("HMFGain"));
    HMFGain->setRange (0, 10, 0);
    HMFGain->setSliderStyle (Slider::Rotary);
    HMFGain->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    HMFGain->addListener (this);

    addAndMakeVisible (HMFShape = new Slider ("HMFShape"));
    HMFShape->setRange (0, 1, 0);
    HMFShape->setSliderStyle (Slider::Rotary);
    HMFShape->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    HMFShape->setColour (Slider::thumbColourId, Colour (0xffffbbbb));
    HMFShape->setColour (Slider::rotarySliderFillColourId, Colour (0x7f1100ff));
    HMFShape->setColour (Slider::textBoxHighlightColourId, Colour (0x40ee1111));
    HMFShape->addListener (this);

    addAndMakeVisible (HMFFreq = new Slider ("HMFFreq"));
    HMFFreq->setRange (400, 6000, 0);
    HMFFreq->setSliderStyle (Slider::Rotary);
    HMFFreq->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    HMFFreq->addListener (this);

    addAndMakeVisible (HMFQ = new Slider ("HMFQ"));
    HMFQ->setRange (0.5, 3, 0);
    HMFQ->setSliderStyle (Slider::Rotary);
    HMFQ->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    HMFQ->setColour (Slider::thumbColourId, Colour (0xffffbbbb));
    HMFQ->setColour (Slider::rotarySliderFillColourId, Colour (0x7f1100ff));
    HMFQ->setColour (Slider::textBoxHighlightColourId, Colour (0x40ee1111));
    HMFQ->addListener (this);

    addAndMakeVisible (HFGain = new Slider ("HFGain"));
    HFGain->setRange (0, 10, 0);
    HFGain->setSliderStyle (Slider::Rotary);
    HFGain->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    HFGain->addListener (this);

    addAndMakeVisible (HFShape = new Slider ("HFShape"));
    HFShape->setRange (0, 1, 0);
    HFShape->setSliderStyle (Slider::Rotary);
    HFShape->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    HFShape->setColour (Slider::thumbColourId, Colour (0xffffbbbb));
    HFShape->setColour (Slider::rotarySliderFillColourId, Colour (0x7f1100ff));
    HFShape->setColour (Slider::textBoxHighlightColourId, Colour (0x40ee1111));
    HFShape->addListener (this);

    addAndMakeVisible (HFFreq = new Slider ("HFFreq"));
    HFFreq->setRange (1500, 22000, 0);
    HFFreq->setSliderStyle (Slider::Rotary);
    HFFreq->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    HFFreq->addListener (this);

    addAndMakeVisible (HFQ = new Slider ("HFQ"));
    HFQ->setRange (0.5, 3, 0);
    HFQ->setSliderStyle (Slider::Rotary);
    HFQ->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    HFQ->setColour (Slider::thumbColourId, Colour (0xffffbbbb));
    HFQ->setColour (Slider::rotarySliderFillColourId, Colour (0x7f1100ff));
    HFQ->setColour (Slider::textBoxHighlightColourId, Colour (0x40ee1111));
    HFQ->addListener (this);

    addAndMakeVisible (HPFreq = new Slider ("HPFreq"));
    HPFreq->setRange (20, 340, 0);
    HPFreq->setSliderStyle (Slider::Rotary);
    HPFreq->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    HPFreq->addListener (this);

    addAndMakeVisible (HPQ = new Slider ("HPQ"));
    HPQ->setRange (0.5, 3, 0);
    HPQ->setSliderStyle (Slider::Rotary);
    HPQ->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    HPQ->setColour (Slider::thumbColourId, Colour (0xffffbbbb));
    HPQ->setColour (Slider::rotarySliderFillColourId, Colour (0x7f1100ff));
    HPQ->setColour (Slider::textBoxHighlightColourId, Colour (0x40ee1111));
    HPQ->addListener (this);

    addAndMakeVisible (LPFreq = new Slider ("LPFreq"));
    LPFreq->setRange (1500, 22000, 0);
    LPFreq->setSliderStyle (Slider::Rotary);
    LPFreq->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    LPFreq->addListener (this);

    addAndMakeVisible (LPQ = new Slider ("LPQ"));
    LPQ->setRange (0.5, 3, 0);
    LPQ->setSliderStyle (Slider::Rotary);
    LPQ->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    LPQ->setColour (Slider::thumbColourId, Colour (0xffffbbbb));
    LPQ->setColour (Slider::rotarySliderFillColourId, Colour (0x7f1100ff));
    LPQ->setColour (Slider::textBoxHighlightColourId, Colour (0x40ee1111));
    LPQ->addListener (this);

    addAndMakeVisible (LFPN = new ImageButton ("LFPN"));
    LFPN->addListener (this);

    LFPN->setImages (false, true, true,
                     ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                     ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                     ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (LFEnable = new ImageButton ("LFEnable"));
    LFEnable->addListener (this);

    LFEnable->setImages (false, true, true,
                         ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                         ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                         ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (LMFPos = new ImageButton ("LMFPos"));
    LMFPos->addListener (this);

    LMFPos->setImages (false, true, true,
                       ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                       ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                       ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (LMFPN = new ImageButton ("LMFPN"));
    LMFPN->addListener (this);

    LMFPN->setImages (false, true, true,
                      ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (LMFEnable = new ImageButton ("LMFEnable"));
    LMFEnable->addListener (this);

    LMFEnable->setImages (false, true, true,
                          ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                          ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                          ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (HMFPos = new ImageButton ("HMFPos"));
    HMFPos->addListener (this);

    HMFPos->setImages (false, true, true,
                       ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                       ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                       ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (HMFPN = new ImageButton ("HMFPN"));
    HMFPN->addListener (this);

    HMFPN->setImages (false, true, true,
                      ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (HMFEnable = new ImageButton ("HMFEnable"));
    HMFEnable->addListener (this);

    HMFEnable->setImages (false, true, true,
                          ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                          ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                          ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (HFPos = new ImageButton ("HFPos"));
    HFPos->addListener (this);

    HFPos->setImages (false, true, true,
                      ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (HFPN = new ImageButton ("HFPN"));
    HFPN->addListener (this);

    HFPN->setImages (false, true, true,
                     ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                     ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                     ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (HFEnable = new ImageButton ("HFEnable"));
    HFEnable->addListener (this);

    HFEnable->setImages (false, true, true,
                         ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                         ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                         ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (HPEnable = new ImageButton ("HPEnable"));
    HPEnable->addListener (this);

    HPEnable->setImages (false, true, true,
                         ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                         ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                         ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (LPEnable = new ImageButton ("LPEnable"));
    LPEnable->addListener (this);

    LPEnable->setImages (false, true, true,
                         ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                         ImageCache::getFromMemory (switcherUp_png, switcherUp_pngSize), 1.000f, Colour (0x00000000),
                         ImageCache::getFromMemory (switcherDown_png, switcherDown_pngSize), 1.000f, Colour (0x00000000));

    //[UserPreSize]
    //[/UserPreSize]

    setSize (1000, 150);


    //[Constructor] You can add your own custom stuff here..
    LFPos->setClickingTogglesState(true);
    LFPN->setClickingTogglesState(true);
    LFEnable->setClickingTogglesState(true);
    LMFPos->setClickingTogglesState(true);
    LMFPN->setClickingTogglesState(true);
    LMFEnable->setClickingTogglesState(true);
    HMFPos->setClickingTogglesState(true);
    HMFPN->setClickingTogglesState(true);
    HMFEnable->setClickingTogglesState(true);
    HFPos->setClickingTogglesState(true);
    HFPN->setClickingTogglesState(true);
    HFEnable->setClickingTogglesState(true);
    HPEnable->setClickingTogglesState(true);
    LPEnable->setClickingTogglesState(true);


    this->LFPosBool = LFPos->getToggleState();
    this->LFPNBool = LFPN->getToggleState();
    this->LFEnableBool = LFEnable->getToggleState();
    this->LMFPosBool = LFPos->getToggleState();
    this->LMFPNBool = LMFPN->getToggleState();
    this->LMFEnableBool = LMFEnable->getToggleState();
    this->HMFPosBool = HMFPos->getToggleState();
    this->HMFPNBool = HMFPN->getToggleState();
    this->HMFEnableBool = HMFEnable->getToggleState();
    this->HFPosBool = HFPos->getToggleState();
    this->HFPNBool = HFPN->getToggleState();
    this->HFEnableBool = HFEnable->getToggleState();
    this->HPEnableBool = HPEnable->getToggleState();
    this->LPEnableBool = LPEnable->getToggleState();

    this->LPFreqValue = 22000;
    LPFreq->setValue(22000);
    this->LPQValue = 0.5;

    this->HPFreqValue = 20;
    this->HPQValue = 0.5;

    this->LFFreqValue = 20;
    this->LFQValue = 0.5;
    this->LFShapeValue = 0;
    this->LFGainValue = 0;
    
    this->LMFFreqValue = 90;
    this->LMFQValue = 0.5;
    this->LMFShapeValue = 0;
    this->LMFGainValue = 0;

    this->HMFFreqValue = 400;
    this->HMFQValue = 0.5;
    this->HMFShapeValue = 0;
    this->HMFGainValue = 0;
    
    this->HFFreqValue = 1500;
    this->HFQValue = 0.5;
    this->HFShapeValue = 0;
    this->HFGainValue = 0;

    //[/Constructor]
}

Gui::~Gui()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    LFGain = nullptr;
    LFShape = nullptr;
    LFPos = nullptr;
    LFFreq = nullptr;
    LFQ = nullptr;
    LMFGain = nullptr;
    LMFShape = nullptr;
    LMFFreq = nullptr;
    LMFQ = nullptr;
    HMFGain = nullptr;
    HMFShape = nullptr;
    HMFFreq = nullptr;
    HMFQ = nullptr;
    HFGain = nullptr;
    HFShape = nullptr;
    HFFreq = nullptr;
    HFQ = nullptr;
    HPFreq = nullptr;
    HPQ = nullptr;
    LPFreq = nullptr;
    LPQ = nullptr;
    LFPN = nullptr;
    LFEnable = nullptr;
    LMFPos = nullptr;
    LMFPN = nullptr;
    LMFEnable = nullptr;
    HMFPos = nullptr;
    HMFPN = nullptr;
    HMFEnable = nullptr;
    HFPos = nullptr;
    HFPN = nullptr;
    HFEnable = nullptr;
    HPEnable = nullptr;
    LPEnable = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Gui::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xffdbd446));

    g.setColour (Colour (0x964d4c4d));
    g.fillRoundedRectangle (172.0f, 4.0f, 8.0f, 132.0f, 4.500f);

    g.setColour (Colour (0x964d4c4d));
    g.fillRoundedRectangle (356.0f, 4.0f, 8.0f, 132.0f, 4.500f);

    g.setColour (Colour (0x964d4c4d));
    g.fillRoundedRectangle (540.0f, 4.0f, 8.0f, 132.0f, 4.500f);

    g.setColour (Colour (0x964d4c4d));
    g.fillRoundedRectangle (732.0f, 4.0f, 8.0f, static_cast<float> (proportionOfHeight (0.1725f)), 4.500f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Gui::resized()
{
    LFGain->setBounds (46 - (75 / 2), 46 - (75 / 2), 75, 75);
    LFShape->setBounds ((46 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), (46 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), roundFloatToInt (75 * 0.6667f), roundFloatToInt (75 * 0.6667f));
    LFPos->setBounds (16, 88, 24, 40);
    LFFreq->setBounds (126 - (75 / 2), 110 - (75 / 2), 75, 75);
    LFQ->setBounds ((126 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), (110 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), roundFloatToInt (75 * 0.6667f), roundFloatToInt (75 * 0.6667f));
    LMFGain->setBounds (230 - (75 / 2), 46 - (75 / 2), 75, 75);
    LMFShape->setBounds ((230 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), (46 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), roundFloatToInt (75 * 0.6667f), roundFloatToInt (75 * 0.6667f));
    LMFFreq->setBounds (310 - (75 / 2), 110 - (75 / 2), 75, 75);
    LMFQ->setBounds ((310 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), (110 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), roundFloatToInt (75 * 0.6667f), roundFloatToInt (75 * 0.6667f));
    HMFGain->setBounds (414 - (75 / 2), 46 - (75 / 2), 75, 75);
    HMFShape->setBounds ((414 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), (46 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), roundFloatToInt (75 * 0.6667f), roundFloatToInt (75 * 0.6667f));
    HMFFreq->setBounds (494 - (75 / 2), 110 - (75 / 2), 75, 75);
    HMFQ->setBounds ((494 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), (110 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), roundFloatToInt (75 * 0.6667f), roundFloatToInt (75 * 0.6667f));
    HFGain->setBounds (598 - (75 / 2), 46 - (75 / 2), 75, 75);
    HFShape->setBounds ((598 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), (46 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), roundFloatToInt (75 * 0.6667f), roundFloatToInt (75 * 0.6667f));
    HFFreq->setBounds (678 - (75 / 2), 110 - (75 / 2), 75, 75);
    HFQ->setBounds ((678 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), (110 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), roundFloatToInt (75 * 0.6667f), roundFloatToInt (75 * 0.6667f));
    HPFreq->setBounds (790 - (75 / 2), 46 - (75 / 2), 75, 75);
    HPQ->setBounds ((790 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), (46 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), roundFloatToInt (75 * 0.6667f), roundFloatToInt (75 * 0.6667f));
    LPFreq->setBounds (870 - (75 / 2), 46 - (75 / 2), 75, 75);
    LPQ->setBounds ((870 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), (46 - (75 / 2)) + roundFloatToInt (75 * 0.5000f) - ((roundFloatToInt (75 * 0.6667f)) / 2), roundFloatToInt (75 * 0.6667f), roundFloatToInt (75 * 0.6667f));
    LFPN->setBounds (48, 88, 24, 40);
    LFEnable->setBounds (112, 16, 24, 40);
    LMFPos->setBounds (200, 88, 24, 40);
    LMFPN->setBounds (232, 88, 24, 40);
    LMFEnable->setBounds (296, 16, 24, 40);
    HMFPos->setBounds (384, 88, 24, 40);
    HMFPN->setBounds (416, 88, 24, 40);
    HMFEnable->setBounds (480, 16, 24, 40);
    HFPos->setBounds (568, 88, 24, 40);
    HFPN->setBounds (600, 88, 24, 40);
    HFEnable->setBounds (664, 16, 24, 40);
    HPEnable->setBounds (776, 88, 24, 40);
    LPEnable->setBounds (856, 88, 24, 40);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Gui::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == LFGain)
    {
        //[UserSliderCode_LFGain] -- add your slider handling code here..
        this->LFGainValue = LFGain->getValue();
        //[/UserSliderCode_LFGain]
    }
    else if (sliderThatWasMoved == LFShape)
    {
        //[UserSliderCode_LFShape] -- add your slider handling code here..
        this->LFShapeValue = LFShape->getValue();
        //[/UserSliderCode_LFShape]
    }
    else if (sliderThatWasMoved == LFFreq)
    {
        //[UserSliderCode_LFFreq] -- add your slider handling code here..
        this->LFFreqValue = LFFreq->getValue();
        //[/UserSliderCode_LFFreq]
    }
    else if (sliderThatWasMoved == LFQ)
    {
        //[UserSliderCode_LFQ] -- add your slider handling code here..
        this->LFQValue = LFQ->getValue();
        //[/UserSliderCode_LFQ]
    }
    else if (sliderThatWasMoved == LMFGain)
    {
        //[UserSliderCode_LMFGain] -- add your slider handling code here..
        this->LMFGainValue = LMFGain->getValue();
        //[/UserSliderCode_LMFGain]
    }
    else if (sliderThatWasMoved == LMFShape)
    {
        //[UserSliderCode_LMFShape] -- add your slider handling code here..
        this->LMFShapeValue = LMFShape->getValue();
        //[/UserSliderCode_LMFShape]
    }
    else if (sliderThatWasMoved == LMFFreq)
    {
        //[UserSliderCode_LMFFreq] -- add your slider handling code here..
        this->LMFFreqValue = LMFFreq->getValue();
        //[/UserSliderCode_LMFFreq]
    }
    else if (sliderThatWasMoved == LMFQ)
    {
        //[UserSliderCode_LMFQ] -- add your slider handling code here..
        this->LMFQValue = LMFQ->getValue();
        //[/UserSliderCode_LMFQ]
    }
    else if (sliderThatWasMoved == HMFGain)
    {
        //[UserSliderCode_HMFGain] -- add your slider handling code here..
        this->HMFGainValue = HMFGain->getValue();
        //[/UserSliderCode_HMFGain]
    }
    else if (sliderThatWasMoved == HMFShape)
    {
        //[UserSliderCode_HMFShape] -- add your slider handling code here..
        this->HMFShapeValue = HMFShape->getValue();
        //[/UserSliderCode_HMFShape]
    }
    else if (sliderThatWasMoved == HMFFreq)
    {
        //[UserSliderCode_HMFFreq] -- add your slider handling code here..
        this->HMFFreqValue = HMFFreq->getValue();
        //[/UserSliderCode_HMFFreq]
    }
    else if (sliderThatWasMoved == HMFQ)
    {
        //[UserSliderCode_HMFQ] -- add your slider handling code here..
        this->HMFQValue = HMFQ->getValue();
        //[/UserSliderCode_HMFQ]
    }
    else if (sliderThatWasMoved == HFGain)
    {
        //[UserSliderCode_HFGain] -- add your slider handling code here..
        this->HFGainValue = HFGain->getValue();
        //[/UserSliderCode_HFGain]
    }
    else if (sliderThatWasMoved == HFShape)
    {
        //[UserSliderCode_HFShape] -- add your slider handling code here..
        this->HFShapeValue = HFShape->getValue();
        //[/UserSliderCode_HFShape]
    }
    else if (sliderThatWasMoved == HFFreq)
    {
        //[UserSliderCode_HFFreq] -- add your slider handling code here..
        this->HFFreqValue = HFFreq->getValue();
        //[/UserSliderCode_HFFreq]
    }
    else if (sliderThatWasMoved == HFQ)
    {
        //[UserSliderCode_HFQ] -- add your slider handling code here..
        this->HFQValue = HFQ->getValue();
        //[/UserSliderCode_HFQ]
    }
    else if (sliderThatWasMoved == HPFreq)
    {
        //[UserSliderCode_HPFreq] -- add your slider handling code here..
        this->HPFreqValue = HPFreq->getValue();
        //[/UserSliderCode_HPFreq]
    }
    else if (sliderThatWasMoved == HPQ)
    {
        //[UserSliderCode_HPQ] -- add your slider handling code here..
        this->HPQValue = HPQ->getValue();
        //[/UserSliderCode_HPQ]
    }
    else if (sliderThatWasMoved == LPFreq)
    {
        //[UserSliderCode_LPFreq] -- add your slider handling code here..
        this->LPFreqValue = LPFreq->getValue();
        //[/UserSliderCode_LPFreq]
    }
    else if (sliderThatWasMoved == LPQ)
    {
        //[UserSliderCode_LPQ] -- add your slider handling code here..
        this->LPQValue = LPQ->getValue();
        //[/UserSliderCode_LPQ]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void Gui::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == LFPos)
    {
        //[UserButtonCode_LFPos] -- add your button handler code here..
        this->LFPosBool = LFPos->getToggleState();
        //[/UserButtonCode_LFPos]
    }
    else if (buttonThatWasClicked == LFPN)
    {
        //[UserButtonCode_LFPN] -- add your button handler code here..
        this->LFPNBool = LFPN->getToggleState();
        //[/UserButtonCode_LFPN]
    }
    else if (buttonThatWasClicked == LFEnable)
    {
        //[UserButtonCode_LFEnable] -- add your button handler code here..
        this->LFEnableBool = LFEnable->getToggleState();
        //[/UserButtonCode_LFEnable]
    }
    else if (buttonThatWasClicked == LMFPos)
    {
        //[UserButtonCode_LMFPos] -- add your button handler code here..
        this->LMFPosBool = LMFPos->getToggleState();
        //[/UserButtonCode_LMFPos]
    }
    else if (buttonThatWasClicked == LMFPN)
    {
        //[UserButtonCode_LMFPN] -- add your button handler code here..
        this->LMFPNBool = LMFPN->getToggleState();
        //[/UserButtonCode_LMFPN]
    }
    else if (buttonThatWasClicked == LMFEnable)
    {
        //[UserButtonCode_LMFEnable] -- add your button handler code here..
        this->LMFEnableBool = LMFEnable->getToggleState();
        //[/UserButtonCode_LMFEnable]
    }
    else if (buttonThatWasClicked == HMFPos)
    {
        //[UserButtonCode_HMFPos] -- add your button handler code here..
        this->HMFPosBool = HMFPos->getToggleState();
        //[/UserButtonCode_HMFPos]
    }
    else if (buttonThatWasClicked == HMFPN)
    {
        //[UserButtonCode_HMFPN] -- add your button handler code here..
        this->HMFPNBool = HMFPN->getToggleState();
        //[/UserButtonCode_HMFPN]
    }
    else if (buttonThatWasClicked == HMFEnable)
    {
        //[UserButtonCode_HMFEnable] -- add your button handler code here..
        this->HMFEnableBool = HMFEnable->getToggleState();
        //[/UserButtonCode_HMFEnable]
    }
    else if (buttonThatWasClicked == HFPos)
    {
        //[UserButtonCode_HFPos] -- add your button handler code here..
        this->HFPosBool = HFPos->getToggleState();
        //[/UserButtonCode_HFPos]
    }
    else if (buttonThatWasClicked == HFPN)
    {
        //[UserButtonCode_HFPN] -- add your button handler code here..
        this->HFPNBool = HFPN->getToggleState();
        //[/UserButtonCode_HFPN]
    }
    else if (buttonThatWasClicked == HFEnable)
    {
        //[UserButtonCode_HFEnable] -- add your button handler code here..
        this->HFEnableBool = HFEnable->getToggleState();
        //[/UserButtonCode_HFEnable]
    }
    else if (buttonThatWasClicked == HPEnable)
    {
        //[UserButtonCode_HPEnable] -- add your button handler code here..
        this->HPEnableBool = HPEnable->getToggleState();
        //[/UserButtonCode_HPEnable]
    }
    else if (buttonThatWasClicked == LPEnable)
    {
        //[UserButtonCode_LPEnable] -- add your button handler code here..
        this->LPEnableBool = LPEnable->getToggleState();
        //[/UserButtonCode_LPEnable]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
double Gui::get_LFGainValue(){
    return LFGainValue;
}
double Gui::get_LFShapeValue(){
    return LFShapeValue;
}
double Gui::get_LFFreqValue(){
    return LFFreqValue;
}
double Gui::get_LFQValue(){
    return LFQValue;
}
double Gui::get_LMFGainValue(){
    return LMFGainValue;
}
double Gui::get_LMFShapeValue(){
    return LMFShapeValue;
}
double Gui::get_LMFFreqValue(){
    return LMFFreqValue;
}
double Gui::get_LMFQValue(){
    return LMFQValue;
}
double Gui::get_HMFGainValue(){
    return HMFGainValue;
}
double Gui::get_HMFShapeValue(){
    return HMFShapeValue;
}
double Gui::get_HMFFreqValue(){
    return HMFFreqValue;
}
double Gui::get_HMFQValue(){
    return HMFQValue;
}
double Gui::get_HFGainValue(){
    return HFGainValue;
}
double Gui::get_HFShapeValue(){
    return HFShapeValue;
}
double Gui::get_HFFreqValue(){
    return HFFreqValue;
}
double Gui::get_HFQValue(){
    return HFQValue;
}
double Gui::get_HPFreqValue(){
    return HPFreqValue;
}
double Gui::get_HPQValue(){
    return HPQValue;
}
double Gui::get_LPFreqValue(){
    return LPFreqValue;
}
double Gui::get_LPQValue(){
    return LPQValue;
}

bool Gui::get_LFPosBool(){
    return LFPNBool;
}
bool Gui::get_LFPNBool(){
    return LFPNBool;
}
bool Gui::get_LFEnableBool(){
    return LFEnableBool;
}
bool Gui::get_LMFPosBool(){
    return LMFPosBool;
}
bool Gui::get_LMFPNBool(){
    return LMFPNBool;
}
bool Gui::get_LMFEnableBool(){
    return LMFEnableBool;
}
bool Gui::get_HMFPosBool(){
    return HMFPosBool;
}
bool Gui::get_HMFPNBool(){
    return HMFPNBool;
}
bool Gui::get_HMFEnableBool(){
    return  HMFEnableBool;
}
bool Gui::get_HFPosBool(){
    return HFPosBool;
}
bool Gui::get_HFPNBool(){
    return HFPNBool;
}
bool Gui::get_HFEnableBool(){
    return HFEnableBool;
}
bool Gui::get_HPEnableBool(){
    return HPEnableBool;
}
bool Gui::get_LPEnableBool(){
    return LPEnableBool;
}

void Gui::set_LFGainValue(double input){
    this->LFGainValue = input;
    LFGain->setValue(input);

}
void Gui::set_LFShapeValue(double input){
    this->LFShapeValue = input;
    LFShape->setValue(input);
}
void Gui::set_LFFreqValue(double input){
    this->LFFreqValue = input;
    LFFreq->setValue(input);
}
void Gui::set_LFQValue(double input){
    this->LFQValue = input;
    LFQ->setValue(input);
}
void Gui::set_LMFGainValue(double input){
    this->LMFGainValue = input;
    LMFGain->setValue(input);
}
void Gui::set_LMFShapeValue(double input){
    this->LMFShapeValue = input;
    LMFShape->setValue(input);
}
void Gui::set_LMFFreqValue(double input){
    this->LMFFreqValue = input;
    LMFFreq->setValue(input);
}
void Gui::set_LMFQValue(double input){
    this->LMFQValue = input;
    LMFQ->setValue(input);
}
void Gui::set_HMFGainValue(double input){
    this->HMFGainValue = input;
    HMFGain->setValue(input);
}
void Gui::set_HMFShapeValue(double input){
    this->HMFShapeValue = input;
    HMFShape->setValue(input);
}
void Gui::set_HMFFreqValue(double input){
    this->HMFFreqValue = input;
    HMFFreq->setValue(input);
}
void Gui::set_HMFQValue(double input){
    this->HMFQValue = input;
    HMFQ->setValue(input);
}
void Gui::set_HFGainValue(double input){
    this->HFGainValue = input;
    HFGain->setValue(input);
}
void Gui::set_HFShapeValue(double input){
    this->HFShapeValue = input;
    HFShape->setValue(input);
}
void Gui::set_HFFreqValue(double input){
    this->HFFreqValue = input;
    HFFreq->setValue(input);
}
void Gui::set_HFQValue(double input){
    this->HFQValue = input;
    HFQ->setValue(input);
}
void Gui::set_HPFreqValue(double input){
    this->HPFreqValue = input;
    HPFreq->setValue(input);
}
void Gui::set_HPQValue(double input){
    this->HPQValue = input;
    HPQ->setValue(input);
}
void Gui::set_LPFreqValue(double input){
    this->LPFreqValue = input;
    LPFreq->setValue(input);
}
void Gui::set_LPQValue(double input){
    this->LPQValue = input;
    LPQ->setValue(input);
}

void Gui::set_LFPosBool(bool input){
    this->LFPosBool = input;
    LFPos->setToggleState(input, sendNotification);
}
void Gui::set_LFPNBool(bool input){
    this->LFPNBool = input;
    LFPN->setToggleState(input, sendNotification);
}
void Gui::set_LFEnableBool(bool input){
    this->LFEnableBool = input;
    LFEnable->setToggleState(input, sendNotification);
}
void Gui::set_LMFPosBool(bool input){
    this->LMFPosBool = input;
    LMFPos->setToggleState(input, sendNotification);
}
void Gui::set_LMFPNBool(bool input){
    this->LMFPNBool = input;
    LMFPN->setToggleState(input, sendNotification);
}
void Gui::set_LMFEnableBool(bool input){
    this->LMFEnableBool = input;
    LMFEnable->setToggleState(input, sendNotification);
}
void Gui::set_HMFPosBool(bool input){
    this->HMFPosBool = input;
    HMFPos->setToggleState(input, sendNotification);
}
void Gui::set_HMFPNBool(bool input){
    this->HMFPNBool = input;
    HMFPN->setToggleState(input, sendNotification);
}
void Gui::set_HMFEnableBool(bool input){
    this->HMFEnableBool = input;
    HMFEnable->setToggleState(input, sendNotification);
}
void Gui::set_HFPosBool(bool input){
    this->HFPosBool = input;
    HFPos->setToggleState(input, sendNotification);
}
void Gui::set_HFPNBool(bool input){
    this->HFPNBool = input;
    HFPN->setToggleState(input, sendNotification);
}
void Gui::set_HFEnableBool(bool input){
    this->HFEnableBool = input;
    HFEnable->setToggleState(input, sendNotification);
}
void Gui::set_HPEnableBool(bool input){
    this->HPEnableBool = input;
    HPEnable->setToggleState(input, sendNotification);
}
void Gui::set_LPEnableBool(bool input){
    this->LPEnableBool = input;
    LPEnable->setToggleState(input, sendNotification);
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Gui" componentName="" parentClasses="public Component"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="1000"
                 initialHeight="150">
  <BACKGROUND backgroundColour="ffdbd446">
    <ROUNDRECT pos="172 4 8 132" cornerSize="4.5" fill="solid: 964d4c4d" hasStroke="0"/>
    <ROUNDRECT pos="356 4 8 132" cornerSize="4.5" fill="solid: 964d4c4d" hasStroke="0"/>
    <ROUNDRECT pos="540 4 8 132" cornerSize="4.5" fill="solid: 964d4c4d" hasStroke="0"/>
    <ROUNDRECT pos="732 4 8 17.255%" cornerSize="4.5" fill="solid: 964d4c4d"
               hasStroke="0"/>
  </BACKGROUND>
  <SLIDER name="LFGain" id="2da3ccd11a0571ba" memberName="LFGain" virtualName=""
          explicitFocusOrder="0" pos="45.5c 45.5c 75 75" min="0" max="10"
          int="0" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="LFShape" id="c3b66bdd39bb9695" memberName="LFShape" virtualName=""
          explicitFocusOrder="0" pos="49.333%c 49.333%c 66.667% 66.667%"
          posRelativeX="2da3ccd11a0571ba" posRelativeY="2da3ccd11a0571ba"
          posRelativeW="2da3ccd11a0571ba" posRelativeH="2da3ccd11a0571ba"
          thumbcol="ffffbbbb" rotarysliderfill="7f1100ff" textboxhighlight="40ee1111"
          min="0" max="1" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <IMAGEBUTTON name="LFPos" id="f89c37fbfe8b4695" memberName="LFPos" virtualName=""
               explicitFocusOrder="0" pos="16 88 24 40" buttonText="LFPos" connectedEdges="0"
               needsCallback="1" radioGroupId="0" keepProportions="1" resourceNormal="switcherUp_png"
               opacityNormal="1" colourNormal="0" resourceOver="switcherUp_png"
               opacityOver="1" colourOver="0" resourceDown="switcherDown_png"
               opacityDown="1" colourDown="0"/>
  <SLIDER name="LFFreq" id="8d1838f73a6a2fa4" memberName="LFFreq" virtualName=""
          explicitFocusOrder="0" pos="125.5c 109.5c 75 75" min="20" max="340"
          int="0" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="LFQ" id="99c50d5da624389f" memberName="LFQ" virtualName=""
          explicitFocusOrder="0" pos="49.333%c 49.333%c 66.667% 66.667%"
          posRelativeX="8d1838f73a6a2fa4" posRelativeY="8d1838f73a6a2fa4"
          posRelativeW="8d1838f73a6a2fa4" posRelativeH="8d1838f73a6a2fa4"
          thumbcol="ffffbbbb" rotarysliderfill="7f1100ff" textboxhighlight="40ee1111"
          min="0.5" max="3" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="LMFGain" id="e36c61139074928d" memberName="LMFGain" virtualName=""
          explicitFocusOrder="0" pos="229.5c 45.5c 75 75" min="0" max="10"
          int="0" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="LMFShape" id="44702fe8e458ac09" memberName="LMFShape" virtualName=""
          explicitFocusOrder="0" pos="49.333%c 49.333%c 66.667% 66.667%"
          posRelativeX="e36c61139074928d" posRelativeY="e36c61139074928d"
          posRelativeW="e36c61139074928d" posRelativeH="e36c61139074928d"
          thumbcol="ffffbbbb" rotarysliderfill="7f1100ff" textboxhighlight="40ee1111"
          min="0" max="1" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="LMFFreq" id="51d0c4677cd4bbab" memberName="LMFFreq" virtualName=""
          explicitFocusOrder="0" pos="309.5c 109.5c 75 75" min="90" max="1400"
          int="0" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="LMFQ" id="81c2b9e0744f63ca" memberName="LMFQ" virtualName=""
          explicitFocusOrder="0" pos="49.333%c 49.333%c 66.667% 66.667%"
          posRelativeX="51d0c4677cd4bbab" posRelativeY="51d0c4677cd4bbab"
          posRelativeW="51d0c4677cd4bbab" posRelativeH="51d0c4677cd4bbab"
          thumbcol="ffffbbbb" rotarysliderfill="7f1100ff" textboxhighlight="40ee1111"
          min="0.5" max="3" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="HMFGain" id="e797ce9b4e623ce9" memberName="HMFGain" virtualName=""
          explicitFocusOrder="0" pos="413.5c 45.5c 75 75" min="0" max="10"
          int="0" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="HMFShape" id="5136b6bc052cdb56" memberName="HMFShape" virtualName=""
          explicitFocusOrder="0" pos="49.333%c 49.333%c 66.667% 66.667%"
          posRelativeX="e797ce9b4e623ce9" posRelativeY="e797ce9b4e623ce9"
          posRelativeW="e797ce9b4e623ce9" posRelativeH="e797ce9b4e623ce9"
          thumbcol="ffffbbbb" rotarysliderfill="7f1100ff" textboxhighlight="40ee1111"
          min="0" max="1" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="HMFFreq" id="1d5de2929924bd4b" memberName="HMFFreq" virtualName=""
          explicitFocusOrder="0" pos="493.5c 109.5c 75 75" min="400" max="6000"
          int="0" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="HMFQ" id="c3920e7a958555f9" memberName="HMFQ" virtualName=""
          explicitFocusOrder="0" pos="49.333%c 49.333%c 66.667% 66.667%"
          posRelativeX="1d5de2929924bd4b" posRelativeY="1d5de2929924bd4b"
          posRelativeW="1d5de2929924bd4b" posRelativeH="1d5de2929924bd4b"
          thumbcol="ffffbbbb" rotarysliderfill="7f1100ff" textboxhighlight="40ee1111"
          min="0.5" max="3" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="HFGain" id="5a64293800a187be" memberName="HFGain" virtualName=""
          explicitFocusOrder="0" pos="597.5c 45.5c 75 75" min="0" max="10"
          int="0" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="HFShape" id="7b260dd48ed98dcd" memberName="HFShape" virtualName=""
          explicitFocusOrder="0" pos="49.333%c 49.333%c 66.667% 66.667%"
          posRelativeX="5a64293800a187be" posRelativeY="5a64293800a187be"
          posRelativeW="5a64293800a187be" posRelativeH="5a64293800a187be"
          thumbcol="ffffbbbb" rotarysliderfill="7f1100ff" textboxhighlight="40ee1111"
          min="0" max="1" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="HFFreq" id="2f090c23a99474c7" memberName="HFFreq" virtualName=""
          explicitFocusOrder="0" pos="677.5c 109.5c 75 75" min="1500" max="22000"
          int="0" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="HFQ" id="30d8aa2b0ed8c341" memberName="HFQ" virtualName=""
          explicitFocusOrder="0" pos="49.333%c 49.333%c 66.667% 66.667%"
          posRelativeX="2f090c23a99474c7" posRelativeY="2f090c23a99474c7"
          posRelativeW="2f090c23a99474c7" posRelativeH="2f090c23a99474c7"
          thumbcol="ffffbbbb" rotarysliderfill="7f1100ff" textboxhighlight="40ee1111"
          min="0.5" max="3" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="HPFreq" id="a27c250061a41ca7" memberName="HPFreq" virtualName=""
          explicitFocusOrder="0" pos="789.5c 45.5c 75 75" min="20" max="340"
          int="0" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="HPQ" id="b233d48e5d6b717c" memberName="HPQ" virtualName=""
          explicitFocusOrder="0" pos="49.333%c 49.333%c 66.667% 66.667%"
          posRelativeX="a27c250061a41ca7" posRelativeY="a27c250061a41ca7"
          posRelativeW="a27c250061a41ca7" posRelativeH="a27c250061a41ca7"
          thumbcol="ffffbbbb" rotarysliderfill="7f1100ff" textboxhighlight="40ee1111"
          min="0.5" max="3" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="LPFreq" id="eb953b056784384c" memberName="LPFreq" virtualName=""
          explicitFocusOrder="0" pos="869.5c 45.5c 75 75" min="1500" max="22000"
          int="0" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="LPQ" id="bb46a6252824b9d2" memberName="LPQ" virtualName=""
          explicitFocusOrder="0" pos="49.333%c 49.333%c 66.667% 66.667%"
          posRelativeX="eb953b056784384c" posRelativeY="eb953b056784384c"
          posRelativeW="eb953b056784384c" posRelativeH="eb953b056784384c"
          thumbcol="ffffbbbb" rotarysliderfill="7f1100ff" textboxhighlight="40ee1111"
          min="0.5" max="3" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <IMAGEBUTTON name="LFPN" id="1605adfc1ac47edd" memberName="LFPN" virtualName=""
               explicitFocusOrder="0" pos="48 88 24 40" buttonText="LFPN" connectedEdges="0"
               needsCallback="1" radioGroupId="0" keepProportions="1" resourceNormal="switcherUp_png"
               opacityNormal="1" colourNormal="0" resourceOver="switcherUp_png"
               opacityOver="1" colourOver="0" resourceDown="switcherDown_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="LFEnable" id="6004068547b8ae6e" memberName="LFEnable" virtualName=""
               explicitFocusOrder="0" pos="112 16 24 40" buttonText="LFEnable"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="switcherUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="switcherUp_png" opacityOver="1" colourOver="0"
               resourceDown="switcherDown_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="LMFPos" id="5f8893d372c7022a" memberName="LMFPos" virtualName=""
               explicitFocusOrder="0" pos="200 88 24 40" buttonText="LMFPos"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="switcherUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="switcherUp_png" opacityOver="1" colourOver="0"
               resourceDown="switcherDown_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="LMFPN" id="59d6e518090abd3b" memberName="LMFPN" virtualName=""
               explicitFocusOrder="0" pos="232 88 24 40" buttonText="LMFPN"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="switcherUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="switcherUp_png" opacityOver="1" colourOver="0"
               resourceDown="switcherDown_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="LMFEnable" id="534afba262779a30" memberName="LMFEnable"
               virtualName="" explicitFocusOrder="0" pos="296 16 24 40" buttonText="LMFEnable"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="switcherUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="switcherUp_png" opacityOver="1" colourOver="0"
               resourceDown="switcherDown_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="HMFPos" id="3df60d0891033321" memberName="HMFPos" virtualName=""
               explicitFocusOrder="0" pos="384 88 24 40" buttonText="HMFPos"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="switcherUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="switcherUp_png" opacityOver="1" colourOver="0"
               resourceDown="switcherDown_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="HMFPN" id="cb08b4a0223a4816" memberName="HMFPN" virtualName=""
               explicitFocusOrder="0" pos="416 88 24 40" buttonText="HMFPN"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="switcherUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="switcherUp_png" opacityOver="1" colourOver="0"
               resourceDown="switcherDown_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="HMFEnable" id="272a4833f47987a8" memberName="HMFEnable"
               virtualName="" explicitFocusOrder="0" pos="480 16 24 40" buttonText="HMFEnable"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="switcherUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="switcherUp_png" opacityOver="1" colourOver="0"
               resourceDown="switcherDown_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="HFPos" id="1fa443f32a57bde8" memberName="HFPos" virtualName=""
               explicitFocusOrder="0" pos="568 88 24 40" buttonText="HFPos"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="switcherUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="switcherUp_png" opacityOver="1" colourOver="0"
               resourceDown="switcherDown_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="HFPN" id="b14401adc7498d80" memberName="HFPN" virtualName=""
               explicitFocusOrder="0" pos="600 88 24 40" buttonText="HFPN" connectedEdges="0"
               needsCallback="1" radioGroupId="0" keepProportions="1" resourceNormal="switcherUp_png"
               opacityNormal="1" colourNormal="0" resourceOver="switcherUp_png"
               opacityOver="1" colourOver="0" resourceDown="switcherDown_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="HFEnable" id="f1442f3a66651718" memberName="HFEnable" virtualName=""
               explicitFocusOrder="0" pos="664 16 24 40" buttonText="HFEnable"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="switcherUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="switcherUp_png" opacityOver="1" colourOver="0"
               resourceDown="switcherDown_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="HPEnable" id="6fb2b83b39ae32fb" memberName="HPEnable" virtualName=""
               explicitFocusOrder="0" pos="776 88 24 40" buttonText="HPEnable"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="switcherUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="switcherUp_png" opacityOver="1" colourOver="0"
               resourceDown="switcherDown_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="LPEnable" id="68df17046bba20f9" memberName="LPEnable" virtualName=""
               explicitFocusOrder="0" pos="856 88 24 40" buttonText="LPEnable"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="switcherUp_png" opacityNormal="1" colourNormal="0"
               resourceOver="switcherUp_png" opacityOver="1" colourOver="0"
               resourceDown="switcherDown_png" opacityDown="1" colourDown="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: switcher2_png, 68458, "../../Switcher2.png"
static const unsigned char resource_Gui_switcher2_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,128,0,0,0,128,8,6,0,0,0,195,62,97,203,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,
156,24,0,0,10,79,105,67,67,80,80,104,111,116,111,115,104,111,112,32,73,67,67,32,112,114,111,102,105,108,101,0,0,120,218,157,83,103,84,83,233,22,61,247,222,244,66,75,136,128,148,75,111,82,21,8,32,82,66,
139,128,20,145,38,42,33,9,16,74,136,33,161,217,21,81,193,17,69,69,4,27,200,160,136,3,142,142,128,140,21,81,44,12,138,10,216,7,228,33,162,142,131,163,136,138,202,251,225,123,163,107,214,188,247,230,205,
254,181,215,62,231,172,243,157,179,207,7,192,8,12,150,72,51,81,53,128,12,169,66,30,17,224,131,199,196,198,225,228,46,64,129,10,36,112,0,16,8,179,100,33,115,253,35,1,0,248,126,60,60,43,34,192,7,190,0,1,
120,211,11,8,0,192,77,155,192,48,28,135,255,15,234,66,153,92,1,128,132,1,192,116,145,56,75,8,128,20,0,64,122,142,66,166,0,64,70,1,128,157,152,38,83,0,160,4,0,96,203,99,98,227,0,80,45,0,96,39,127,230,211,
0,128,157,248,153,123,1,0,91,148,33,21,1,160,145,0,32,19,101,136,68,0,104,59,0,172,207,86,138,69,0,88,48,0,20,102,75,196,57,0,216,45,0,48,73,87,102,72,0,176,183,0,192,206,16,11,178,0,8,12,0,48,81,136,
133,41,0,4,123,0,96,200,35,35,120,0,132,153,0,20,70,242,87,60,241,43,174,16,231,42,0,0,120,153,178,60,185,36,57,69,129,91,8,45,113,7,87,87,46,30,40,206,73,23,43,20,54,97,2,97,154,64,46,194,121,153,25,
50,129,52,15,224,243,204,0,0,160,145,21,17,224,131,243,253,120,206,14,174,206,206,54,142,182,14,95,45,234,191,6,255,34,98,98,227,254,229,207,171,112,64,0,0,225,116,126,209,254,44,47,179,26,128,59,6,128,
109,254,162,37,238,4,104,94,11,160,117,247,139,102,178,15,64,181,0,160,233,218,87,243,112,248,126,60,60,69,161,144,185,217,217,229,228,228,216,74,196,66,91,97,202,87,125,254,103,194,95,192,87,253,108,
249,126,60,252,247,245,224,190,226,36,129,50,93,129,71,4,248,224,194,204,244,76,165,28,207,146,9,132,98,220,230,143,71,252,183,11,255,252,29,211,34,196,73,98,185,88,42,20,227,81,18,113,142,68,154,140,
243,50,165,34,137,66,146,41,197,37,210,255,100,226,223,44,251,3,62,223,53,0,176,106,62,1,123,145,45,168,93,99,3,246,75,39,16,88,116,192,226,247,0,0,242,187,111,193,212,40,8,3,128,104,131,225,207,119,255,
239,63,253,71,160,37,0,128,102,73,146,113,0,0,94,68,36,46,84,202,179,63,199,8,0,0,68,160,129,42,176,65,27,244,193,24,44,192,6,28,193,5,220,193,11,252,96,54,132,66,36,196,194,66,16,66,10,100,128,28,114,
96,41,172,130,66,40,134,205,176,29,42,96,47,212,64,29,52,192,81,104,134,147,112,14,46,194,85,184,14,61,112,15,250,97,8,158,193,40,188,129,9,4,65,200,8,19,97,33,218,136,1,98,138,88,35,142,8,23,153,133,
248,33,193,72,4,18,139,36,32,201,136,20,81,34,75,145,53,72,49,82,138,84,32,85,72,29,242,61,114,2,57,135,92,70,186,145,59,200,0,50,130,252,134,188,71,49,148,129,178,81,61,212,12,181,67,185,168,55,26,132,
70,162,11,208,100,116,49,154,143,22,160,155,208,114,180,26,61,140,54,161,231,208,171,104,15,218,143,62,67,199,48,192,232,24,7,51,196,108,48,46,198,195,66,177,56,44,9,147,99,203,177,34,172,12,171,198,26,
176,86,172,3,187,137,245,99,207,177,119,4,18,129,69,192,9,54,4,119,66,32,97,30,65,72,88,76,88,78,216,72,168,32,28,36,52,17,218,9,55,9,3,132,81,194,39,34,147,168,75,180,38,186,17,249,196,24,98,50,49,135,
88,72,44,35,214,18,143,19,47,16,123,136,67,196,55,36,18,137,67,50,39,185,144,2,73,177,164,84,210,18,210,70,210,110,82,35,233,44,169,155,52,72,26,35,147,201,218,100,107,178,7,57,148,44,32,43,200,133,228,
157,228,195,228,51,228,27,228,33,242,91,10,157,98,64,113,164,248,83,226,40,82,202,106,74,25,229,16,229,52,229,6,101,152,50,65,85,163,154,82,221,168,161,84,17,53,143,90,66,173,161,182,82,175,81,135,168,
19,52,117,154,57,205,131,22,73,75,165,173,162,149,211,26,104,23,104,247,105,175,232,116,186,17,221,149,30,78,151,208,87,210,203,233,71,232,151,232,3,244,119,12,13,134,21,131,199,136,103,40,25,155,24,7,
24,103,25,119,24,175,152,76,166,25,211,139,25,199,84,48,55,49,235,152,231,153,15,153,111,85,88,42,182,42,124,21,145,202,10,149,74,149,38,149,27,42,47,84,169,170,166,170,222,170,11,85,243,85,203,84,143,
169,94,83,125,174,70,85,51,83,227,169,9,212,150,171,85,170,157,80,235,83,27,83,103,169,59,168,135,170,103,168,111,84,63,164,126,89,253,137,6,89,195,76,195,79,67,164,81,160,177,95,227,188,198,32,11,99,
25,179,120,44,33,107,13,171,134,117,129,53,196,38,177,205,217,124,118,42,187,152,253,29,187,139,61,170,169,161,57,67,51,74,51,87,179,82,243,148,102,63,7,227,152,113,248,156,116,78,9,231,40,167,151,243,
126,138,222,20,239,41,226,41,27,166,52,76,185,49,101,92,107,170,150,151,150,88,171,72,171,81,171,71,235,189,54,174,237,167,157,166,189,69,187,89,251,129,14,65,199,74,39,92,39,71,103,143,206,5,157,231,
83,217,83,221,167,10,167,22,77,61,58,245,174,46,170,107,165,27,161,187,68,119,191,110,167,238,152,158,190,94,128,158,76,111,167,222,121,189,231,250,28,125,47,253,84,253,109,250,167,245,71,12,88,6,179,
12,36,6,219,12,206,24,60,197,53,113,111,60,29,47,199,219,241,81,67,93,195,64,67,165,97,149,97,151,225,132,145,185,209,60,163,213,70,141,70,15,140,105,198,92,227,36,227,109,198,109,198,163,38,6,38,33,38,
75,77,234,77,238,154,82,77,185,166,41,166,59,76,59,76,199,205,204,205,162,205,214,153,53,155,61,49,215,50,231,155,231,155,215,155,223,183,96,90,120,90,44,182,168,182,184,101,73,178,228,90,166,89,238,182,
188,110,133,90,57,89,165,88,85,90,93,179,70,173,157,173,37,214,187,173,187,167,17,167,185,78,147,78,171,158,214,103,195,176,241,182,201,182,169,183,25,176,229,216,6,219,174,182,109,182,125,97,103,98,23,
103,183,197,174,195,238,147,189,147,125,186,125,141,253,61,7,13,135,217,14,171,29,90,29,126,115,180,114,20,58,86,58,222,154,206,156,238,63,125,197,244,150,233,47,103,88,207,16,207,216,51,227,182,19,203,
41,196,105,157,83,155,211,71,103,23,103,185,115,131,243,136,139,137,75,130,203,46,151,62,46,155,27,198,221,200,189,228,74,116,245,113,93,225,122,210,245,157,155,179,155,194,237,168,219,175,238,54,238,
105,238,135,220,159,204,52,159,41,158,89,51,115,208,195,200,67,224,81,229,209,63,11,159,149,48,107,223,172,126,79,67,79,129,103,181,231,35,47,99,47,145,87,173,215,176,183,165,119,170,247,97,239,23,62,
246,62,114,159,227,62,227,60,55,222,50,222,89,95,204,55,192,183,200,183,203,79,195,111,158,95,133,223,67,127,35,255,100,255,122,255,209,0,167,128,37,1,103,3,137,129,65,129,91,2,251,248,122,124,33,191,
142,63,58,219,101,246,178,217,237,65,140,160,185,65,21,65,143,130,173,130,229,193,173,33,104,200,236,144,173,33,247,231,152,206,145,206,105,14,133,80,126,232,214,208,7,97,230,97,139,195,126,12,39,133,
135,133,87,134,63,142,112,136,88,26,209,49,151,53,119,209,220,67,115,223,68,250,68,150,68,222,155,103,49,79,57,175,45,74,53,42,62,170,46,106,60,218,55,186,52,186,63,198,46,102,89,204,213,88,157,88,73,
108,75,28,57,46,42,174,54,110,108,190,223,252,237,243,135,226,157,226,11,227,123,23,152,47,200,93,112,121,161,206,194,244,133,167,22,169,46,18,44,58,150,64,76,136,78,56,148,240,65,16,42,168,22,140,37,
242,19,119,37,142,10,121,194,29,194,103,34,47,209,54,209,136,216,67,92,42,30,78,242,72,42,77,122,146,236,145,188,53,121,36,197,51,165,44,229,185,132,39,169,144,188,76,13,76,221,155,58,158,22,154,118,32,
109,50,61,58,189,49,131,146,145,144,113,66,170,33,77,147,182,103,234,103,230,102,118,203,172,101,133,178,254,197,110,139,183,47,30,149,7,201,107,179,144,172,5,89,45,10,182,66,166,232,84,90,40,215,42,7,
178,103,101,87,102,191,205,137,202,57,150,171,158,43,205,237,204,179,202,219,144,55,156,239,159,255,237,18,194,18,225,146,182,165,134,75,87,45,29,88,230,189,172,106,57,178,60,113,121,219,10,227,21,5,43,
134,86,6,172,60,184,138,182,42,109,213,79,171,237,87,151,174,126,189,38,122,77,107,129,94,193,202,130,193,181,1,107,235,11,85,10,229,133,125,235,220,215,237,93,79,88,47,89,223,181,97,250,134,157,27,62,
21,137,138,174,20,219,23,151,21,127,216,40,220,120,229,27,135,111,202,191,153,220,148,180,169,171,196,185,100,207,102,210,102,233,230,222,45,158,91,14,150,170,151,230,151,14,110,13,217,218,180,13,223,
86,180,237,245,246,69,219,47,151,205,40,219,187,131,182,67,185,163,191,60,184,188,101,167,201,206,205,59,63,84,164,84,244,84,250,84,54,238,210,221,181,97,215,248,110,209,238,27,123,188,246,52,236,213,
219,91,188,247,253,62,201,190,219,85,1,85,77,213,102,213,101,251,73,251,179,247,63,174,137,170,233,248,150,251,109,93,173,78,109,113,237,199,3,210,3,253,7,35,14,182,215,185,212,213,29,210,61,84,82,143,
214,43,235,71,14,199,31,190,254,157,239,119,45,13,54,13,85,141,156,198,226,35,112,68,121,228,233,247,9,223,247,30,13,58,218,118,140,123,172,225,7,211,31,118,29,103,29,47,106,66,154,242,154,70,155,83,154,
251,91,98,91,186,79,204,62,209,214,234,222,122,252,71,219,31,15,156,52,60,89,121,74,243,84,201,105,218,233,130,211,147,103,242,207,140,157,149,157,125,126,46,249,220,96,219,162,182,123,231,99,206,223,
106,15,111,239,186,16,116,225,210,69,255,139,231,59,188,59,206,92,242,184,116,242,178,219,229,19,87,184,87,154,175,58,95,109,234,116,234,60,254,147,211,79,199,187,156,187,154,174,185,92,107,185,238,122,
189,181,123,102,247,233,27,158,55,206,221,244,189,121,241,22,255,214,213,158,57,61,221,189,243,122,111,247,197,247,245,223,22,221,126,114,39,253,206,203,187,217,119,39,238,173,188,79,188,95,244,64,237,
65,217,67,221,135,213,63,91,254,220,216,239,220,127,106,192,119,160,243,209,220,71,247,6,133,131,207,254,145,245,143,15,67,5,143,153,143,203,134,13,134,235,158,56,62,57,57,226,63,114,253,233,252,167,67,
207,100,207,38,158,23,254,162,254,203,174,23,22,47,126,248,213,235,215,206,209,152,209,161,151,242,151,147,191,109,124,165,253,234,192,235,25,175,219,198,194,198,30,190,201,120,51,49,94,244,86,251,237,
193,119,220,119,29,239,163,223,15,79,228,124,32,127,40,255,104,249,177,245,83,208,167,251,147,25,147,147,255,4,3,152,243,252,99,51,45,219,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,
233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,1,0,149,73,68,65,84,120,1,0,255,255,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,36,155,155,155,81,155,155,155,
111,153,153,153,255,150,150,150,255,147,147,147,255,144,144,144,255,144,144,144,255,150,150,150,255,153,153,153,255,153,153,153,255,149,149,149,255,144,144,144,255,143,143,143,255,145,145,145,255,148,
148,148,255,151,151,151,255,152,152,152,113,155,155,155,81,155,155,155,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,36,155,155,
155,81,155,155,155,111,153,153,153,255,150,150,150,255,147,147,147,255,144,144,144,255,144,144,144,255,150,150,150,255,153,153,153,255,153,153,153,255,149,149,149,255,144,144,144,255,143,143,143,255,145,
145,145,255,148,148,148,255,151,151,151,255,152,152,152,113,155,155,155,81,155,155,155,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,129,129,129,6,155,155,155,
91,155,155,155,168,155,155,155,235,155,155,155,255,154,154,154,255,152,152,152,255,148,148,148,255,148,148,148,255,159,159,159,255,170,170,170,255,170,170,170,255,170,170,170,255,169,169,169,255,168,168,
168,255,167,167,167,255,157,157,157,255,146,146,146,255,146,146,146,255,150,150,150,255,153,153,153,255,155,155,155,255,155,155,155,235,155,155,155,168,155,155,155,91,142,142,142,6,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,129,129,129,6,155,155,155,91,155,155,155,168,155,155,155,235,155,155,155,255,154,154,154,255,152,152,152,255,148,148,148,255,148,148,148,255,159,159,159,255,170,
170,170,255,170,170,170,255,170,170,170,255,169,169,169,255,168,168,168,255,167,167,167,255,157,157,157,255,146,146,146,255,146,146,146,255,150,150,150,255,153,153,153,255,155,155,155,255,155,155,155,
235,155,155,155,168,155,155,155,91,142,142,142,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,65,155,155,155,167,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,153,153,
153,255,150,150,150,255,151,151,151,255,169,169,169,255,172,172,172,255,171,171,171,255,171,171,171,255,171,171,171,255,170,170,170,255,169,169,169,255,168,168,168,255,167,167,167,255,164,164,164,255,
148,148,148,255,147,147,147,255,151,151,151,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,167,155,155,155,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,65,
155,155,155,167,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,153,153,153,255,150,150,150,255,151,151,151,255,169,169,169,255,172,172,172,255,171,171,171,255,171,171,171,255,171,171,
171,255,170,170,170,255,169,169,169,255,168,168,168,255,167,167,167,255,164,164,164,255,148,148,148,255,147,147,147,255,151,151,151,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,167,155,155,155,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,93,155,155,155,210,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,149,149,
149,255,171,171,171,255,172,172,172,255,172,172,172,255,172,172,172,255,172,172,172,255,172,172,172,255,171,171,171,255,170,170,170,255,169,169,169,255,168,168,168,255,167,167,167,255,165,165,165,255,
146,146,146,255,149,149,149,255,153,153,153,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,210,155,155,155,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,93,155,155,155,210,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,149,149,149,255,171,171,171,255,172,172,172,255,172,172,172,255,172,172,172,255,172,172,172,255,172,172,172,
255,171,171,171,255,170,170,170,255,169,169,169,255,168,168,168,255,167,167,167,255,165,165,165,255,146,146,146,255,149,149,149,255,153,153,153,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,210,155,155,155,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,91,155,155,155,223,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,154,154,154,255,150,150,150,
255,164,164,164,255,175,175,175,255,175,175,175,255,175,175,175,255,175,175,175,255,175,175,175,255,175,175,175,255,173,173,173,255,172,172,172,255,170,170,170,255,169,169,169,255,167,167,167,255,167,
167,167,255,159,159,159,255,147,147,147,255,153,153,153,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,223,155,155,155,91,0,0,0,0,0,0,0,0,0,0,0,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,91,155,155,
155,223,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,154,154,154,255,150,150,150,255,164,164,164,255,175,175,175,255,175,175,175,255,175,175,175,255,175,175,175,255,
175,175,175,255,175,175,175,255,173,173,173,255,172,172,172,255,170,170,170,255,169,169,169,255,167,167,167,255,167,167,167,255,159,159,159,255,147,147,147,255,153,153,153,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,223,155,155,155,91,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,60,155,155,155,207,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,153,153,153,255,150,150,150,255,178,178,178,255,176,176,176,255,176,176,176,255,176,176,176,255,176,176,176,255,176,176,176,255,176,176,176,255,174,174,174,255,172,172,172,255,171,171,171,
255,170,170,170,255,168,168,168,255,167,167,167,255,170,170,170,255,148,148,148,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,207,155,155,155,60,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,0,0,0,0,0,0,0,0,155,155,155,60,155,155,155,207,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,153,153,153,255,150,150,150,255,178,178,178,255,176,
176,176,255,176,176,176,255,176,176,176,255,176,176,176,255,176,176,176,255,176,176,176,255,174,174,174,255,172,172,172,255,171,171,171,255,170,170,170,255,168,168,168,255,167,167,167,255,170,170,170,
255,148,148,148,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,207,155,155,155,60,0,0,0,0,0,0,0,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,160,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,153,153,153,255,158,158,158,255,179,179,179,255,177,177,177,255,177,177,177,255,177,177,177,255,177,177,177,255,177,
177,177,255,177,177,177,255,176,176,176,255,173,173,173,255,171,171,171,255,170,170,170,255,168,168,168,255,168,168,168,255,168,168,168,255,154,154,154,255,151,151,151,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,160,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,160,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,153,153,153,255,158,158,158,255,179,179,179,255,177,177,177,255,177,177,177,255,177,177,177,255,177,177,177,255,177,177,177,255,177,177,177,255,176,176,176,255,173,173,173,255,
171,171,171,255,170,170,170,255,168,168,168,255,168,168,168,255,168,168,168,255,154,154,154,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,160,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,0,0,0,0,155,155,155,80,155,155,155,252,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,152,152,152,255,163,163,163,255,
181,181,181,255,180,180,180,255,180,180,180,255,180,180,180,255,180,180,180,255,180,180,180,255,180,180,180,255,177,177,177,255,175,175,175,255,173,173,173,255,171,171,171,255,169,169,169,255,168,168,
168,255,169,169,169,255,157,157,157,255,151,151,151,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,252,155,155,155,80,0,
0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,155,155,155,80,155,155,
155,252,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,152,152,152,255,163,163,163,255,181,181,181,255,180,180,180,255,180,180,180,255,
180,180,180,255,180,180,180,255,180,180,180,255,180,180,180,255,177,177,177,255,175,175,175,255,173,173,173,255,171,171,171,255,169,169,169,255,168,168,168,255,169,169,169,255,157,157,157,255,151,151,
151,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,252,155,155,155,80,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,155,155,155,154,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,152,152,152,255,164,164,164,255,182,182,182,255,181,181,181,255,181,181,181,255,181,181,181,255,181,181,181,255,181,181,181,255,
181,181,181,255,179,179,179,255,176,176,176,255,173,173,173,255,171,171,171,255,169,169,169,255,168,168,168,255,168,168,168,255,157,157,157,255,150,150,150,255,154,154,154,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,154,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,155,155,155,154,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,152,152,152,255,164,164,164,255,182,182,182,255,181,181,181,255,181,181,181,255,181,181,181,255,181,181,181,255,181,181,181,255,181,181,181,255,179,179,179,255,176,176,176,
255,173,173,173,255,171,171,171,255,169,169,169,255,168,168,168,255,168,168,168,255,157,157,157,255,150,150,150,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,154,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,147,147,147,17,155,155,155,219,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,152,152,152,
255,164,164,164,255,184,184,184,255,184,184,184,255,184,184,184,255,184,184,184,255,184,184,184,255,184,184,184,255,184,184,184,255,181,181,181,255,178,178,178,255,175,175,175,255,171,171,171,255,170,
170,170,255,168,168,168,255,168,168,168,255,156,156,156,255,150,150,150,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,219,157,157,157,17,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,147,
147,147,17,155,155,155,219,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,152,152,152,255,164,164,164,255,184,184,184,255,
184,184,184,255,184,184,184,255,184,184,184,255,184,184,184,255,184,184,184,255,184,184,184,255,181,181,181,255,178,178,178,255,175,175,175,255,171,171,171,255,170,170,170,255,168,168,168,255,168,168,
168,255,156,156,156,255,150,150,150,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,219,157,157,157,17,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,59,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,165,165,165,255,186,186,186,255,187,187,187,255,186,186,186,255,186,
186,186,255,186,186,186,255,186,186,186,255,186,186,186,255,184,184,184,255,180,180,180,255,176,176,176,255,172,172,172,255,170,170,170,255,168,168,168,255,168,168,168,255,155,155,155,255,150,150,150,
255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,59,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,59,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,165,165,165,255,186,186,186,255,187,187,187,255,186,186,186,255,186,186,186,255,186,186,186,255,186,186,
186,255,186,186,186,255,184,184,184,255,180,180,180,255,176,176,176,255,172,172,172,255,170,170,170,255,168,168,168,255,168,168,168,255,155,155,155,255,150,150,150,255,154,154,154,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,59,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,86,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,166,166,166,255,188,188,188,255,189,189,189,255,188,188,188,255,188,188,188,255,188,188,188,255,188,188,188,255,188,188,188,255,185,185,
185,255,181,181,181,255,177,177,177,255,172,172,172,255,170,170,170,255,167,167,167,255,168,168,168,255,155,155,155,255,150,150,150,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,86,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,86,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,151,151,151,255,166,166,166,255,188,188,188,255,189,189,189,255,188,188,188,255,188,188,188,255,188,188,188,255,188,188,188,255,188,188,188,255,185,185,185,255,181,181,181,255,177,177,
177,255,172,172,172,255,170,170,170,255,167,167,167,255,168,168,168,255,155,155,155,255,150,150,150,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,86,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,
255,167,167,167,255,190,190,190,255,191,191,191,255,191,191,191,255,191,191,191,255,191,191,191,255,191,191,191,255,191,191,191,255,188,188,188,255,183,183,183,255,178,178,178,255,174,174,174,255,170,
170,170,255,167,167,167,255,167,167,167,255,154,154,154,255,150,150,150,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,167,167,167,255,190,190,190,
255,191,191,191,255,191,191,191,255,191,191,191,255,191,191,191,255,191,191,191,255,191,191,191,255,188,188,188,255,183,183,183,255,178,178,178,255,174,174,174,255,170,170,170,255,167,167,167,255,167,
167,167,255,154,154,154,255,150,150,150,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,167,167,167,255,192,192,192,255,193,193,193,255,193,193,
193,255,193,193,193,255,193,193,193,255,193,193,193,255,193,193,193,255,191,191,191,255,185,185,185,255,180,180,180,255,175,175,175,255,170,170,170,255,167,167,167,255,166,166,166,255,154,154,154,255,
150,150,150,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,167,167,167,255,192,192,192,255,193,193,193,255,193,193,193,255,193,193,193,255,193,193,
193,255,193,193,193,255,193,193,193,255,191,191,191,255,185,185,185,255,180,180,180,255,175,175,175,255,170,170,170,255,167,167,167,255,166,166,166,255,154,154,154,255,150,150,150,255,154,154,154,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,167,167,167,255,195,195,195,255,196,196,196,255,195,195,195,255,195,195,195,255,195,195,195,255,195,195,195,255,195,
195,195,255,191,191,191,255,186,186,186,255,180,180,180,255,174,174,174,255,169,169,169,255,165,165,165,255,165,165,165,255,153,153,153,255,149,149,149,255,154,154,154,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,151,151,151,255,167,167,167,255,195,195,195,255,196,196,196,255,195,195,195,255,195,195,195,255,195,195,195,255,195,195,195,255,195,195,195,255,191,191,191,255,
186,186,186,255,180,180,180,255,174,174,174,255,169,169,169,255,165,165,165,255,165,165,165,255,153,153,153,255,149,149,149,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,151,151,151,255,169,169,169,255,197,197,197,255,198,198,198,255,197,197,197,255,197,197,197,255,197,197,197,255,197,197,197,255,197,197,197,255,193,193,193,255,187,187,187,255,180,180,180,
255,174,174,174,255,169,169,169,255,164,164,164,255,164,164,164,255,152,152,152,255,149,149,149,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,
169,169,169,255,197,197,197,255,198,198,198,255,197,197,197,255,197,197,197,255,197,197,197,255,197,197,197,255,197,197,197,255,193,193,193,255,187,187,187,255,180,180,180,255,174,174,174,255,169,169,
169,255,164,164,164,255,164,164,164,255,152,152,152,255,149,149,149,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,168,168,168,255,199,199,199,
255,201,201,201,255,201,201,201,255,201,201,201,255,201,201,201,255,201,201,201,255,201,201,201,255,197,197,197,255,189,189,189,255,183,183,183,255,175,175,175,255,169,169,169,255,165,165,165,255,163,
163,163,255,150,150,150,255,148,148,148,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,168,168,168,255,199,199,199,255,201,201,201,255,201,201,
201,255,201,201,201,255,201,201,201,255,201,201,201,255,201,201,201,255,197,197,197,255,189,189,189,255,183,183,183,255,175,175,175,255,169,169,169,255,165,165,165,255,163,163,163,255,150,150,150,255,
148,148,148,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,170,170,170,255,202,202,202,255,205,205,205,255,205,205,205,255,205,205,205,255,205,
205,205,255,205,205,205,255,205,205,205,255,199,199,199,255,191,191,191,255,183,183,183,255,176,176,176,255,169,169,169,255,164,164,164,255,163,163,163,255,150,150,150,255,148,148,148,255,154,154,154,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,170,170,170,255,202,202,202,255,205,205,205,255,205,205,205,255,205,205,205,255,205,205,205,255,205,205,205,255,205,
205,205,255,199,199,199,255,191,191,191,255,183,183,183,255,176,176,176,255,169,169,169,255,164,164,164,255,163,163,163,255,150,150,150,255,148,148,148,255,154,154,154,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,151,151,151,255,171,171,171,255,204,204,204,255,207,207,207,255,207,207,207,255,207,207,207,255,207,207,207,255,207,207,207,255,207,207,207,255,202,202,202,255,
192,192,192,255,183,183,183,255,175,175,175,255,168,168,168,255,162,162,162,255,160,160,160,255,148,148,148,255,148,148,148,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,151,151,151,255,171,171,171,255,204,204,204,255,207,207,207,255,207,207,207,255,207,207,207,255,207,207,207,255,207,207,207,255,207,207,207,255,202,202,202,255,192,192,192,255,183,183,183,
255,175,175,175,255,168,168,168,255,162,162,162,255,160,160,160,255,148,148,148,255,148,148,148,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,
170,170,170,255,206,206,206,255,210,210,210,255,210,210,210,255,210,210,210,255,210,210,210,255,210,210,210,255,210,210,210,255,204,204,204,255,194,194,194,255,183,183,183,255,175,175,175,255,167,167,
167,255,161,161,161,255,159,159,159,255,146,146,146,255,148,148,148,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,170,170,170,255,206,206,206,
255,210,210,210,255,210,210,210,255,210,210,210,255,210,210,210,255,210,210,210,255,210,210,210,255,204,204,204,255,194,194,194,255,183,183,183,255,175,175,175,255,167,167,167,255,161,161,161,255,159,
159,159,255,146,146,146,255,148,148,148,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,172,172,172,255,208,208,208,255,213,213,213,255,212,212,
212,255,212,212,212,255,212,212,212,255,212,212,212,255,212,212,212,255,207,207,207,255,195,195,195,255,184,184,184,255,174,174,174,255,166,166,166,255,159,159,159,255,158,158,158,255,145,145,145,255,
148,148,148,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,172,172,172,255,208,208,208,255,213,213,213,255,212,212,212,255,212,212,212,255,212,212,
212,255,212,212,212,255,212,212,212,255,207,207,207,255,195,195,195,255,184,184,184,255,174,174,174,255,166,166,166,255,159,159,159,255,158,158,158,255,145,145,145,255,148,148,148,255,154,154,154,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,172,172,172,255,211,211,211,255,216,216,216,255,216,216,216,255,216,216,216,255,216,216,216,255,216,216,216,255,216,
216,216,255,209,209,209,255,197,197,197,255,185,185,185,255,174,174,174,255,165,165,165,255,157,157,157,255,155,155,155,255,144,144,144,255,148,148,148,255,154,154,154,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,150,150,150,255,172,172,172,255,211,211,211,255,216,216,216,255,216,216,216,255,216,216,216,255,216,216,216,255,216,216,216,255,216,216,216,255,209,209,209,255,
197,197,197,255,185,185,185,255,174,174,174,255,165,165,165,255,157,157,157,255,155,155,155,255,144,144,144,255,148,148,148,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,150,150,150,255,173,173,173,255,211,211,211,255,219,219,219,255,218,218,218,255,218,218,218,255,218,218,218,255,218,218,218,255,218,218,218,255,211,211,211,255,198,198,198,255,185,185,185,
255,172,172,172,255,162,162,162,255,155,155,155,255,154,154,154,255,143,143,143,255,148,148,148,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,
173,173,173,255,211,211,211,255,219,219,219,255,218,218,218,255,218,218,218,255,218,218,218,255,218,218,218,255,218,218,218,255,211,211,211,255,198,198,198,255,185,185,185,255,172,172,172,255,162,162,
162,255,155,155,155,255,154,154,154,255,143,143,143,255,148,148,148,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,171,171,171,255,211,211,211,
255,222,222,222,255,222,222,222,255,222,222,222,255,222,222,222,255,222,222,222,255,222,222,222,255,214,214,214,255,199,199,199,255,185,185,185,255,173,173,173,255,162,162,162,255,155,155,155,255,152,
152,152,255,141,141,141,255,148,148,148,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,171,171,171,255,211,211,211,255,222,222,222,255,222,222,
222,255,222,222,222,255,222,222,222,255,222,222,222,255,222,222,222,255,214,214,214,255,199,199,199,255,185,185,185,255,173,173,173,255,162,162,162,255,155,155,155,255,152,152,152,255,141,141,141,255,
148,148,148,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,152,152,152,255,171,171,171,255,205,205,205,255,219,219,219,255,225,225,225,255,225,225,225,255,225,
225,225,255,225,225,225,255,225,225,225,255,216,216,216,255,200,200,200,255,186,186,186,255,173,173,173,255,162,162,162,255,155,155,155,255,148,148,148,255,139,139,139,255,150,150,150,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,152,152,152,255,171,171,171,255,205,205,205,255,219,219,219,255,225,225,225,255,225,225,225,255,225,225,225,255,225,225,225,255,225,
225,225,255,216,216,216,255,200,200,200,255,186,186,186,255,173,173,173,255,162,162,162,255,155,155,155,255,148,148,148,255,139,139,139,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,153,153,153,255,167,167,167,255,199,199,199,255,212,212,212,255,225,225,225,255,229,229,229,255,229,229,229,255,229,229,229,255,229,229,229,255,219,219,219,255,
202,202,202,255,186,186,186,255,172,172,172,255,162,162,162,255,153,153,153,255,142,142,142,255,140,140,140,255,152,152,152,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,153,153,153,255,167,167,167,255,199,199,199,255,212,212,212,255,225,225,225,255,229,229,229,255,229,229,229,255,229,229,229,255,229,229,229,255,219,219,219,255,202,202,202,255,186,186,186,
255,172,172,172,255,162,162,162,255,153,153,153,255,142,142,142,255,140,140,140,255,152,152,152,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,199,199,199,255,202,202,202,255,214,214,214,255,228,228,228,255,232,232,232,255,233,233,233,255,233,233,233,255,223,223,223,255,205,205,205,255,188,188,188,255,174,174,174,255,160,160,
160,255,145,145,145,255,137,137,137,255,145,145,145,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,199,199,199,
255,202,202,202,255,214,214,214,255,228,228,228,255,232,232,232,255,233,233,233,255,233,233,233,255,223,223,223,255,205,205,205,255,188,188,188,255,174,174,174,255,160,160,160,255,145,145,145,255,137,
137,137,255,145,145,145,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,153,153,153,255,184,184,184,255,200,200,200,255,200,200,
200,255,211,211,211,255,224,224,224,255,231,231,231,255,232,232,232,255,222,222,222,255,204,204,204,255,187,187,187,255,169,169,169,255,149,149,149,255,139,139,139,255,141,141,141,255,151,151,151,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,153,153,153,255,184,184,184,255,200,200,200,255,200,200,200,255,211,211,211,255,224,224,
224,255,231,231,231,255,232,232,232,255,222,222,222,255,204,204,204,255,187,187,187,255,169,169,169,255,149,149,149,255,139,139,139,255,141,141,141,255,151,151,151,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,157,157,157,255,198,198,198,255,202,202,202,255,201,201,201,255,202,202,202,255,207,207,207,255,215,
215,215,255,206,206,206,255,189,189,189,255,169,169,169,255,155,155,155,255,146,146,146,255,143,143,143,255,149,149,149,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,157,157,157,255,198,198,198,255,202,202,202,255,201,201,201,255,202,202,202,255,207,207,207,255,215,215,215,255,206,206,206,255,
189,189,189,255,169,169,169,255,155,155,155,255,146,146,146,255,143,143,143,255,149,149,149,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,154,154,154,255,164,164,164,255,199,199,199,255,203,203,203,255,202,202,202,255,202,202,202,255,202,202,202,255,193,193,193,255,180,180,180,255,167,167,167,
255,158,158,158,255,152,152,152,255,150,150,150,255,153,153,153,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,154,154,154,255,164,164,164,255,199,199,199,255,203,203,203,255,202,202,202,255,202,202,202,255,202,202,202,255,193,193,193,255,180,180,180,255,167,167,167,255,158,158,158,255,152,152,
152,255,150,150,150,255,153,153,153,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,157,157,157,255,187,187,187,255,204,204,204,255,204,204,204,255,204,204,204,255,196,196,196,255,183,183,183,255,172,172,172,255,160,160,160,255,151,151,151,255,154,154,154,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,157,157,
157,255,187,187,187,255,204,204,204,255,204,204,204,255,204,204,204,255,196,196,196,255,183,183,183,255,172,172,172,255,160,160,160,255,151,151,151,255,154,154,154,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,159,
159,159,255,174,174,174,255,181,181,181,255,177,177,177,255,166,166,166,255,156,156,156,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,159,159,159,255,174,174,174,255,181,
181,181,255,177,177,177,255,166,166,166,255,156,156,156,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,86,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,86,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,86,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,86,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,59,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,59,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,155,155,155,59,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,59,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,149,149,149,17,155,155,155,219,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,219,160,
160,160,17,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,149,149,149,17,155,155,155,
219,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,219,160,160,160,17,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,155,155,155,154,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,154,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,155,155,155,154,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,154,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,155,155,155,80,155,155,155,252,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,252,155,155,155,80,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,
0,0,0,155,155,155,80,155,155,155,252,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,252,155,155,155,80,0,0,0,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,160,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,160,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,160,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,160,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,60,155,155,155,207,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,207,155,155,155,60,0,0,0,0,0,0,0,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,60,155,155,155,207,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,207,155,155,155,60,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,91,155,155,155,223,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,223,155,155,155,91,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,91,155,155,155,223,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,223,155,155,155,91,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,93,155,155,155,210,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,210,155,155,155,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,93,155,155,155,210,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,210,155,155,155,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,65,155,155,155,167,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,167,
155,155,155,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,65,155,155,155,167,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,167,155,155,155,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,157,157,157,6,155,155,155,91,155,155,155,168,155,155,
155,235,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,235,155,155,155,168,155,155,155,91,174,174,174,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,157,157,157,6,155,155,155,91,155,155,155,168,155,155,155,235,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,235,155,155,155,168,155,
155,155,91,174,174,174,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,36,155,155,155,81,155,155,155,111,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,111,155,155,
155,81,155,155,155,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,36,155,155,155,81,155,155,155,111,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,111,155,155,155,81,155,155,155,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,36,155,155,155,81,155,155,155,111,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,111,155,155,155,81,155,155,155,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,36,155,155,155,
81,155,155,155,111,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,111,155,155,155,81,155,155,155,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,129,129,129,6,155,155,155,91,155,
155,155,168,155,155,155,235,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,235,155,155,155,168,155,155,155,91,142,142,142,6,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,129,129,129,6,155,155,155,91,155,155,155,168,155,155,155,235,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,235,
155,155,155,168,155,155,155,91,142,142,142,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,65,155,155,155,167,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,167,155,155,155,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,65,155,
155,155,167,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,167,155,155,155,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,93,155,155,155,210,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,210,155,155,155,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,93,155,155,155,210,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,210,155,155,155,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,91,155,155,155,223,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,223,155,155,155,91,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,91,155,155,155,
223,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,223,155,155,155,91,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,60,155,155,155,207,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,207,155,155,155,60,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,0,0,0,0,0,0,0,0,155,155,155,60,155,155,155,207,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,207,155,155,155,60,0,0,0,0,0,0,0,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,160,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,160,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,160,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,160,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,0,0,0,0,155,155,155,80,155,155,155,252,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,252,155,155,155,80,0,
0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,155,155,155,80,155,155,
155,252,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,252,155,155,155,80,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,155,155,155,154,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,154,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,155,155,155,154,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,154,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,147,147,147,17,155,155,155,219,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,219,157,157,157,17,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,147,
147,147,17,155,155,155,219,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,219,157,157,157,17,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,59,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,59,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,59,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,59,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,86,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,86,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,86,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,86,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,156,156,156,255,166,166,166,255,177,177,177,255,180,180,180,255,
174,174,174,255,159,159,159,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,156,156,156,255,166,166,166,255,177,177,177,255,180,180,180,255,174,174,174,255,159,159,159,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,152,152,152,255,160,160,160,255,172,172,172,255,184,184,184,255,196,196,196,255,204,204,204,255,204,204,204,255,204,204,204,255,186,186,186,255,157,157,
157,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,152,152,152,255,160,160,160,255,172,172,172,255,184,184,184,255,196,196,196,255,204,204,204,255,204,204,204,255,204,204,204,255,186,186,186,255,157,157,157,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,154,154,154,255,151,151,151,255,152,152,
152,255,158,158,158,255,167,167,167,255,180,180,180,255,193,193,193,255,202,202,202,255,202,202,202,255,202,202,202,255,203,203,203,255,199,199,199,255,164,164,164,255,154,154,154,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,154,154,154,255,151,151,151,255,152,152,152,255,158,158,158,255,167,167,
167,255,180,180,180,255,193,193,193,255,202,202,202,255,202,202,202,255,202,202,202,255,203,203,203,255,199,199,199,255,164,164,164,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,144,144,144,255,147,147,147,255,153,153,153,255,166,166,166,255,187,187,187,255,205,
205,205,255,215,215,215,255,211,211,211,255,204,204,204,255,200,200,200,255,201,201,201,255,197,197,197,255,156,156,156,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,144,144,144,255,147,147,147,255,153,153,153,255,166,166,166,255,187,187,187,255,205,205,205,255,215,215,215,255,
211,211,211,255,204,204,204,255,200,200,200,255,201,201,201,255,197,197,197,255,156,156,156,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,152,152,152,255,142,142,142,255,138,138,138,255,144,144,144,255,165,165,165,255,186,186,186,255,203,203,203,255,221,221,221,255,232,232,232,255,231,231,231,255,230,230,230,
255,218,218,218,255,201,201,201,255,199,199,199,255,184,184,184,255,152,152,152,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
152,152,152,255,142,142,142,255,138,138,138,255,144,144,144,255,165,165,165,255,186,186,186,255,203,203,203,255,221,221,221,255,232,232,232,255,231,231,231,255,230,230,230,255,218,218,218,255,201,201,
201,255,199,199,199,255,184,184,184,255,152,152,152,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,147,147,147,255,135,135,135,
255,139,139,139,255,158,158,158,255,173,173,173,255,188,188,188,255,205,205,205,255,223,223,223,255,233,233,233,255,233,233,233,255,233,233,233,255,230,230,230,255,223,223,223,255,204,204,204,255,199,
199,199,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,147,147,147,255,135,135,135,255,139,139,139,255,158,158,
158,255,173,173,173,255,188,188,188,255,205,205,205,255,223,223,223,255,233,233,233,255,233,233,233,255,233,233,233,255,230,230,230,255,223,223,223,255,204,204,204,255,199,199,199,255,154,154,154,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,153,153,153,255,141,141,141,255,135,135,135,255,150,150,150,255,161,161,161,255,172,172,172,255,186,
186,186,255,202,202,202,255,219,219,219,255,229,229,229,255,229,229,229,255,229,229,229,255,229,229,229,255,228,228,228,255,221,221,221,255,200,200,200,255,166,166,166,255,153,153,153,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,153,153,153,255,141,141,141,255,135,135,135,255,150,150,150,255,161,161,161,255,172,172,172,255,186,186,186,255,202,202,202,255,219,
219,219,255,229,229,229,255,229,229,229,255,229,229,229,255,229,229,229,255,228,228,228,255,221,221,221,255,200,200,200,255,166,166,166,255,153,153,153,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,151,151,151,255,138,138,138,255,144,144,144,255,155,155,155,255,162,162,162,255,173,173,173,255,186,186,186,255,200,200,200,255,216,216,216,255,225,225,225,255,
225,225,225,255,225,225,225,255,225,225,225,255,225,225,225,255,225,225,225,255,211,211,211,255,171,171,171,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,151,151,151,255,138,138,138,255,144,144,144,255,155,155,155,255,162,162,162,255,173,173,173,255,186,186,186,255,200,200,200,255,216,216,216,255,225,225,225,255,225,225,225,255,225,225,225,
255,225,225,225,255,225,225,225,255,225,225,225,255,211,211,211,255,171,171,171,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,
139,139,139,255,152,152,152,255,155,155,155,255,162,162,162,255,173,173,173,255,185,185,185,255,199,199,199,255,214,214,214,255,222,222,222,255,222,222,222,255,222,222,222,255,222,222,222,255,222,222,
222,255,222,222,222,255,221,221,221,255,170,170,170,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,139,139,139,255,152,152,152,
255,155,155,155,255,162,162,162,255,173,173,173,255,185,185,185,255,199,199,199,255,214,214,214,255,222,222,222,255,222,222,222,255,222,222,222,255,222,222,222,255,222,222,222,255,222,222,222,255,221,
221,221,255,170,170,170,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,149,149,149,255,141,141,141,255,154,154,154,255,155,155,155,255,162,162,
162,255,172,172,172,255,185,185,185,255,198,198,198,255,211,211,211,255,218,218,218,255,218,218,218,255,218,218,218,255,218,218,218,255,218,218,218,255,218,218,218,255,220,220,220,255,172,172,172,255,
149,149,149,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,149,149,149,255,141,141,141,255,154,154,154,255,155,155,155,255,162,162,162,255,172,172,172,255,185,185,
185,255,198,198,198,255,211,211,211,255,218,218,218,255,218,218,218,255,218,218,218,255,218,218,218,255,218,218,218,255,218,218,218,255,220,220,220,255,172,172,172,255,149,149,149,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,143,143,143,255,155,155,155,255,157,157,157,255,165,165,165,255,174,174,174,255,185,185,185,255,197,197,197,255,209,
209,209,255,216,216,216,255,216,216,216,255,216,216,216,255,216,216,216,255,216,216,216,255,216,216,216,255,217,217,217,255,173,173,173,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,150,150,150,255,143,143,143,255,155,155,155,255,157,157,157,255,165,165,165,255,174,174,174,255,185,185,185,255,197,197,197,255,209,209,209,255,216,216,216,255,
216,216,216,255,216,216,216,255,216,216,216,255,216,216,216,255,216,216,216,255,217,217,217,255,173,173,173,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,150,150,150,255,146,146,146,255,158,158,158,255,159,159,159,255,166,166,166,255,174,174,174,255,184,184,184,255,195,195,195,255,207,207,207,255,212,212,212,255,212,212,212,255,212,212,212,
255,212,212,212,255,212,212,212,255,212,212,212,255,214,214,214,255,172,172,172,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,
146,146,146,255,158,158,158,255,159,159,159,255,166,166,166,255,174,174,174,255,184,184,184,255,195,195,195,255,207,207,207,255,212,212,212,255,212,212,212,255,212,212,212,255,212,212,212,255,212,212,
212,255,212,212,212,255,214,214,214,255,172,172,172,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,146,146,146,255,159,159,159,
255,161,161,161,255,167,167,167,255,175,175,175,255,183,183,183,255,194,194,194,255,204,204,204,255,210,210,210,255,210,210,210,255,210,210,210,255,210,210,210,255,210,210,210,255,210,210,210,255,211,
211,211,255,171,171,171,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,146,146,146,255,159,159,159,255,161,161,161,255,167,167,
167,255,175,175,175,255,183,183,183,255,194,194,194,255,204,204,204,255,210,210,210,255,210,210,210,255,210,210,210,255,210,210,210,255,210,210,210,255,210,210,210,255,211,211,211,255,171,171,171,255,
150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,147,147,147,255,160,160,160,255,162,162,162,255,168,168,168,255,175,175,175,255,183,
183,183,255,192,192,192,255,202,202,202,255,207,207,207,255,207,207,207,255,207,207,207,255,207,207,207,255,207,207,207,255,207,207,207,255,209,209,209,255,171,171,171,255,150,150,150,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,147,147,147,255,160,160,160,255,162,162,162,255,168,168,168,255,175,175,175,255,183,183,183,255,192,192,192,255,202,
202,202,255,207,207,207,255,207,207,207,255,207,207,207,255,207,207,207,255,207,207,207,255,207,207,207,255,209,209,209,255,171,171,171,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,150,150,150,255,150,150,150,255,163,163,163,255,164,164,164,255,169,169,169,255,176,176,176,255,183,183,183,255,191,191,191,255,199,199,199,255,205,205,205,255,
205,205,205,255,205,205,205,255,205,205,205,255,205,205,205,255,205,205,205,255,206,206,206,255,171,171,171,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,150,150,150,255,150,150,150,255,163,163,163,255,164,164,164,255,169,169,169,255,176,176,176,255,183,183,183,255,191,191,191,255,199,199,199,255,205,205,205,255,205,205,205,255,205,205,205,
255,205,205,205,255,205,205,205,255,205,205,205,255,206,206,206,255,171,171,171,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,
151,151,151,255,163,163,163,255,165,165,165,255,169,169,169,255,175,175,175,255,183,183,183,255,189,189,189,255,196,196,196,255,201,201,201,255,201,201,201,255,201,201,201,255,201,201,201,255,201,201,
201,255,201,201,201,255,203,203,203,255,170,170,170,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,151,151,151,255,163,163,163,
255,165,165,165,255,169,169,169,255,175,175,175,255,183,183,183,255,189,189,189,255,196,196,196,255,201,201,201,255,201,201,201,255,201,201,201,255,201,201,201,255,201,201,201,255,201,201,201,255,203,
203,203,255,170,170,170,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,151,151,151,255,164,164,164,255,164,164,164,255,168,168,
168,255,174,174,174,255,180,180,180,255,187,187,187,255,193,193,193,255,197,197,197,255,197,197,197,255,197,197,197,255,197,197,197,255,197,197,197,255,197,197,197,255,199,199,199,255,168,168,168,255,
150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,151,151,151,255,164,164,164,255,164,164,164,255,168,168,168,255,174,174,174,255,180,180,
180,255,187,187,187,255,193,193,193,255,197,197,197,255,197,197,197,255,197,197,197,255,197,197,197,255,197,197,197,255,197,197,197,255,199,199,199,255,168,168,168,255,150,150,150,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,150,150,150,255,153,153,153,255,165,165,165,255,165,165,165,255,169,169,169,255,174,174,174,255,180,180,180,255,186,186,186,255,191,
191,191,255,195,195,195,255,195,195,195,255,195,195,195,255,195,195,195,255,195,195,195,255,195,195,195,255,197,197,197,255,168,168,168,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,150,150,150,255,153,153,153,255,165,165,165,255,165,165,165,255,169,169,169,255,174,174,174,255,180,180,180,255,186,186,186,255,191,191,191,255,195,195,195,255,
195,195,195,255,195,195,195,255,195,195,195,255,195,195,195,255,195,195,195,255,197,197,197,255,168,168,168,255,150,150,150,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,151,151,151,255,153,153,153,255,167,167,167,255,167,167,167,255,170,170,170,255,175,175,175,255,180,180,180,255,185,185,185,255,191,191,191,255,193,193,193,255,193,193,193,255,193,193,193,
255,193,193,193,255,193,193,193,255,193,193,193,255,195,195,195,255,167,167,167,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,
153,153,153,255,167,167,167,255,167,167,167,255,170,170,170,255,175,175,175,255,180,180,180,255,185,185,185,255,191,191,191,255,193,193,193,255,193,193,193,255,193,193,193,255,193,193,193,255,193,193,
193,255,193,193,193,255,195,195,195,255,167,167,167,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,154,154,154,255,167,167,167,
255,167,167,167,255,170,170,170,255,174,174,174,255,178,178,178,255,183,183,183,255,188,188,188,255,191,191,191,255,191,191,191,255,191,191,191,255,191,191,191,255,191,191,191,255,191,191,191,255,192,
192,192,255,166,166,166,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,154,154,154,255,167,167,167,255,167,167,167,255,170,170,
170,255,174,174,174,255,178,178,178,255,183,183,183,255,188,188,188,255,191,191,191,255,191,191,191,255,191,191,191,255,191,191,191,255,191,191,191,255,191,191,191,255,192,192,192,255,166,166,166,255,
151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,86,155,155,155,255,155,155,155,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,154,154,154,255,168,168,168,255,167,167,167,255,170,170,170,255,172,172,172,255,177,177,
177,255,181,181,181,255,185,185,185,255,188,188,188,255,188,188,188,255,188,188,188,255,188,188,188,255,188,188,188,255,188,188,188,255,191,191,191,255,166,166,166,255,151,151,151,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,86,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,86,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,154,154,154,255,168,168,168,255,167,167,167,255,170,170,170,255,172,172,172,255,177,177,177,255,181,181,181,255,185,185,185,
255,188,188,188,255,188,188,188,255,188,188,188,255,188,188,188,255,188,188,188,255,188,188,188,255,191,191,191,255,166,166,166,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,86,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,155,155,155,59,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,151,151,151,255,155,155,155,255,168,168,168,255,168,168,168,255,170,170,170,255,172,172,172,255,176,176,176,255,180,180,180,255,184,184,184,255,186,186,186,255,186,186,186,
255,186,186,186,255,186,186,186,255,186,186,186,255,186,186,186,255,188,188,188,255,165,165,165,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,59,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,155,155,155,59,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,
151,151,255,155,155,155,255,168,168,168,255,168,168,168,255,170,170,170,255,172,172,172,255,176,176,176,255,180,180,180,255,184,184,184,255,186,186,186,255,186,186,186,255,186,186,186,255,186,186,186,
255,186,186,186,255,186,186,186,255,188,188,188,255,165,165,165,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,59,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,149,149,149,17,155,155,155,219,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,155,155,155,255,169,
169,169,255,168,168,168,255,170,170,170,255,171,171,171,255,175,175,175,255,178,178,178,255,181,181,181,255,184,184,184,255,184,184,184,255,184,184,184,255,184,184,184,255,184,184,184,255,184,184,184,
255,186,186,186,255,164,164,164,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,219,160,
160,160,17,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,149,149,149,17,155,155,155,
219,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,155,155,155,255,169,169,169,255,168,168,168,255,170,
170,170,255,171,171,171,255,175,175,175,255,178,178,178,255,181,181,181,255,184,184,184,255,184,184,184,255,184,184,184,255,184,184,184,255,184,184,184,255,184,184,184,255,186,186,186,255,164,164,164,
255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,219,160,160,160,17,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,155,155,155,154,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,157,157,157,255,168,168,168,255,168,168,168,255,169,169,169,255,171,171,171,255,173,173,173,
255,176,176,176,255,179,179,179,255,181,181,181,255,181,181,181,255,181,181,181,255,181,181,181,255,181,181,181,255,181,181,181,255,183,183,183,255,164,164,164,255,151,151,151,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,154,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,155,155,155,154,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,157,157,157,255,168,168,168,255,168,168,168,255,169,169,169,255,171,171,171,255,173,173,173,255,176,176,176,255,179,179,179,255,181,181,181,
255,181,181,181,255,181,181,181,255,181,181,181,255,181,181,181,255,181,181,181,255,183,183,183,255,164,164,164,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,154,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,155,155,155,80,155,155,155,252,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,
151,151,255,156,156,156,255,169,169,169,255,168,168,168,255,169,169,169,255,171,171,171,255,173,173,173,255,175,175,175,255,177,177,177,255,180,180,180,255,180,180,180,255,180,180,180,255,180,180,180,
255,180,180,180,255,180,180,180,255,182,182,182,255,163,163,163,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,252,155,155,155,80,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,
0,0,0,155,155,155,80,155,155,155,252,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,151,151,151,255,156,156,156,255,169,169,169,255,168,
168,168,255,169,169,169,255,171,171,171,255,173,173,173,255,175,175,175,255,177,177,177,255,180,180,180,255,180,180,180,255,180,180,180,255,180,180,180,255,180,180,180,255,180,180,180,255,182,182,182,
255,163,163,163,255,151,151,151,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,252,155,155,155,80,0,0,0,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,160,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,152,152,152,255,153,153,153,255,169,169,169,255,168,168,168,255,168,168,168,255,170,170,170,255,171,171,171,
255,173,173,173,255,176,176,176,255,177,177,177,255,177,177,177,255,177,177,177,255,177,177,177,255,177,177,177,255,177,177,177,255,180,180,180,255,157,157,157,255,152,152,152,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,160,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,160,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,152,152,152,255,153,153,153,255,169,169,169,255,168,168,168,255,168,168,168,255,170,170,170,255,171,171,171,255,173,173,173,255,176,176,176,255,177,177,177,255,177,177,177,
255,177,177,177,255,177,177,177,255,177,177,177,255,177,177,177,255,180,180,180,255,157,157,157,255,152,152,152,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,
155,155,255,155,155,155,255,155,155,155,160,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,60,155,155,155,207,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,153,153,153,255,148,148,148,255,169,
169,169,255,167,167,167,255,168,168,168,255,170,170,170,255,171,171,171,255,172,172,172,255,174,174,174,255,176,176,176,255,176,176,176,255,176,176,176,255,176,176,176,255,176,176,176,255,176,176,176,
255,179,179,179,255,149,149,149,255,153,153,153,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,207,155,155,155,60,0,0,0,0,0,0,0,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,155,155,155,60,155,155,155,207,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,153,153,153,255,148,148,148,255,169,169,169,255,167,167,167,255,168,168,168,255,170,170,170,255,171,171,
171,255,172,172,172,255,174,174,174,255,176,176,176,255,176,176,176,255,176,176,176,255,176,176,176,255,176,176,176,255,176,176,176,255,179,179,179,255,149,149,149,255,153,153,153,255,155,155,155,255,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,207,155,155,155,60,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,91,155,155,155,223,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,255,155,155,155,255,153,153,153,255,148,148,148,255,160,160,160,255,167,167,167,255,167,167,167,255,169,169,169,255,170,170,170,255,172,172,172,255,173,173,173,255,175,175,175,255,175,175,175,255,
175,175,175,255,175,175,175,255,175,175,175,255,175,175,175,255,164,164,164,255,148,148,148,255,153,153,153,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,
155,223,155,155,155,91,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,91,155,155,155,223,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,153,153,153,255,148,148,148,255,160,160,160,255,167,167,
167,255,167,167,167,255,169,169,169,255,170,170,170,255,172,172,172,255,173,173,173,255,175,175,175,255,175,175,175,255,175,175,175,255,175,175,175,255,175,175,175,255,175,175,175,255,164,164,164,255,
148,148,148,255,153,153,153,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,223,155,155,155,91,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,93,155,155,155,210,155,155,155,
255,155,155,155,255,155,155,155,255,155,155,155,255,154,154,154,255,150,150,150,255,147,147,147,255,165,165,165,255,167,167,167,255,168,168,168,255,169,169,169,255,170,170,170,255,171,171,171,255,172,
172,172,255,172,172,172,255,172,172,172,255,172,172,172,255,172,172,172,255,170,170,170,255,148,148,148,255,150,150,150,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,
255,155,155,155,210,155,155,155,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,93,155,155,155,210,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,154,154,154,255,150,150,150,255,147,147,147,
255,165,165,165,255,167,167,167,255,168,168,168,255,169,169,169,255,170,170,170,255,171,171,171,255,172,172,172,255,172,172,172,255,172,172,172,255,172,172,172,255,172,172,172,255,170,170,170,255,148,
148,148,255,150,150,150,255,154,154,154,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,210,155,155,155,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,65,155,155,155,167,
155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,152,152,152,255,148,148,148,255,149,149,149,255,164,164,164,255,167,167,167,255,168,168,168,255,169,169,169,255,170,170,170,255,171,171,
171,255,171,171,171,255,171,171,171,255,171,171,171,255,168,168,168,255,150,150,150,255,148,148,148,255,152,152,152,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,167,
155,155,155,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,65,155,155,155,167,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,152,152,152,255,148,148,148,255,149,149,149,255,164,
164,164,255,167,167,167,255,168,168,168,255,169,169,169,255,170,170,170,255,171,171,171,255,171,171,171,255,171,171,171,255,171,171,171,255,168,168,168,255,150,150,150,255,148,148,148,255,152,152,152,
255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,255,155,155,155,167,155,155,155,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,157,157,157,6,155,155,155,91,155,155,155,168,155,155,
155,235,155,155,155,255,153,153,153,255,151,151,151,255,147,147,147,255,146,146,146,255,157,157,157,255,167,167,167,255,168,168,168,255,169,169,169,255,170,170,170,255,170,170,170,255,170,170,170,255,
159,159,159,255,147,147,147,255,147,147,147,255,151,151,151,255,153,153,153,255,155,155,155,255,155,155,155,235,155,155,155,168,155,155,155,91,174,174,174,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,157,157,157,6,155,155,155,91,155,155,155,168,155,155,155,235,155,155,155,255,153,153,153,255,151,151,151,255,147,147,147,255,146,146,146,255,157,157,157,255,167,167,167,255,168,168,168,
255,169,169,169,255,170,170,170,255,170,170,170,255,170,170,170,255,159,159,159,255,147,147,147,255,147,147,147,255,151,151,151,255,153,153,153,255,155,155,155,255,155,155,155,235,155,155,155,168,155,
155,155,91,174,174,174,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,36,155,155,155,81,153,153,153,112,152,152,152,255,148,148,148,255,145,145,145,255,
143,143,143,255,144,144,144,255,149,149,149,255,153,153,153,255,153,153,153,255,150,150,150,255,144,144,144,255,143,143,143,255,145,145,145,255,148,148,148,255,152,152,152,255,153,153,153,112,155,155,
155,81,155,155,155,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,155,155,36,155,155,155,81,153,153,153,112,152,152,152,255,148,148,
148,255,145,145,145,255,143,143,143,255,144,144,144,255,149,149,149,255,153,153,153,0,129,0,126,255,255,153,153,153,255,150,150,150,255,144,144,144,255,143,143,143,255,145,145,145,255,148,148,148,255,
152,152,152,255,153,153,153,112,155,155,155,81,155,155,155,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,1,0,0,255,255,62,204,68,91,51,221,189,192,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* Gui::switcher2_png = (const char*) resource_Gui_switcher2_png;
const int Gui::switcher2_pngSize = 68458;

// JUCER_RESOURCE: switcherUp_png, 4054, "../../SwitcherUp.png"
static const unsigned char resource_Gui_switcherUp_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,38,0,0,0,64,8,6,0,0,0,118,144,5,233,0,0,10,68,105,67,67,80,73,67,67,32,80,114,111,102,105,
108,101,0,0,72,13,157,150,119,84,20,215,23,199,223,204,108,47,180,93,150,34,101,233,189,183,5,164,46,189,72,149,38,10,203,238,2,75,89,214,101,23,176,55,68,5,34,138,136,8,86,36,40,98,192,104,40,18,43,162,
88,8,8,22,236,1,9,34,74,12,70,17,21,149,204,198,28,245,247,59,39,249,253,78,222,31,119,62,243,125,247,158,119,231,222,251,206,25,0,40,1,33,2,97,14,172,0,64,182,80,34,142,244,247,102,198,197,39,48,241,
189,0,6,68,128,3,54,0,112,184,185,162,208,40,191,104,128,174,64,95,54,51,23,117,146,241,95,11,2,224,245,45,128,90,0,174,91,4,132,51,153,127,233,255,239,67,145,43,18,75,0,128,194,209,0,59,30,63,151,139,
114,33,202,89,249,18,145,76,159,68,153,158,146,41,99,24,35,99,49,154,32,202,170,50,78,251,196,230,127,250,124,98,79,25,243,178,133,60,212,71,150,179,136,151,205,147,113,23,202,27,243,164,124,148,145,16,
148,139,242,4,252,124,148,111,160,172,159,37,205,22,160,252,6,101,122,54,159,147,11,0,134,34,211,37,124,110,58,202,214,40,83,196,209,145,108,148,231,2,64,160,164,125,197,41,95,177,132,95,128,230,9,0,59,
71,180,68,44,72,75,151,48,141,185,38,76,27,103,103,22,51,128,159,159,197,151,72,44,194,57,220,76,142,152,199,100,231,100,139,56,194,37,0,124,250,102,89,20,80,146,213,150,137,22,217,209,198,217,209,209,
194,214,18,45,255,231,245,143,155,159,189,254,25,100,189,253,228,241,50,226,207,158,65,140,158,47,218,151,216,47,90,78,45,0,172,41,180,54,91,190,104,41,59,1,104,91,15,128,234,221,47,154,254,62,0,228,11,
1,104,237,251,234,123,24,178,121,73,151,72,68,46,86,86,249,249,249,150,2,62,215,82,86,208,207,235,127,58,124,246,252,123,248,234,60,75,217,121,159,107,199,244,225,167,114,164,89,18,166,172,168,220,156,
172,28,169,152,153,43,226,112,249,76,139,255,30,226,127,29,248,85,90,95,229,97,30,201,79,229,139,249,66,244,168,24,116,202,4,194,52,180,221,66,158,64,34,200,17,50,5,194,191,235,240,191,12,251,42,7,25,
126,154,107,20,104,117,31,1,61,201,18,40,244,209,1,242,107,15,192,208,200,0,73,220,131,238,64,159,251,22,66,140,1,178,155,23,171,61,246,105,238,81,70,247,255,180,255,97,224,50,244,21,206,21,164,49,101,
50,59,50,154,201,149,138,243,100,140,222,9,153,193,2,18,144,7,116,160,6,180,128,30,48,6,22,192,22,56,1,87,224,9,124,65,16,8,3,209,32,30,44,2,92,144,14,178,129,24,228,131,229,96,13,40,2,37,96,11,216,14,
170,193,94,80,7,26,64,19,56,6,218,192,73,112,14,92,4,87,193,53,112,19,220,3,67,96,20,60,3,147,224,53,152,129,32,8,15,81,33,26,164,6,105,67,6,144,25,100,11,177,32,119,200,23,10,129,34,161,120,40,25,74,
131,132,144,20,90,14,173,131,74,160,114,168,26,218,15,53,64,223,67,39,160,115,208,101,168,31,186,3,13,67,227,208,239,208,59,24,129,41,48,29,214,132,13,97,43,152,5,123,193,193,112,52,188,16,78,131,23,195,
75,225,66,120,51,92,5,215,194,71,224,86,248,28,124,21,190,9,15,193,207,224,41,4,32,100,132,129,232,32,22,8,11,97,35,97,72,2,146,138,136,145,149,72,49,82,137,212,34,77,72,7,210,141,92,71,134,144,9,228,
45,6,135,161,97,152,24,11,140,43,38,0,51,31,195,197,44,198,172,196,148,98,170,49,135,48,173,152,46,204,117,204,48,102,18,243,17,75,197,106,96,205,176,46,216,64,108,28,54,13,155,143,45,194,86,98,235,177,
45,216,11,216,155,216,81,236,107,28,14,199,192,25,225,156,112,1,184,120,92,6,110,25,174,20,183,27,215,140,59,139,235,199,141,224,166,240,120,188,26,222,12,239,134,15,195,115,240,18,124,17,126,39,254,8,
254,12,126,0,63,138,127,67,32,19,180,9,182,4,63,66,2,65,72,88,75,168,36,28,38,156,38,12,16,198,8,51,68,5,162,1,209,133,24,70,228,17,151,16,203,136,117,196,14,98,31,113,148,56,67,82,36,25,145,220,72,209,
164,12,210,26,82,21,169,137,116,129,116,159,244,146,76,38,235,146,157,201,17,100,1,121,53,185,138,124,148,124,137,60,76,126,75,81,162,152,82,216,148,68,138,148,178,153,114,144,114,150,114,135,242,146,
74,165,26,82,61,169,9,84,9,117,51,181,129,122,158,250,144,250,70,142,38,103,41,23,40,199,147,91,37,87,35,215,42,55,32,247,92,158,40,111,32,239,37,191,72,126,169,124,165,252,113,249,62,249,9,5,162,130,
161,2,91,129,163,176,82,161,70,225,132,194,160,194,148,34,77,209,70,49,76,49,91,177,84,241,176,226,101,197,39,74,120,37,67,37,95,37,158,82,161,210,1,165,243,74,35,52,132,166,71,99,211,184,180,117,180,
58,218,5,218,40,29,71,55,162,7,210,51,232,37,244,239,232,189,244,73,101,37,101,123,229,24,229,2,229,26,229,83,202,67,12,132,97,200,8,100,100,49,202,24,199,24,183,24,239,84,52,85,188,84,248,42,155,84,154,
84,6,84,166,85,231,168,122,170,242,85,139,85,155,85,111,170,190,83,99,170,249,170,101,170,109,85,107,83,123,160,142,81,55,85,143,80,207,87,223,163,126,65,125,98,14,125,142,235,28,238,156,226,57,199,230,
220,213,128,53,76,53,34,53,150,105,28,208,232,209,152,210,212,210,244,215,20,105,238,212,60,175,57,161,197,208,242,212,202,208,170,208,58,173,53,174,77,211,118,215,22,104,87,104,159,209,126,202,84,102,
122,49,179,152,85,204,46,230,164,142,134,78,128,142,84,103,191,78,175,206,140,174,145,238,124,221,181,186,205,186,15,244,72,122,44,189,84,189,10,189,78,189,73,125,109,253,80,253,229,250,141,250,119,13,
136,6,44,131,116,131,29,6,221,6,211,134,70,134,177,134,27,12,219,12,159,24,169,26,5,26,45,53,106,52,186,111,76,53,246,48,94,108,92,107,124,195,4,103,194,50,201,52,217,109,114,205,20,54,117,48,77,55,173,
49,237,51,131,205,28,205,4,102,187,205,250,205,177,230,206,230,66,243,90,243,65,11,138,133,151,69,158,69,163,197,176,37,195,50,196,114,173,101,155,229,115,43,125,171,4,171,173,86,221,86,31,173,29,172,
179,172,235,172,239,217,40,217,4,217,172,181,233,176,249,221,214,212,150,107,91,99,123,195,142,106,231,103,183,202,174,221,238,133,189,153,61,223,126,143,253,109,7,154,67,168,195,6,135,78,135,15,142,78,
142,98,199,38,199,113,39,125,167,100,167,93,78,131,44,58,43,156,85,202,186,228,140,117,246,118,94,229,124,210,249,173,139,163,139,196,229,152,203,111,174,22,174,153,174,135,93,159,204,53,154,203,159,91,
55,119,196,77,215,141,227,182,223,109,200,157,233,158,236,190,207,125,200,67,199,131,227,81,235,241,200,83,207,147,231,89,239,57,230,101,226,149,225,117,196,235,185,183,181,183,216,187,197,123,154,237,
194,94,193,62,235,131,248,248,251,20,251,244,250,42,249,206,247,173,246,125,232,167,235,151,230,215,232,55,233,239,224,191,204,255,108,0,54,32,56,96,107,192,96,160,102,32,55,176,33,112,50,200,41,104,69,
80,87,48,37,56,42,184,58,248,81,136,105,136,56,164,35,20,14,13,10,221,22,122,127,158,193,60,225,188,182,48,16,22,24,182,45,236,65,184,81,248,226,240,31,35,112,17,225,17,53,17,143,35,109,34,151,71,118,
71,209,162,146,162,14,71,189,142,246,142,46,139,190,55,223,120,190,116,126,103,140,124,76,98,76,67,204,116,172,79,108,121,236,80,156,85,220,138,184,171,241,234,241,130,248,246,4,124,66,76,66,125,194,212,
2,223,5,219,23,140,38,58,36,22,37,222,90,104,180,176,96,225,229,69,234,139,178,22,157,74,146,79,226,36,29,79,198,38,199,38,31,78,126,207,9,227,212,114,166,82,2,83,118,165,76,114,217,220,29,220,103,60,
79,94,5,111,156,239,198,47,231,143,165,186,165,150,167,62,73,115,75,219,150,54,158,238,145,94,153,62,33,96,11,170,5,47,50,2,50,246,102,76,103,134,101,30,204,156,205,138,205,106,206,38,100,39,103,159,16,
42,9,51,133,93,57,90,57,5,57,253,34,51,81,145,104,104,177,203,226,237,139,39,197,193,226,250,92,40,119,97,110,187,132,142,254,76,245,72,141,165,235,165,195,121,238,121,53,121,111,242,99,242,143,23,40,
22,8,11,122,150,152,46,217,180,100,108,169,223,210,111,151,97,150,113,151,117,46,215,89,190,102,249,240,10,175,21,251,87,66,43,83,86,118,174,210,91,85,184,106,116,181,255,234,67,107,72,107,50,215,252,
180,214,122,109,249,218,87,235,98,215,117,20,106,22,174,46,28,89,239,191,190,177,72,174,72,92,52,184,193,117,195,222,141,152,141,130,141,189,155,236,54,237,220,244,177,152,87,124,165,196,186,164,178,228,
125,41,183,244,202,55,54,223,84,125,51,187,57,117,115,111,153,99,217,158,45,184,45,194,45,183,182,122,108,61,84,174,88,190,180,124,100,91,232,182,214,10,102,69,113,197,171,237,73,219,47,87,218,87,238,
221,65,218,33,221,49,84,21,82,213,190,83,127,231,150,157,239,171,211,171,111,214,120,215,52,239,210,216,181,105,215,244,110,222,238,129,61,158,123,154,246,106,238,45,217,251,110,159,96,223,237,253,254,
251,91,107,13,107,43,15,224,14,228,29,120,92,23,83,215,253,45,235,219,134,122,245,250,146,250,15,7,133,7,135,14,69,30,234,106,112,106,104,56,172,113,184,172,17,110,148,54,142,31,73,60,114,237,59,159,239,
218,155,44,154,246,55,51,154,75,142,130,163,210,163,79,191,79,254,254,214,177,224,99,157,199,89,199,155,126,48,248,97,87,11,173,165,184,21,106,93,210,58,217,150,222,54,212,30,223,222,127,34,232,68,103,
135,107,71,203,143,150,63,30,60,169,115,178,230,148,242,169,178,211,164,211,133,167,103,207,44,61,51,117,86,116,118,226,92,218,185,145,206,164,206,123,231,227,206,223,232,138,232,234,189,16,124,225,210,
69,191,139,231,187,189,186,207,92,114,187,116,242,178,203,229,19,87,88,87,218,174,58,94,109,237,113,232,105,249,201,225,167,150,94,199,222,214,62,167,190,246,107,206,215,58,250,231,246,159,30,240,24,56,
119,221,231,250,197,27,129,55,174,222,156,119,179,255,214,252,91,183,7,19,7,135,110,243,110,63,185,147,117,231,197,221,188,187,51,247,86,223,199,222,47,126,160,240,160,242,161,198,195,218,159,77,126,110,
30,114,28,58,53,236,51,220,243,40,234,209,189,17,238,200,179,95,114,127,121,63,90,248,152,250,184,114,76,123,172,225,137,237,147,147,227,126,227,215,158,46,120,58,250,76,244,108,102,162,232,87,197,95,
119,61,55,126,254,195,111,158,191,245,76,198,77,142,190,16,191,152,253,189,244,165,218,203,131,175,236,95,117,78,133,79,61,124,157,253,122,102,186,248,141,218,155,67,111,89,111,187,223,197,190,27,155,
201,127,143,127,95,245,193,228,67,199,199,224,143,247,103,179,103,103,255,0,3,152,243,252,17,14,209,96,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,156,24,0,0,5,56,73,68,65,84,104,5,237,154,205,75,
36,71,24,135,123,62,28,21,241,35,18,20,12,132,28,60,5,2,251,7,228,18,114,91,8,228,34,9,102,115,50,8,222,66,216,156,197,61,228,146,28,246,172,241,20,15,89,188,4,2,123,91,114,201,197,219,194,130,167,69,
36,168,167,232,248,253,61,78,222,167,118,126,157,178,167,107,166,123,51,198,203,20,212,84,117,189,111,189,239,211,191,170,30,187,199,46,212,235,245,168,93,89,94,94,158,188,185,185,249,200,252,222,55,255,
167,181,90,45,82,101,110,165,82,137,74,165,146,11,115,125,125,29,93,93,93,69,196,45,22,139,110,188,97,251,206,218,77,27,123,53,51,51,243,218,57,183,248,40,132,192,22,22,22,42,19,19,19,83,133,66,225,51,
155,255,169,213,119,241,53,192,136,228,148,129,129,1,87,221,129,125,96,87,61,61,61,141,78,78,78,156,169,92,46,59,64,64,173,252,109,245,133,249,253,190,179,179,179,58,63,63,127,233,156,18,31,169,96,139,
139,139,159,148,10,165,217,122,161,254,165,239,15,20,74,25,108,52,58,58,234,146,1,162,34,40,181,248,238,239,239,59,88,193,49,87,165,80,47,252,90,171,215,22,103,103,103,255,208,152,218,38,48,91,182,175,
45,240,247,230,192,210,221,42,40,5,220,216,216,152,131,187,101,180,3,1,249,45,254,187,187,187,238,36,128,107,168,230,79,125,101,176,63,218,242,254,226,15,58,109,53,176,180,180,244,149,245,159,88,109,130,
82,178,225,225,225,72,103,207,222,241,43,73,169,168,34,101,56,30,28,28,116,39,164,60,137,150,92,79,26,185,99,83,12,102,203,247,177,5,123,108,0,31,196,86,175,3,24,101,104,104,40,78,44,0,191,197,39,121,
204,94,100,12,245,210,10,57,205,254,24,6,217,99,48,59,179,111,108,240,129,12,105,109,95,95,223,173,164,62,0,125,169,229,207,21,16,87,110,155,242,160,193,224,220,28,152,237,171,207,237,232,81,171,137,40,
214,211,211,227,146,251,203,231,247,5,39,64,142,41,180,248,81,164,188,59,104,254,120,212,96,137,164,216,67,243,121,51,179,217,57,30,33,65,171,42,160,120,66,163,35,24,181,73,187,119,12,3,44,81,105,124,
124,252,29,11,248,131,245,71,25,8,21,130,178,28,236,23,0,210,170,63,87,251,73,48,151,151,151,238,171,38,4,239,205,29,94,91,91,91,41,91,178,15,109,242,164,103,72,237,146,0,181,20,88,9,147,206,140,3,133,
175,239,227,247,147,115,18,199,147,48,149,45,200,123,4,201,82,218,129,145,28,31,63,158,198,178,196,151,15,76,101,11,242,76,3,237,90,31,44,228,43,181,80,150,62,5,184,28,138,113,98,207,202,161,4,161,113,
45,101,200,206,159,161,164,79,30,40,197,205,13,198,101,143,114,105,201,164,22,193,165,210,219,170,150,11,12,37,164,70,26,152,108,58,107,1,250,173,111,107,213,207,5,6,140,224,66,65,249,67,47,85,241,65,
93,84,163,166,157,76,40,78,46,48,160,244,77,159,22,144,228,248,80,0,162,228,129,113,19,26,31,185,192,72,214,74,49,95,41,128,168,82,139,54,79,201,12,166,68,82,45,45,137,174,72,217,52,71,128,82,83,246,86,
109,102,48,130,72,45,148,33,89,178,72,49,93,181,2,18,96,210,191,213,113,46,48,2,181,218,99,82,204,223,95,90,202,180,19,233,24,152,18,134,20,67,81,249,0,4,40,237,157,42,70,66,109,96,192,210,10,95,21,2,
83,139,159,84,163,239,143,115,28,42,153,151,82,1,185,125,225,78,54,237,142,84,138,201,87,73,245,16,115,39,155,159,100,36,0,236,226,226,194,129,241,80,226,23,148,84,114,237,41,212,98,14,243,101,243,231,
132,250,186,131,13,217,227,113,130,30,31,31,187,99,61,204,146,28,24,0,85,5,135,63,80,231,231,231,238,201,92,183,229,113,192,54,157,204,96,196,33,209,193,193,129,107,15,15,15,163,106,181,234,18,51,174,
13,174,150,159,9,120,18,71,45,160,89,250,228,18,183,98,187,189,22,173,60,205,134,10,219,219,219,238,17,142,100,40,119,118,118,230,30,82,216,119,244,1,223,219,219,139,0,231,170,20,84,232,130,9,165,204,
165,24,65,72,182,177,177,17,223,191,51,134,58,71,71,71,174,2,135,130,128,160,82,111,111,175,131,203,163,22,49,115,131,145,128,228,235,235,235,238,119,9,84,84,5,134,170,253,196,178,162,24,246,188,37,215,
82,250,193,81,101,115,115,51,218,218,218,138,248,217,0,101,184,106,217,87,44,177,160,252,57,121,250,111,13,166,36,192,240,163,73,167,75,126,141,59,77,16,136,215,5,11,8,19,28,238,42,22,148,38,96,232,42,
22,16,38,56,220,85,44,40,77,192,208,85,44,32,76,112,184,171,88,80,154,128,161,171,88,64,152,224,112,87,177,160,52,1,67,87,177,128,48,193,225,162,61,52,124,17,180,222,147,1,38,123,178,42,110,223,83,254,
96,90,152,138,246,8,191,110,30,109,255,171,31,140,210,121,195,235,254,254,254,245,226,220,220,92,213,30,98,155,254,89,222,249,124,217,34,194,50,61,61,93,213,85,249,220,166,213,178,77,189,83,47,24,96,121,
243,19,129,253,7,255,55,235,175,48,112,207,101,165,193,242,239,111,23,246,200,255,179,65,189,188,71,176,151,13,6,135,160,165,140,236,165,140,63,237,50,253,201,214,120,243,255,134,35,39,185,97,80,238,92,
47,132,104,82,135,219,212,23,66,154,192,72,26,122,133,166,195,64,81,174,87,104,148,124,117,117,181,98,239,229,220,122,233,72,182,255,216,198,47,29,141,140,140,172,78,77,77,101,127,233,40,153,216,127,77,
203,246,195,211,164,61,203,177,237,161,111,205,239,47,251,86,207,244,154,214,63,238,244,212,101,197,47,161,13,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* Gui::switcherUp_png = (const char*) resource_Gui_switcherUp_png;
const int Gui::switcherUp_pngSize = 4054;

// JUCER_RESOURCE: switcherDown_png, 3997, "../../SwitcherDown.png"
static const unsigned char resource_Gui_switcherDown_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,38,0,0,0,64,8,6,0,0,0,118,144,5,233,0,0,10,68,105,67,67,80,73,67,67,32,80,114,111,102,
105,108,101,0,0,72,13,157,150,119,84,20,215,23,199,223,204,108,47,180,93,150,34,101,233,189,183,5,164,46,189,72,149,38,10,203,238,2,75,89,214,101,23,176,55,68,5,34,138,136,8,86,36,40,98,192,104,40,18,
43,162,88,8,8,22,236,1,9,34,74,12,70,17,21,149,204,198,28,245,247,59,39,249,253,78,222,31,119,62,243,125,247,158,119,231,222,251,206,25,0,40,1,33,2,97,14,172,0,64,182,80,34,142,244,247,102,198,197,39,
48,241,189,0,6,68,128,3,54,0,112,184,185,162,208,40,191,104,128,174,64,95,54,51,23,117,146,241,95,11,2,224,245,45,128,90,0,174,91,4,132,51,153,127,233,255,239,67,145,43,18,75,0,128,194,209,0,59,30,63,
151,139,114,33,202,89,249,18,145,76,159,68,153,158,146,41,99,24,35,99,49,154,32,202,170,50,78,251,196,230,127,250,124,98,79,25,243,178,133,60,212,71,150,179,136,151,205,147,113,23,202,27,243,164,124,148,
145,16,148,139,242,4,252,124,148,111,160,172,159,37,205,22,160,252,6,101,122,54,159,147,11,0,134,34,211,37,124,110,58,202,214,40,83,196,209,145,108,148,231,2,64,160,164,125,197,41,95,177,132,95,128,230,
9,0,59,71,180,68,44,72,75,151,48,141,185,38,76,27,103,103,22,51,128,159,159,197,151,72,44,194,57,220,76,142,152,199,100,231,100,139,56,194,37,0,124,250,102,89,20,80,146,213,150,137,22,217,209,198,217,
209,209,194,214,18,45,255,231,245,143,155,159,189,254,25,100,189,253,228,241,50,226,207,158,65,140,158,47,218,151,216,47,90,78,45,0,172,41,180,54,91,190,104,41,59,1,104,91,15,128,234,221,47,154,254,62,
0,228,11,1,104,237,251,234,123,24,178,121,73,151,72,68,46,86,86,249,249,249,150,2,62,215,82,86,208,207,235,127,58,124,246,252,123,248,234,60,75,217,121,159,107,199,244,225,167,114,164,89,18,166,172,168,
220,156,172,28,169,152,153,43,226,112,249,76,139,255,30,226,127,29,248,85,90,95,229,97,30,201,79,229,139,249,66,244,168,24,116,202,4,194,52,180,221,66,158,64,34,200,17,50,5,194,191,235,240,191,12,251,
42,7,25,126,154,107,20,104,117,31,1,61,201,18,40,244,209,1,242,107,15,192,208,200,0,73,220,131,238,64,159,251,22,66,140,1,178,155,23,171,61,246,105,238,81,70,247,255,180,255,97,224,50,244,21,206,21,164,
49,101,50,59,50,154,201,149,138,243,100,140,222,9,153,193,2,18,144,7,116,160,6,180,128,30,48,6,22,192,22,56,1,87,224,9,124,65,16,8,3,209,32,30,44,2,92,144,14,178,129,24,228,131,229,96,13,40,2,37,96,11,
216,14,170,193,94,80,7,26,64,19,56,6,218,192,73,112,14,92,4,87,193,53,112,19,220,3,67,96,20,60,3,147,224,53,152,129,32,8,15,81,33,26,164,6,105,67,6,144,25,100,11,177,32,119,200,23,10,129,34,161,120,40,
25,74,131,132,144,20,90,14,173,131,74,160,114,168,26,218,15,53,64,223,67,39,160,115,208,101,168,31,186,3,13,67,227,208,239,208,59,24,129,41,48,29,214,132,13,97,43,152,5,123,193,193,112,52,188,16,78,131,
23,195,75,225,66,120,51,92,5,215,194,71,224,86,248,28,124,21,190,9,15,193,207,224,41,4,32,100,132,129,232,32,22,8,11,97,35,97,72,2,146,138,136,145,149,72,49,82,137,212,34,77,72,7,210,141,92,71,134,144,
9,228,45,6,135,161,97,152,24,11,140,43,38,0,51,31,195,197,44,198,172,196,148,98,170,49,135,48,173,152,46,204,117,204,48,102,18,243,17,75,197,106,96,205,176,46,216,64,108,28,54,13,155,143,45,194,86,98,
235,177,45,216,11,216,155,216,81,236,107,28,14,199,192,25,225,156,112,1,184,120,92,6,110,25,174,20,183,27,215,140,59,139,235,199,141,224,166,240,120,188,26,222,12,239,134,15,195,115,240,18,124,17,126,
39,254,8,254,12,126,0,63,138,127,67,32,19,180,9,182,4,63,66,2,65,72,88,75,168,36,28,38,156,38,12,16,198,8,51,68,5,162,1,209,133,24,70,228,17,151,16,203,136,117,196,14,98,31,113,148,56,67,82,36,25,145,
220,72,209,164,12,210,26,82,21,169,137,116,129,116,159,244,146,76,38,235,146,157,201,17,100,1,121,53,185,138,124,148,124,137,60,76,126,75,81,162,152,82,216,148,68,138,148,178,153,114,144,114,150,114,135,
242,146,74,165,26,82,61,169,9,84,9,117,51,181,129,122,158,250,144,250,70,142,38,103,41,23,40,199,147,91,37,87,35,215,42,55,32,247,92,158,40,111,32,239,37,191,72,126,169,124,165,252,113,249,62,249,9,5,
162,130,161,2,91,129,163,176,82,161,70,225,132,194,160,194,148,34,77,209,70,49,76,49,91,177,84,241,176,226,101,197,39,74,120,37,67,37,95,37,158,82,161,210,1,165,243,74,35,52,132,166,71,99,211,184,180,
117,180,58,218,5,218,40,29,71,55,162,7,210,51,232,37,244,239,232,189,244,73,101,37,101,123,229,24,229,2,229,26,229,83,202,67,12,132,97,200,8,100,100,49,202,24,199,24,183,24,239,84,52,85,188,84,248,42,
155,84,154,84,6,84,166,85,231,168,122,170,242,85,139,85,155,85,111,170,190,83,99,170,249,170,101,170,109,85,107,83,123,160,142,81,55,85,143,80,207,87,223,163,126,65,125,98,14,125,142,235,28,238,156,226,
57,199,230,220,213,128,53,76,53,34,53,150,105,28,208,232,209,152,210,212,210,244,215,20,105,238,212,60,175,57,161,197,208,242,212,202,208,170,208,58,173,53,174,77,211,118,215,22,104,87,104,159,209,126,
202,84,102,122,49,179,152,85,204,46,230,164,142,134,78,128,142,84,103,191,78,175,206,140,174,145,238,124,221,181,186,205,186,15,244,72,122,44,189,84,189,10,189,78,189,73,125,109,253,80,253,229,250,141,
250,119,13,136,6,44,131,116,131,29,6,221,6,211,134,70,134,177,134,27,12,219,12,159,24,169,26,5,26,45,53,106,52,186,111,76,53,246,48,94,108,92,107,124,195,4,103,194,50,201,52,217,109,114,205,20,54,117,
48,77,55,173,49,237,51,131,205,28,205,4,102,187,205,250,205,177,230,206,230,66,243,90,243,65,11,138,133,151,69,158,69,163,197,176,37,195,50,196,114,173,101,155,229,115,43,125,171,4,171,173,86,221,86,31,
173,29,172,179,172,235,172,239,217,40,217,4,217,172,181,233,176,249,221,214,212,150,107,91,99,123,195,142,106,231,103,183,202,174,221,238,133,189,153,61,223,126,143,253,109,7,154,67,168,195,6,135,78,135,
15,142,78,142,98,199,38,199,113,39,125,167,100,167,93,78,131,44,58,43,156,85,202,186,228,140,117,246,118,94,229,124,210,249,173,139,163,139,196,229,152,203,111,174,22,174,153,174,135,93,159,204,53,154,
203,159,91,55,119,196,77,215,141,227,182,223,109,200,157,233,158,236,190,207,125,200,67,199,131,227,81,235,241,200,83,207,147,231,89,239,57,230,101,226,149,225,117,196,235,185,183,181,183,216,187,197,
123,154,237,194,94,193,62,235,131,248,248,251,20,251,244,250,42,249,206,247,173,246,125,232,167,235,151,230,215,232,55,233,239,224,191,204,255,108,0,54,32,56,96,107,192,96,160,102,32,55,176,33,112,50,
200,41,104,69,80,87,48,37,56,42,184,58,248,81,136,105,136,56,164,35,20,14,13,10,221,22,122,127,158,193,60,225,188,182,48,16,22,24,182,45,236,65,184,81,248,226,240,31,35,112,17,225,17,53,17,143,35,109,
34,151,71,118,71,209,162,146,162,14,71,189,142,246,142,46,139,190,55,223,120,190,116,126,103,140,124,76,98,76,67,204,116,172,79,108,121,236,80,156,85,220,138,184,171,241,234,241,130,248,246,4,124,66,76,
66,125,194,212,2,223,5,219,23,140,38,58,36,22,37,222,90,104,180,176,96,225,229,69,234,139,178,22,157,74,146,79,226,36,29,79,198,38,199,38,31,78,126,207,9,227,212,114,166,82,2,83,118,165,76,114,217,220,
29,220,103,60,79,94,5,111,156,239,198,47,231,143,165,186,165,150,167,62,73,115,75,219,150,54,158,238,145,94,153,62,33,96,11,170,5,47,50,2,50,246,102,76,103,134,101,30,204,156,205,138,205,106,206,38,100,
39,103,159,16,42,9,51,133,93,57,90,57,5,57,253,34,51,81,145,104,104,177,203,226,237,139,39,197,193,226,250,92,40,119,97,110,187,132,142,254,76,245,72,141,165,235,165,195,121,238,121,53,121,111,242,99,
242,143,23,40,22,8,11,122,150,152,46,217,180,100,108,169,223,210,111,151,97,150,113,151,117,46,215,89,190,102,249,240,10,175,21,251,87,66,43,83,86,118,174,210,91,85,184,106,116,181,255,234,67,107,72,107,
50,215,252,180,214,122,109,249,218,87,235,98,215,117,20,106,22,174,46,28,89,239,191,190,177,72,174,72,92,52,184,193,117,195,222,141,152,141,130,141,189,155,236,54,237,220,244,177,152,87,124,165,196,186,
164,178,228,125,41,183,244,202,55,54,223,84,125,51,187,57,117,115,111,153,99,217,158,45,184,45,194,45,183,182,122,108,61,84,174,88,190,180,124,100,91,232,182,214,10,102,69,113,197,171,237,73,219,47,87,
218,87,238,221,65,218,33,221,49,84,21,82,213,190,83,127,231,150,157,239,171,211,171,111,214,120,215,52,239,210,216,181,105,215,244,110,222,238,129,61,158,123,154,246,106,238,45,217,251,110,159,96,223,
237,253,254,251,91,107,13,107,43,15,224,14,228,29,120,92,23,83,215,253,45,235,219,134,122,245,250,146,250,15,7,133,7,135,14,69,30,234,106,112,106,104,56,172,113,184,172,17,110,148,54,142,31,73,60,114,
237,59,159,239,218,155,44,154,246,55,51,154,75,142,130,163,210,163,79,191,79,254,254,214,177,224,99,157,199,89,199,155,126,48,248,97,87,11,173,165,184,21,106,93,210,58,217,150,222,54,212,30,223,222,127,
34,232,68,103,135,107,71,203,143,150,63,30,60,169,115,178,230,148,242,169,178,211,164,211,133,167,103,207,44,61,51,117,86,116,118,226,92,218,185,145,206,164,206,123,231,227,206,223,232,138,232,234,189,
16,124,225,210,69,191,139,231,187,189,186,207,92,114,187,116,242,178,203,229,19,87,88,87,218,174,58,94,109,237,113,232,105,249,201,225,167,150,94,199,222,214,62,167,190,246,107,206,215,58,250,231,246,
159,30,240,24,56,119,221,231,250,197,27,129,55,174,222,156,119,179,255,214,252,91,183,7,19,7,135,110,243,110,63,185,147,117,231,197,221,188,187,51,247,86,223,199,222,47,126,160,240,160,242,161,198,195,
218,159,77,126,110,30,114,28,58,53,236,51,220,243,40,234,209,189,17,238,200,179,95,114,127,121,63,90,248,152,250,184,114,76,123,172,225,137,237,147,147,227,126,227,215,158,46,120,58,250,76,244,108,102,
162,232,87,197,95,119,61,55,126,254,195,111,158,191,245,76,198,77,142,190,16,191,152,253,189,244,165,218,203,131,175,236,95,117,78,133,79,61,124,157,253,122,102,186,248,141,218,155,67,111,89,111,187,223,
197,190,27,155,201,127,143,127,95,245,193,228,67,199,199,224,143,247,103,179,103,103,255,0,3,152,243,252,17,14,209,96,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,156,24,0,0,4,255,73,68,65,84,104,
5,237,154,191,107,44,85,20,199,239,206,38,155,223,63,9,4,98,80,3,169,2,194,251,3,108,196,78,16,44,12,74,196,42,38,144,78,65,59,33,4,196,198,7,90,39,166,50,130,178,22,130,96,39,54,54,233,30,60,120,149,
197,106,48,69,48,217,4,18,242,115,179,158,207,152,239,122,51,111,38,51,215,167,239,109,177,7,46,119,230,204,185,247,124,246,123,238,44,115,119,167,212,108,54,93,158,109,110,110,206,94,95,95,191,100,113,
207,151,74,165,47,242,226,211,174,91,158,247,205,255,123,20,69,15,23,23,23,127,77,139,241,125,165,44,176,181,181,181,202,212,212,212,188,129,188,110,3,94,181,54,225,15,124,130,227,63,109,236,79,150,247,
135,221,221,221,234,234,234,234,69,218,92,169,96,235,235,235,175,148,75,229,229,102,169,249,118,218,160,255,202,87,106,150,190,105,52,27,235,203,203,203,63,39,231,124,12,204,202,246,174,125,154,143,44,
144,210,61,13,123,104,85,249,204,202,251,149,159,236,22,216,198,198,198,59,182,6,62,49,176,23,253,160,255,251,216,192,106,182,134,63,94,90,90,250,90,185,34,29,88,249,94,182,128,15,159,54,20,249,201,73,
110,24,196,211,2,51,165,222,51,231,61,93,120,6,253,189,27,134,56,117,92,74,91,87,111,24,245,119,230,41,63,3,32,63,101,195,148,123,211,214,219,247,82,236,181,54,128,2,16,97,96,113,229,201,201,201,49,147,
240,83,59,30,199,209,6,54,178,189,189,189,21,85,42,149,57,131,153,109,3,32,33,204,194,20,217,109,250,156,60,237,210,195,20,217,98,251,182,93,128,196,1,147,22,191,124,109,211,119,192,66,75,209,81,172,163,
88,168,2,161,241,157,53,214,81,44,84,129,208,248,206,26,235,40,22,170,64,104,124,103,141,117,20,11,85,32,52,190,43,116,64,50,222,158,207,93,127,127,191,27,24,24,112,229,114,217,93,92,92,184,163,163,35,
119,117,117,149,12,13,58,255,215,96,141,70,195,245,246,246,186,193,193,193,86,227,92,118,112,112,224,118,118,118,156,237,120,228,10,234,131,239,74,251,41,161,165,6,73,47,47,47,227,115,64,57,87,27,27,27,
115,115,115,115,174,175,175,143,31,77,130,160,8,14,6,163,68,231,231,231,49,16,80,36,237,233,233,137,85,27,26,26,138,65,108,103,239,0,165,159,153,153,137,251,80,178,160,82,146,236,236,236,44,86,200,118,
203,49,204,196,196,132,27,29,29,141,27,235,12,80,218,241,241,177,171,215,235,49,212,244,244,180,171,213,106,241,26,44,10,24,4,134,66,168,213,213,213,229,134,135,135,227,53,134,42,106,220,8,52,140,181,
215,221,221,237,246,247,247,221,200,200,72,176,106,133,75,201,218,225,142,195,116,7,162,12,126,148,164,196,126,227,26,96,172,53,96,1,37,182,168,21,86,76,0,44,102,18,250,234,232,90,218,87,4,234,242,65,
24,67,28,234,22,177,194,96,40,0,140,255,149,64,2,252,190,114,105,73,249,158,83,92,218,245,52,95,16,152,214,146,38,34,25,70,175,114,234,154,223,107,156,226,253,107,89,199,133,193,80,139,4,234,249,150,87,
89,72,72,153,104,105,198,117,191,244,105,49,73,95,97,48,6,2,67,243,147,248,80,105,107,140,113,124,128,16,181,24,19,4,198,0,41,38,56,18,210,40,37,208,105,166,152,180,107,89,190,32,48,193,168,215,164,42,
35,112,105,166,146,167,93,203,242,5,129,37,75,9,32,86,68,177,44,128,44,127,16,152,64,212,3,132,161,88,222,93,169,216,44,144,164,63,8,140,193,64,105,205,72,41,129,9,56,153,132,82,102,221,177,201,88,157,
7,129,145,64,201,213,51,17,128,90,103,154,248,73,251,194,96,2,209,66,230,92,62,149,233,46,85,136,81,124,17,232,194,96,76,150,156,216,87,42,235,142,100,28,113,130,231,188,136,69,54,224,173,34,129,138,241,
225,80,72,112,128,101,181,80,40,152,186,172,52,127,20,29,40,40,245,192,50,86,45,175,148,250,112,121,61,76,145,61,99,61,178,192,220,127,245,53,89,26,20,64,168,69,159,213,138,126,120,88,236,209,234,81,180,
178,178,82,183,100,143,253,89,46,16,191,103,225,43,129,122,31,36,171,148,248,139,26,44,11,11,11,117,61,181,253,104,3,115,71,3,227,43,166,100,248,1,164,191,171,41,254,142,30,6,88,254,222,37,45,218,63,170,
118,188,133,35,203,0,242,63,185,0,164,24,231,89,138,17,195,99,121,218,135,74,228,219,186,97,249,103,251,102,131,191,180,160,7,137,192,214,41,147,178,25,193,128,240,141,243,60,197,216,93,229,128,61,184,
97,136,167,86,41,157,189,148,241,139,37,184,111,131,107,126,210,228,241,233,233,105,236,2,70,13,135,142,211,122,126,50,192,159,101,228,180,235,247,97,80,204,173,247,46,112,102,189,16,194,196,60,8,82,174,
241,241,241,214,211,44,42,248,77,19,171,71,201,189,189,189,56,158,141,9,177,9,203,127,33,68,3,178,94,161,1,10,56,38,103,175,232,63,205,10,78,115,208,19,207,111,24,192,1,149,124,144,12,122,133,70,19,87,
171,213,202,225,225,225,173,151,142,72,64,3,14,5,217,150,177,3,18,148,175,198,201,201,73,188,27,103,62,160,248,170,161,153,181,94,58,178,29,124,117,126,126,190,248,75,71,140,246,77,175,105,25,204,11,214,
62,87,73,129,4,134,61,35,201,49,84,226,14,4,28,16,84,186,41,225,7,22,251,155,249,10,189,166,245,23,13,253,121,196,175,2,40,202,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* Gui::switcherDown_png = (const char*) resource_Gui_switcherDown_png;
const int Gui::switcherDown_pngSize = 3997;


//[EndFile] You can add extra defines here...
//[/EndFile]
