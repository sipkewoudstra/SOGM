/*
  ==============================================================================

    LowShelfFilter.h
    Created: 2 Dec 2014 10:05:21pm
    Author:  sipke woudstra

  ==============================================================================
*/

#ifndef LOWSHELFFILTER_H_INCLUDED
#define LOWSHELFFILTER_H_INCLUDED
#include "Filter.h"

class LowShelfFilter : public Filter
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






#endif  // LOWSHELFFILTER_H_INCLUDED
