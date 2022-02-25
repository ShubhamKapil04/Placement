#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    // Get the middle value of array

    int mid = start + (end - start) / 2;

    while(start <= end){

        if (arr[mid] == key)
        {
            return mid;
        }
        // Go to right part

        if (key > arr[mid])
        {
            start = mid + 1; 
        }

        // Go left part

        else{
            end = mid - 1;
        }
        mid = start + (end -start) / 2;
    }
    return -1;
}

int main(){

    int arr1[5] = {3, 5, 7, 26, 89};
    int arr2[6] = {13, 15, 19, 24, 50, 60};

    int oddindex = BinarySearch(arr1, 5, 26);
    int evenindex= BinarySearch(arr2, 6, 50);

    cout << " The index of 26 is : " << oddindex << endl;
    cout << " The index of 26 is : b" << evenindex << endl;
     
     return 0;
}