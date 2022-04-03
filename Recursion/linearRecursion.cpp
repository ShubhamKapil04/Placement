#include<iostream>
using namespace std;

void print(int arr[], int size)
{
    cout << "Size of array is --> " << size << endl;

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


bool linearSearch(int *arr, int size, int key)
{

    print(arr,size);
    //Base call

    if(size == 0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    // Recursive Realtion

    else{
        bool remainingPart = linearSearch(arr+1, size - 1, key);

        return remainingPart;
    }
}
int main()
{
    int arr [] = {3, 5, 7, 9, 2};
    int size = 5;
    int key = 2;

    bool ans  = linearSearch(arr, size, key);

    if (ans )
    {
        cout << "element is present";
    }
    else{
        cout << "element is not present";
    }
    return 0;
}