/*
  ==============================================================================

    PeakFilter.h
    Created: 2 Dec 2014 10:05:45pm
    Author:  sipke woudstra

  ==============================================================================
*/

#ifndef PEAKFILTER_H_INCLUDED
#define PEAKFILTER_H_INCLUDED
#include "Filter.h"

class PeakFilter : public Filter
{
public:
    void calculateVariables();
    void set_PositiveNegative(bool posneg);
private:
    double K;
    double norm;
    double V;
    bool posneg;
};



#endif  // PEAKFILTER_H_INCLUDED
