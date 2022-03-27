#include<iostream>
using namespace std;

int main()
{
    // Taking row input
    int row;
    cin >> row;

    //Taking col input
    int col;
    cin >> col;

    // Createing 2D array
    int** arr = new int*[row];
    for(int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }


    //Taking Input in 2D array
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    //Taking output

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    /* Now we created the heap memory 
    So now we have to release the memory menually
    */

   // Releasing the Memory
   for(int i = 0; i < row; i++)
   {
    // releasing col value
    delete[] arr[i];
   }

   delete [] arr;

    //how to create a 2D array dynamically
    // input/output
    // memory free kese karni hai

    // So memory took to make this 2d array is 
    // always grater then to stack memory because there
    // we are not creating any other variable then integer 
    // or string but here we are making pointer too so it will
    // impaced to the program too
   return 0;
}