/*
  ==============================================================================

    scaleLinToLog.h
    Created: 8 Dec 2014 7:28:27pm
    Author:  sipke woudstra

  ==============================================================================
*/

#ifndef SCALELINTOLOG_H_INCLUDED
#define SCALELINTOLOG_H_INCLUDED

#include <math.h>

class scaleLinToLog {
public:
    float scaleToLog(float input, float max, float min);
    float scaleToLin(float input, float max, float min);
};



#endif  // SCALELINTOLOG_H_INCLUDED
