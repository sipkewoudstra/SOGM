/*
  ==============================================================================

    Filter.cpp
    Created: 4 Dec 2014 12:52:10pm
    Author:  sipke woudstra

  ==============================================================================
*/

#include "Filter.h"

Filter::Filter(){
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            x[i][j] = 0;
            y[i][j] = 0;
        }
    }
}

void Filter::set_Frequency(double Frequency){
    this->f0 = Frequency;
}
void Filter::set_Q(double Q){
    this->Q = Q;
}
void Filter::set_Gain(double Gain){
    this->Gain = Gain;
}
void Filter::set_Samplerate(double Samplerate){
    this->Fs = Samplerate;
}

void Filter::passHistory(float buffer, int channel){
    x[channel][2] = x[channel][1];
    x[channel][1] = x[channel][0];
    x[channel][0] = buffer;
    y[channel][2] = y[channel][1];
    y[channel][1] = y[channel][0];
}

float Filter::processSample(float buffer, int channel){
    passHistory(buffer, channel);
    
    buffer = (a0*x[channel][0] + a1*x[channel][1] + a2*x[channel][2] - b1*y[channel][1] - b2*y[channel][2]);
    
    y[channel][0] = buffer;
    
    return buffer;
    
}