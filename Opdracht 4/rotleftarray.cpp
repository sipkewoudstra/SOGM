#include <iostream>

using namespace std;

int array1[] = {4,10,3,20,40,21};
int array2[] = {3,0,234,24,3432,12,421,95212};
int array3[] = {2,134,6,125};

void print_array(int a[], int length)
{
    for (int index=0; index < length; index++)
    {
        cout << index << ", " << a[index] << endl;
    }
    
    cout << endl;
}

int roteerlinks(int a[], int length)
{
    int temp = a[0];
    
    for (int index=0; index < length; index++)
    {
        a[index] = a[index+1];
    }
    
    a[length-1] = temp;
    
    print_array(a,length);
    return 0;
}

int main()
{
    roteerlinks(array1,6);
    roteerlinks(array2,8);
    roteerlinks(array3,4);
}

