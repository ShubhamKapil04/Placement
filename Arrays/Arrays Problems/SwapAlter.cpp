#include<iostream>
using namespace std;

void PrintArray(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void swapAlt(int arr[], int size){

    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int brr[5] = {56, 54, 23, 58, 45};
    
    swapAlt(arr, 8);
    swapAlt(brr, 5);

    PrintArray(arr, 8);
    PrintArray(b rr, 5);


    return 0;
}