#include <iostream>

using namespace std;

const int elements = 5;
int array1[elements] = {1,2,3,4,5};
int array2[elements] = {6,7,8,9,10};
int array3[elements] = {10,20,30,40,50};


void arraymaxint(int a[], int el){
	int maxint = 0;
	for(int i = 0; i < el; i++){
		if(a[i] > maxint){
			maxint = a[i];
		}
	}
	cout << maxint << endl;
}

int main(){
	arraymaxint(array1, elements);
	arraymaxint(array2, elements);
	arraymaxint(array3, elements);
	return 0;
}
