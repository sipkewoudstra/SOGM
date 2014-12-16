#include <iostream>

using namespace std;

void pointeroptellen(unsigned short* pointer){
    *pointer = *pointer + 10;
}

void variabeleoptellen(unsigned short variabele){
    variabele = variabele + 10;
}

int main()
{
    unsigned short year = 2013;
    unsigned short *yearpointer;
    cout << "Inhoud van de variabele year: ";
    cout << year << endl;
    yearpointer = &year;
    cout << "Inhoud van de pointer yearpointer: ";
    cout << *yearpointer << endl;
    cout << "Inhoud van waar de pointer yearpointer naar wijst: ";
    cout << &yearpointer << endl;
    *yearpointer = 1993;
    cout << "Inhoud van de variabele year: ";
    cout << *yearpointer << endl;
    cout << "Inhoud van de variabele year: ";
    cout << year << endl;
    
    pointeroptellen(yearpointer);
    
    cout << "Inhoud van de yearpointer nadat hij door de functie is gehaald: ";
    cout << *yearpointer << endl;
    
    variabeleoptellen(year);
    
    cout << "Inhoud van de variabele year nadat hij door de functie is gehaald: ";
    cout << year << endl;
    
} // main()