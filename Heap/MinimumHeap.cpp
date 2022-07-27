#include<iostream>
using namespace std;

void heapify(int arr[], int size, int i){

    int smallest = i;

    int left = 2*i+1;
    int right = 2*i+2;


    if(left < size && arr[smallest] > arr[left]){
        smallest = left;
    }

    if(right < size && arr[smallest] > arr[right]){
        smallest = right;
    }

    if(smallest != i){
        swap(arr[smallest], arr[i]);
        heapify(arr, size, smallest);
    }
}

int main(){

    int arr[] = {12, 11, 13, 5, 6, 7};

    int size = sizeof(arr)/sizeof(arr[0]);

    // Crate heap
    for(int i = size/2; i >= 0; i--){
        heapify(arr, size, i);
    }

    cout << "Printing the heap --> " << " ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}