#include<iostream>
using namespace std;

void ShortArray(int *arr, int n)
{
    //base Case
    if( n == 0 || n == 1)
    {
        return ;
    }

   
    //First case Solove Kerlo
    for(int i = 0; i < n - 1; i++)
    {
        int Min_index = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[Min_index])
            {
                Min_index = j;
            }
        }
        swap(arr[Min_index], arr[i]);
    }

    //Recursive Relation
    ShortArray(arr, n - 1);
}

int main()
{
    int arr[] = {2, 6, 7, 76, 32, 12 , 11, 10, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    ShortArray(arr, size);

    for(int i = 0; i < size - 1; i++)
    {
    cout << arr[i] << endl;
    }

    return 0;
}