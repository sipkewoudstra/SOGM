/*
  ==============================================================================

    HighpassFilter.h
    Created: 2 Dec 2014 10:04:55pm
    Author:  sipke woudstra

  ==============================================================================
*/

#ifndef HIGHPASSFILTER_H_INCLUDED
#define HIGHPASSFILTER_H_INCLUDED
#include "Filter.h"

class HighpassFilter : public Filter
{
public:
    void calculateVariables();
private:
    double K;
    double norm;
};



#endif  // HIGHPASSFILTER_H_INCLUDED
