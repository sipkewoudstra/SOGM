#include <iostream>

using namespace std;

const int elements = 5;
int array[elements] = {1,2,3,4,5};

void print_array(int a[], int elements){
	for(int i = 0; i < elements; i++){
		cout << a[i] << endl;
	}
}

int main(){
	print_array(array, elements);
	return 0;
}