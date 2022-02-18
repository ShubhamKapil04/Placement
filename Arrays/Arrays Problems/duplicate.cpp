#include<iostream>

using namespace std;

int Dupli(int arr[], int size){

    int ans = 0;

    // XOR ing the all array elements
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
     
     // XOR (1, n-1)
    for (int i = 1; i < size; i++)
    {
        ans = ans^i;
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

    Dupli(arr, n);

    cout << Dupli(arr, n);
    
    return 0;
}