#include<iostream>
using namespace std;

int Addarray(int arr[], int size){

     int ans = 0;
     for (int i = 0; i < size; i++)
     {
         ans = ans + arr[i];
     }
     
     return ans;
}

int main(){

    int n;
    cin >> n;

    int arr [n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    
    Addarray(arr, n);

    cout << "Answer is : "<<Addarray(arr, n);
    
    return 0;  
}