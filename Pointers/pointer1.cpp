#include<iostream>
using namespace std;

int main()
{

    int arr[10] = {1, 6, 7};

    int index = 1;

    // This will print the adress of arr
    cout << "This will print the adress of arr --> " << arr << endl;

    // This & operator will give the adress of the Arr
    cout << "This will print the adress of arr --> " <<  &arr[0] << endl;

    // This will print th e value in the index of 0
    cout << "This will print the value at the index of 0 --> " << *arr << endl;

    // This will print the value of next index
    cout << *(arr+1) << endl;

    // This will increment the value of current index
    cout << *arr + 1 << endl;

    // This will increment the value of current index
    cout << (*arr) + 1 << endl;

    // This will print the value at the index 2
    cout << *(arr+2) << endl;

    // index shifting to next index
    arr[index] = *(arr+index) << endl;

    // Error will pop up
    index[arr] = *(index+arr);
    return 0;
    
}