/*
  ==============================================================================

    scaleLinToLog.cpp
    Created: 8 Dec 2014 7:28:27pm
    Author:  sipke woudstra

  ==============================================================================
*/

#include "scaleLinToLog.h"

float scaleLinToLog::scaleToLog(float input, float max, float min){
    return (((powf(10, input/(max-min))-1)/9)*10)*((max-min)/10) + min;
}

float scaleLinToLog::scaleToLin(float input, float max, float min){
    return (log10f((input-min)/(max-min))/10)*(max-min)+min;
}