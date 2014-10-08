#include <iostream>

using namespace std;

int optellen(int getal1, int getal2){
	return getal1+getal2
}

int main(){
	int getal1;
	int getal2;
	cout << "Getal 1 ";
	cin >> getal1;
	cout << "Getal 2 ";
	cin >> getal2;
	int uitslag = optellen(getal1, getal2);
	cout << uitslag << endl;
}