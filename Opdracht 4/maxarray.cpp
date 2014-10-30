#include <iostream>

using namespace std;

const int elements = 5;
int array1[elements] = {1,2,3,4,5};
int array2[elements] = {6,7,8,9,10};
int array3[elements] = {10,20,30,40,50};


void arrayoptelling(int a[], int el){
	int optelling = 0;
	for(int i = 0; i < el; i++){
		optelling = optelling + a[i];
	}
	cout << optelling << endl;
}

int main(){
	arrayoptelling(array1, elements);
	arrayoptelling(array2, elements);
	arrayoptelling(array3, elements);
	return 0;
}