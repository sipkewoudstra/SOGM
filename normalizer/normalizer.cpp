#include <sndfile.h>
#include <stdio.h>
#include <libgen.h>
#include <string>
#include <math.h>
#include <iostream>

using namespace std;
//Arguments: Input Path, Output Filename, OutputLevel
enum {ARG_NAME = 0, PATH, OUT_NAME, MAXPEAKLEVEL, NUM_ARGS};

SF_INFO sfInfo;
SNDFILE* inputFile;
SNDFILE* outputFile;

char* pathInputFile;
char* pathOutputFile;
char* inputFileName;
char* outputFileName;
char* outputExtension;

float destinationPeakLevel;
float peakLevel = 0;
float ratio;

int channels;
int frames;
int samplerate;
int bufferSize;
int samplesBuffer;

void maxPeak(float inputbuffer[]){
	for(int i = 0; i < frames; i+=bufferSize){
		sf_readf_float(inputFile, inputbuffer, bufferSize);

		for (int j = 0; j < samplesBuffer; j++){
			if(fabs(inputbuffer[j]) > peakLevel){
				peakLevel = fabs(inputbuffer[j]);
			}
		}
	}
}
int setupPathAndFileName(){
	pathOutputFile = dirname(pathInputFile);
	strcat(pathOutputFile, "/");
	strcat(pathOutputFile, outputFileName);
	inputFileName = basename(pathInputFile);
	if (strcmp (inputFileName, outputFileName) == 0){
		cout << endl << "Input en Output file kunnen niet dezelfde naam hebben";
		cout << endl;
		return -1;
	}
	return 0;
}
int checkArguments(int argc){
	if (argc != NUM_ARGS) {
		cout << endl << "Ey, geef eemn genoeg argumenten op of wa:" << endl;
		cout << "Input Path, Output Filename, OutputLevel" << endl;
		return -1;
	}
	return 0;
}
int filecheck(SNDFILE* _inputFile){
	if(_inputFile == NULL){
		cout << endl << "Er is iets verkeerd gegaan tijdens het inladen van je audio file";
		cout << endl;
		return -1;
	}
	return 0;
}

int setPeakLevel(char** argv){
	if (atof(argv[MAXPEAKLEVEL]) < 0 || atof(argv[MAXPEAKLEVEL]) > 1){
		cout << endl << "Output Level moet tussen de 0 en 1 zitten. Ok, doei.";
        cout << endl;
		return -1;
	}
	destinationPeakLevel = atof(argv[MAXPEAKLEVEL]);
	return 0;
}

void fileInfo(){
	channels = sfInfo.channels;
	frames = sfInfo.frames;
	samplerate = sfInfo.samplerate;
	bufferSize = 2048;
}

char* getExt(char* file){
    for(int i = strlen(file)-1; i >= 0; i-- ) if( file[i] == '.' ) return file+i;
    return file;
}

void writeFile(float inputbuffer[], float outputbuffer[]){
	for(int i = 0; i < frames; i+=bufferSize){
		sf_readf_float(inputFile, inputbuffer, bufferSize);

		for (int j = 0; j < samplesBuffer; j++){
			outputbuffer[j] = inputbuffer[j]*ratio;
		}

		sf_writef_float(outputFile, outputbuffer, bufferSize);
	}
}

void giveInformation(){
	cout << endl << "BOOM DONE!" << endl;
	cout << "Output file naam: " << outputFileName << endl;
	cout << "Lengte in seconden: " << frames/samplerate << endl;
	cout << "Kanalen: " << channels << endl;
	cout << "Samplerate: " << samplerate << endl;
}
int main(int argc, char** argv){
	//checkie checkie argumenten
	if (checkArguments(argc) ==  -1){
		return -1;
	}

	pathInputFile = argv[PATH];
	outputFileName = argv[OUT_NAME];
	
	if (setPeakLevel(argv) == -1){
		return -1;
	}

	if (setupPathAndFileName() == -1){
		return -1;
	}

	inputFile = sf_open(pathInputFile, SFM_READ, &sfInfo);

    fileInfo();
    outputExtension = getExt(pathInputFile);
    strcat(pathOutputFile, outputExtension);
    strcat(outputFileName, outputExtension);

	outputFile = sf_open(pathOutputFile, SFM_WRITE, &sfInfo);

	if(filecheck(inputFile) == -1){
		return -1;
	}


	samplesBuffer = bufferSize*channels;
	float inputbuffer[samplesBuffer];
	float outputbuffer[samplesBuffer];

	maxPeak(inputbuffer);

	ratio = destinationPeakLevel/peakLevel;

	sf_seek(inputFile, 0, SEEK_SET);

	writeFile(inputbuffer, outputbuffer);

	giveInformation();

	sf_close(inputFile);
    sf_close(outputFile);

	return 0;
}

