#include<iostream>
using namespace std ;

void print(int arr[], int s, int e)
{
    for(int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;

}

bool binarySearch(int arr[], int s, int e, int key)
{

    print(arr, s, e);
    //Base case

    //Element is not there
    if(s>e)
    {
        return false;
    }

    int mid = s + (e - s)/2;
    cout << "Value of arr mid is " << arr[mid] << endl;
    //Element is there
    if(arr[mid] == key)
    {
        return true;
    }

    //Recursive relation
    if(arr[mid] > key)
    {
        return binarySearch(arr, s, mid - 1, key);
    }
    else{
       return  binarySearch(arr, mid + 1, e, key);
    }
}


int main()
{
    int arr [7] = {1, 5, 6, 45, 67, 87, 90};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key = 90;

    bool ans = binarySearch(arr, 0,  size - 1, key);

    if(ans)
    {
        cout << "Element is present " << endl;
    }
    else{
        cout << "Element is not present "  << endl;
    }

    return 0;
}