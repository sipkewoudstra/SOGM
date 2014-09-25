#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(int argc, char** argv){
	ofstream sinus;
	sinus.open ("sinus.txt");
	for(int i=0;i < 100; i++){
		sinus << sin(i * 0.02 * M_PI) << endl;
		}
	sinus.close();

	return 0;
}
