/*
  ==============================================================================

    HighShelfFilter.h
    Created: 2 Dec 2014 10:05:32pm
    Author:  sipke woudstra

  ==============================================================================
*/

#ifndef HIGHSHELFFILTER_H_INCLUDED
#define HIGHSHELFFILTER_H_INCLUDED
#include "Filter.h"

class HighShelfFilter : public Filter
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




#endif  // HIGHSHELFFILTER_H_INCLUDED
