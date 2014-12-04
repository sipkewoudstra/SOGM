/*
  ==============================================================================

    LowpassFilter.h
    Created: 2 Dec 2014 10:05:03pm
    Author:  sipke woudstra

  ==============================================================================
*/

#ifndef LOWPASSFILTER_H_INCLUDED
#define LOWPASSFILTER_H_INCLUDED
#include "Filter.h"

class LowpassFilter : public Filter
{
public:
    void calculateVariables();
private:
    double K;
    double norm;
};




#endif  // LOWPASSFILTER_H_INCLUDED
