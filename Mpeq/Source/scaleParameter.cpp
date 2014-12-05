/*
  ==============================================================================

    scaleParameter.cpp
    Created: 4 Dec 2014 8:23:22pm
    Author:  sipke woudstra

  ==============================================================================
*/

#include "scaleParameter.h"
#include "math.h"


float scaleParameter::scaleLinearToHost(float input, float min, float max){
    return (input-min)/(max-min);
}
float scaleParameter::scaleLinearFromHost(float input, float min, float max){
    return (input*(max-min)) + min;
}
float scaleParameter::scaleBoolToHost(bool input){
    if (input == true) {
        return 1;
    } else {
        return 0;
    }
}
bool scaleParameter::scaleBoolFromHost(float input){
    if (input > 0.5) {
        return true;
    } else {
        return false;
    }
}

float scaleParameter::scaleLogToHost(float input, float min, float max){
    return log10f(input-min)/(max-min);
}

float scaleParameter::scaleLogFromHost(float input, float min, float max){
    return (powf(10, input)*(max-min)) + min;
}


