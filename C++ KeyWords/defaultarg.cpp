#include<iostream>
using namespace std;

void print(int arr[], int n, int start = 0)
{
    for(int i = start; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[5] = {1,4,7,8,9};
    int size = 5;

    // Without agrument we are not giving any start value here
    print(arr, size);
    cout << endl;

    //With argument where we are giving start value = 2;
    print(arr, size, 2);


    return 0;
}