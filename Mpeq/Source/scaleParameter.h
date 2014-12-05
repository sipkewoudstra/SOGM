/*
  ==============================================================================

    scaleParameter.h
    Created: 4 Dec 2014 8:23:22pm
    Author:  sipke woudstra

  ==============================================================================
*/

#ifndef SCALEPARAMETER_H_INCLUDED
#define SCALEPARAMETER_H_INCLUDED

class scaleParameter{
public:
    float scaleLinearToHost(float input, float min, float max);
    float scaleLinearFromHost(float input, float min, float max);
    float scaleLogToHost(float input, float min, float max);
    float scaleLogFromHost(float input, float min, float max);
    float scaleBoolToHost(bool input);
    bool scaleBoolFromHost(float input);
};



#endif  // SCALEPARAMETER_H_INCLUDED
