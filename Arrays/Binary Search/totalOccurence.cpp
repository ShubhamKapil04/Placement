#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){


    int start = 0;
    int end = size - 1;
    int ans = -1;

    int mid = start + (end - start)/ 2;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        if(arr[mid] > key){
            end = mid - 1;
        }

        else if(arr[mid] < key){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start<=end){
        
        if(arr[mid] == key) {

            ans = mid;
            start = mid + 1;
        }

        if(arr[mid] > key) {
            end = mid - 1;
        }

        else if (arr[mid] < key) {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){

    int arr[] = {1, 2, 2, 2, 2, 4, 4, 4, 5, 5, 6, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 2;

    int First = firstOccurence(arr, size, key);
    int Last = lastOccurence(arr, size, key);

    int totalOccuence = Last - First + 1;
    cout << totalOccuence;
    return 0;
}