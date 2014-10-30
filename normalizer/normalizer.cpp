#include "normalizer.h"

int main()
{
	normalizer normalize;
	normalize.setPath("/Users/sipkewoudstra/Desktop/Crap/Cowbell Little Sister.wav");
	normalize.setOutputPath("/Users/sipkewoudstra/Desktop/Crap/Cowbell Little Sister Normalized.wav");
	normalize.setPeakLevel(1);	
	normalize.read();
	normalize.printInfo();
	normalize.getHardestPeak();
	normalize.normalize();

	return 0;
}