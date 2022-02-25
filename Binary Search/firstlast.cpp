#include<iostream>
using namespace std;

int firOccur(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while (start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
         mid = start + (end - start)/2;
    }
    return ans;
}

int LastOccur(int arr[], int size, int key){
    
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while (start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
         mid = start + (end - start)/2;
    }
    return ans;
}

int main(){

    int arr[] = {2, 4, 5, 6, 6, 6, 6, 7, 8};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int key  = 6;

    firOccur(arr, arr_size, 6);
    LastOccur(arr, arr_size, 6);

    cout << "The Fist Occurence of 6 is in INdex : " <<  firOccur(arr, arr_size, 6) << endl;
    cout << "The Last Occurence of 6 is in INdex : " <<  LastOccur(arr, arr_size, 6) << endl;
    return 0;
}