#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int>& arr, int size, int i){

    // largest
    int largest = i;
    //find the left and right chilld
    int l = 2*i;

    //right
    int r = 2*i+1;

    if(l < size && arr[l] > arr[largest]){
        largest = l;
    }
    if(r < size && arr[r] > arr[largest]){
        largest = r;
    }

    if( largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }

}


int main(){

    vector<int> arr = {10, 20, 25, 12, 40, 15, 18};
    int size = arr.size();

    for(int i = size/2; i >= 0; i--){
        heapify(arr, size, i);
    }
    
    cout << "Printing the heap --> " << " ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
 
}