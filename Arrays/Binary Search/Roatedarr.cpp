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
        
        else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    
    return start;
}

int Binarysearch(int arr[], int s, int e, int key){
       int start = s;
       int end   = e;
       int mid = start + (end - start)/2;
    
    while(start <= end) {
        if(arr[mid] == key){
            return mid;
        }
        
        if(arr[mid] > key){
            end = mid - 1;
        }
        
        else {
            start = mid + 1;
        }
        
        mid = start + (end - start)/2;
    }
    
    return -1;
}

int main()
{
    int arr[] = { 12, 15, 18, 2, 4 };
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 2;
    int Pivot = PivotIndex(arr, size);
     
     if(arr[Pivot] <= key && key <= arr[size-1]){
      cout << Binarysearch(arr, Pivot, size - 1, key);
     }
     else{
       cout << Binarysearch(arr, 0, Pivot - 1, key);
     }
     
   return 0;
}

