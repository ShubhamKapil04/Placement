#include<iostream>
using namespace std;

void ShortedArray(int *arr, int n)
{
    //Base case
    if(n == 0 || n == 1 )
    {
        return ;
    }

    // One case solve 
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    //Recursive Relation

     ShortedArray(arr, n-1);
  
}
int main()
{
    int arr[6] = {1, 4, 5, 2, 1, 0};
    //int n = sizeof(arr)/sizeof(arr[0]);


    ShortedArray(arr, 6);

    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}