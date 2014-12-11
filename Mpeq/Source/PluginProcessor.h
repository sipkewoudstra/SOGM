/*
 ==============================================================================
 
 This file was auto-generated by the Introjucer!
 
 It contains the basic framework code for a JUCE plugin processor.
 
 ==============================================================================
 */

#ifndef PLUGINPROCESSOR_H_INCLUDED
#define PLUGINPROCESSOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "Gui.h"
#include "LowpassFilter.h"
#include "HighpassFilter.h"
#include "PeakFilter.h"
#include "LowShelfFilter.h"
#include "HighShelfFilter.h"
#include "NotchFilter.h"
#include "scaleParameter.h"

//==============================================================================
/**
 */
class NewProjectAudioProcessor  : public AudioProcessor, public scaleParameter
{
public:
    //==============================================================================
    NewProjectAudioProcessor();
    ~NewProjectAudioProcessor();
    
    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;
    void processBlock (AudioSampleBuffer&, MidiBuffer&) override;
    
    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;
    
    //==============================================================================
    int getNumParameters();
    const String getParameterName (int parameterIndex);
    float getParameter (int parameterIndex);
    void setParameter (int parameterIndex, float newValue);
    const String getParameterText (int index) override;
    //==============================================================================
    const String getName() const override;
    const String getInputChannelName (int channelIndex) const override;
    const String getOutputChannelName (int channelIndex) const override;
    bool isInputChannelStereoPair (int index) const override;
    bool isOutputChannelStereoPair (int index) const override;
    
    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool silenceInProducesSilenceOut() const override;
    double getTailLengthSeconds() const override;
    
    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;
    
    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;
    //==============================================================================

    //==============================================================================
    
    Gui custom;
    
    enum Parameters
    {
        LFGain = 0,
        LFShape,
        LFFreq,
        LFQ,
        LFPos,
        LFPN,
        LFEnable,
        LMFGain,
        LMFShape,
        LMFFreq,
        LMFQ,
        LMFPos,
        LMFPN,
        LMFEnable,
        HMFGain,
        HMFShape,
        HMFFreq,
        HMFQ,
        HMFPos,
        HMFPN,
        HMFEnable,
        HFGain,
        HFShape,
        HFFreq,
        HFQ,
        HFPos,
        HFPN,
        HFEnable,
        HPFreq,
        HPQ,
        HPEnable,
        LPFreq,
        LPQ,
        LPEnable,
        totalNumParams
    };
    
private:
    
    LowpassFilter LP;
    HighpassFilter HP;
    PeakFilter LFPeak;
    PeakFilter LMFPeak;
    PeakFilter HMFPeak;
    PeakFilter HFPeak;
    LowShelfFilter LFShelf;
    LowShelfFilter LMFShelf;
    HighShelfFilter HMFShelf;
    HighShelfFilter HFShelf;
    NotchFilter LFNotch;
    NotchFilter LMFNotch;
    NotchFilter HMFNotch;
    NotchFilter HFNotch;
    
    float parallelChain1;
    float parallelChain2;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NewProjectAudioProcessor)
};


#endif  // PLUGINPROCESSOR_H_INCLUDED
