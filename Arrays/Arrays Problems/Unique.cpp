#include<iostream>
using namespace std;

int Unique(int arr[], int size){

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Unique(arr, n);

    cout << Unique(arr, n);
    
    return 0;
}