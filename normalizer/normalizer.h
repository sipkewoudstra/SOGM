#include <string>
#include <stdio.h>
#include <sndfile.h>

using namespace std;

class normalizer{
private:
	string path;
	unsigned short buffersize = 1024;
	SNDFILE* input;
	SNDFILE* output;
	SF_INFO inputInfo;

public:
	void read();
	void gethardestpeak();
	void normalize();
	void write();
};
