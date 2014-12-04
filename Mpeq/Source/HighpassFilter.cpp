/*
  ==============================================================================

    HighpassFilter.cpp
    Created: 2 Dec 2014 10:04:55pm
    Author:  sipke woudstra

  ==============================================================================
*/

#include "HighpassFilter.h"

void HighpassFilter::calculateVariables(){
    K = tan(M_PI * (f0/Fs));
    norm = 1 / (1 + K/Q + K * K);
    this->a0 = 1 * norm;
    this->a1 = -2 * a0;
    this->a2 = a0;
    this->b1 = 2 * (K * K - 1) * norm;
    this->b2 = (1 - K / Q + K * K) * norm;
}
