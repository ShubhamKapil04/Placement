#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // Takig input 

    // creating heap storage array
    int *array = new int[n];

    //taking input in arrray
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Output array
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    // deleting Heap storage
    delete [] array;

    return 0;
}