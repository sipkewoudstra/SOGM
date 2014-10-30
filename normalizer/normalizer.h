#include <string>
#include <stdio.h>
#include <sndfile.h>
#include <iostream>

using namespace std;

class normalizer{
private:
	int frames, samplerate, channels;
	string path;
	string outputPath;
	unsigned short buffersize = 1024;
	SNDFILE* input;
	SNDFILE* output;
	SF_INFO inputInfo;
	float hardestPeak = 0;
	float peakLevel = 1;
	float gainFactor;

public:
	void setPeakLevel(float _peakLevel);
	void setPath(string _path);
	void setOutputPath(string _path);
	void read();
	void printInfo();
	void getHardestPeak();
	void normalize();
};
