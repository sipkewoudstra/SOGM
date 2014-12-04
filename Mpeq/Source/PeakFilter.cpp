/*
  ==============================================================================

    PeakFilter.cpp
    Created: 2 Dec 2014 10:05:45pm
    Author:  sipke woudstra

  ==============================================================================
*/

#include "PeakFilter.h"

void PeakFilter::set_PositiveNegative(bool posneg){
    this->posneg = posneg;
}

void PeakFilter::calculateVariables(){
    K = tan(M_PI * (f0/Fs));
    V = pow(10, fabs(Gain) / 20.0);
    if (posneg == false) {
        norm = 1 / (1 + 1/Q * K + K * K);
        this->a0 = (1 + V/Q * K + K * K) * norm;
        this->a1 = 2 * (K * K - 1) * norm;
        this->a2 = (1 - V/Q * K + K * K) * norm;
        this->b1 = a1;
        this->b2 = (1 - 1/Q * K + K * K) * norm;
    } else {
        norm = 1 / (1 + V/Q * K + K * K);
        this->a0 = (1 + 1/Q * K + K * K) * norm;
        this->a1 = 2 * (K * K - 1) * norm;
        this->a2 = (1 - 1/Q * K + K * K) * norm;
        this->b1 = a1;
        this->b2 = (1 - V/Q * K + K * K) * norm;
    }
}
