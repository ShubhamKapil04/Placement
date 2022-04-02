#include<iostream>
using namespace std;

bool isShorted(int *arr, int size)
{
    // Base case

    if(size == 0 || size == 1)
    {
        return true;
    }

    //Shoreted nhi hai
    if(arr[0] > arr[1])
    {
        return false;
    }

    else{
        bool ans = isShorted(arr + 1, size - 1);
        return ans;
    }
}

int main()
{
    int arr[] = {1, 4, 6, 7, 9};
    int size = sizeof(arr)/ sizeof(arr[0]);

    bool ans = isShorted(arr, size);

    if(ans)
    {
        cout << " Array is shorted" << endl;
    }
    else{
        cout << " Array is  not shorted" << endl;
    }

    return 0;
}