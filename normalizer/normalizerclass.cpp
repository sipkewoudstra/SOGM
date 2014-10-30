#include "normalizer.h"

void normalizer::setPeakLevel(float _peakLevel)
{
	peakLevel = _peakLevel;
}

void normalizer::setPath(string _path)
{
	path = _path;
}
void normalizer::setOutputPath(string _path)
{
	outputPath = _path;
}

void normalizer::read()
{
	input = sf_open(path.c_str(), SFM_READ, &inputInfo);
	output = sf_open(outputPath.c_str(), SFM_WRITE, &inputInfo);
}
void normalizer::printInfo()
{
	frames = inputInfo.frames;
	samplerate = inputInfo.samplerate;
	channels = inputInfo.channels;
	cout << "File " << path << " has " << frames << " frames, a samplerate of " << samplerate << " and " << channels << " channels." << endl;
}

void normalizer::getHardestPeak()
{
	int place = 0;
	float buffer[buffersize*channels];
	place = sf_readf_float(input, buffer, buffersize);
	while(place != 0)
	{
	for(int i = 0; i < place; i++)
		{
			if(buffer[i] > hardestPeak)
			{
				hardestPeak = buffer[i];
			}
		}
		place = sf_readf_float(input, buffer, buffersize);
	}
	cout << "The hardest peak is: " << hardestPeak << endl;
}
void normalizer::normalize()
{
	gainFactor = peakLevel/hardestPeak;
	float tempBuffer[buffersize*channels];
	float gainedBuffer[buffersize*channels];
	float inplace, out;
	inplace = sf_readf_float(input, tempBuffer, buffersize);
	while(inplace != 0)
	{
		for(int i = 0; i < inplace; i++)
		{
			gainedBuffer[i] = tempBuffer[i]*gainFactor;
		}
		out = sf_writef_float(output, gainedBuffer, buffersize);
		inplace = sf_readf_float(input, tempBuffer, buffersize);
	}
	out = sf_writef_float(output, gainedBuffer, buffersize);
}
