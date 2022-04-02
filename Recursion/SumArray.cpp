#include<iostream>
using namespace std;

int getSum(int *arr, int size)
{
    //Base Case

    if(size == 0)
    {
        return 0;
    }

    if(size == 1)
    {
        return arr[0];
    }

    // Recursive Relation
    int remainingPart = getSum(arr+1, size - 1);
    int sum = arr[0] + remainingPart;

    return sum;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;


    int sum = getSum(arr, size);
    cout << sum;

    return 0;
}