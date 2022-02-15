#include<iostream>
using namespace std;

void update(int arr[], int n){

    cout << "Inside the function " << endl;

    // Update Array

    arr[0] = 120;

    //Printing the Array
     
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " " ;
    }
     cout << endl;

    cout << " Going Back to the main Funtion " << endl;
    
}

int main(){

    int arr[3] {1, 2, 3};
    
    update(arr, 3);

    //Printing The Array 
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
    
    return 0;
}