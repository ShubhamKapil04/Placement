#include<iostream>
using  namespace std;

int PeakElement(int arr[],  int size, int s, int e)
{
    // Base case
    if(s>e)
    {
        return false;
    }
    // Mid binary
    int mid = s + ( e - s)/2;

    // Recursive Relation 
    if(arr[mid] < arr[mid + 1] )
    {
        return PeakElement(arr, size, mid + 1, e);
    }
    else{
        return PeakElement(arr, size, s, mid - 1);
    }
}
int main()
{
    int arr [8] ={1, 2, 3, 4, 5, 6, 3, 1};
    int size = 8;

    cout << PeakElement(arr, size, 0, size - 1);

    return 0;
}