/*
  ==============================================================================

    NotchFilter.h
    Created: 2 Dec 2014 10:05:50pm
    Author:  sipke woudstra

  ==============================================================================
*/

#ifndef NOTCHFILTER_H_INCLUDED
#define NOTCHFILTER_H_INCLUDED
#include "Filter.h"

class NotchFilter : public Filter
{
public:
    void calculateVariables();
private:
    double K;
    double norm;
};




#endif  // NOTCHFILTER_H_INCLUDED
