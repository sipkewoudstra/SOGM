/*
  ==============================================================================

    LowShelfFilter.cpp
    Created: 2 Dec 2014 10:05:21pm
    Author:  sipke woudstra

  ==============================================================================
*/

#include "LowShelfFilter.h"

void LowShelfFilter::set_PositiveNegative(bool posneg){
    this->posneg = posneg;
}

void LowShelfFilter::calculateVariables(){
    K = tan(M_PI * (f0/Fs));
    V = pow(10, fabs(Gain) / 20.0);
    if (posneg == false) {
        norm = 1 / (1 + sqrt(2)/Q * K + K * K);
        this->a0 = (1 + sqrt(2*V)/Q * K + V * K * K) * norm;
        this->a1 = 2 * (V * K *K - 1) * norm;
        this->a2 = (1 - sqrt(2*V)/Q * K + V * K * K) * norm;
        this->b1 = 2 * (K * K - 1) * norm;
        this->b2 = (1 - sqrt(2)/Q * K + K * K) * norm;
    } else {
        norm = 1 / (1 + sqrt(2*V)/Q * K + V * K * K);
        this->a0 = (1 + sqrt(2)/Q * K + K * K) * norm;
        this->a1 = 2 * (K * K - 1) * norm;
        this->a2 = (1 - sqrt(2)/Q * K + K * K) * norm;
        this->b1 = 2 * (V * K * K - 1) * norm;
        this->b2 = (1 - sqrt(2*V)/Q * K + V * K * K) * norm;
    }
}