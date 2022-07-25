#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i){

    int largest = i;

    // Left child
    int l = 2*i+1;
    // Right child
    int r = 2*i+2;

    //  If left child is largest than root
    if(l < n && arr[largest] < arr[l]){
        largest = l;
    }

    // if right child is largest than largest
    // so far
    if(r < n && arr[largest] < arr[r]){
        largest = r;
    }

    // if largest is not root
    if(largest != i){
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n){

    // build heap from array

    for(int i = n/2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }

    for(int i = n-1 ; i > 0; i--){

        // Move current root to end
        swap(arr[0], arr[i]);

        // cal max heapify
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){

    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Sorted Array is " << endl;

    printArray(arr, n);

}