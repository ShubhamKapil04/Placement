#include<iostream>
using namespace std;

int PivotIndex(int arr[], int size) {
    
    int start = 0;
    int end = size - 1;
    int mid  = start + (end - start)/2;
    
    while(start<end){
        
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        
        else if (arr[mid] <= end){
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    
    return start;
}

int main(){
     int arr[] = {4, 7, 9, 16, 2};
     int size = sizeof(arr)/sizeof(arr[0]);
     
     PivotIndex(arr, size);
     cout << " The index of Pivot is : " << PivotIndex(arr, size) << endl;
     
     return 0;
}
