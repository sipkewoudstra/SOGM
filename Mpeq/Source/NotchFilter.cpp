/*
  ==============================================================================

    NotchFilter.cpp
    Created: 2 Dec 2014 10:05:50pm
    Author:  sipke woudstra

  ==============================================================================
*/

#include "NotchFilter.h"

void NotchFilter::calculateVariables(){
    K = tan(M_PI * (f0/Fs));
    norm = 1 / (1 + K / Q + K * K);
    this->a0 = (1 + K * K) *  norm;
    this->a1 = 2 * (K * K - 1) * norm;
    this->a2 = a0;
    this->b1 = a1;
    this->b2 = (1 - K / Q + K * K) * norm;
}
