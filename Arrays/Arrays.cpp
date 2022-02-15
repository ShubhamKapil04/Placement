#include<iostream>
using namespace std;

void printArray(int arr[], int size){
         
         cout << "Printing the Arrays : " << endl;
         // Printing the Arrays

         for (int i = 0; i < size; i++)
         {
             cout << arr[i] << " "; 
         }

         //Printing Done
         cout << endl << "Printing Done  " << endl;
         

         

}

int main(){

    // // Declare

    // int num[15];

    // //Accessing an arrays
    // cout << "Value at Zero : " << num[0] << endl;

    // // cout << "Value at Zero : " << num[20] << endl;


    // int num1[3] = {3, 4, 11};

    // // Accesing elemnt
    // cout << endl << "Value of 2nd index : " << num1[2] << endl;

    // // Array in

    int num2[10] ={2, 7};

    int n = 10;

    printArray(num2, 10);

    // cout << "Print the Array " << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << num2[i] << " ";
    // }

    // cout << endl;
    
    // // initilizing with 0

    
    int num3[15] ={0};

    int m = 15;

    printArray(num3, 15);

    // cout << "Print the Array " << endl;

    // for (int i = 0; i < m; i++)
    // {
    //     cout << num3[i] << " ";
    // }

    // cout << endl;


    // // 1 not possible with below line
    


    // cout << endl << "Everything is fine" << endl;


    char ch [5] = {'a', 'c', 'd', 'f', 'h'};

    cout << ch [4] << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] <<" ";
    }

    double firstdoublr[3];
    float  firstfloat[10];
    bool firstbool[5];


    cout << endl << "Every this is done ";
    

    return 0;
}