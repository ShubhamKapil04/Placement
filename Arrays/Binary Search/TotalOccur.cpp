#include<iostream>
using namespace std;

int BinarySearch(int arr[],  int key){

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - size)/2;

    if (start > end)
    {
        return -1;
    }

    if (arr[mid] > key)
    {
        return BinarySearch(arr, start, mid - 1, key)
    }
    
    if (arr[mid] < key)
    {
        return BinarySearch(arr, end, mid + 1, key);
    }
}

int Occurence(int arr, int size, int key){

    int x = BinarySearch(arr, key);
    int start = 0;
    int end = n-1;

    if( x == -1){
        return 0;
    }
    int count = 1;

    // Count elemnt on left side
    int left = x - 1;
    while (left == 0 && arr[left] == key)
    {
        left--, count++;
    }

    // Count elemnt on right side
    int right = x + 1;
    while (right == n && arr[right] == key)
    {
        right++, count++;
    }
    return count;
}

int main(){

    int arr[] = {1, 2, 3, 3, 4, 4, 4, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

   cout << Occurence(arr, size, 4);
    return 0;
}