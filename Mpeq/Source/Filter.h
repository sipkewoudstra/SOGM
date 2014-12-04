/*
  ==============================================================================

    Filter.h
    Created: 4 Dec 2014 12:52:10pm
    Author:  sipke woudstra

  ==============================================================================
*/

#ifndef FILTER_H_INCLUDED
#define FILTER_H_INCLUDED
#include "math.h"

class Filter
{
public:
    Filter();
    void set_Frequency(double Frequency);
    void set_Q(double Q);
    void set_Gain(double Gain);
    void set_Samplerate(double Samplerate);
    void passHistory(float buffer, int channel);
    float processSample(float buffer, int channel);
    
    
protected:
    double Fs;
    double f0;
    double Q;
    double Gain;
    double a0;
    double a1;
    double a2;
    double b1;
    double b2;
    
    float x[2][3];
    float y[2][3];
};



#endif  // FILTER_H_INCLUDED
