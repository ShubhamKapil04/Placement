#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

// class Solution{
    // public:
    void solve(stack< int > &arr, int count, int n){
    //Base case
    if(count == n/2){
        arr.pop();
        return;
    }
    int num = arr.top();
    arr.pop();

    //Recursive call
    solve(arr, count+1, n);
    arr.push(num);
    }
// };

int main()
{   int size ;
    cin>>size;
    int arr1[size] ={2, 3, 5, 4, 7};
    // int size = sizeof(arr1)/sizeof(arr1[0]);
    stack< int> myStack;

    for(int  i = 0; i < size; i++){
        // int x;
        // cin >> x;
        myStack.push(arr1[i]);
    }

    int count = 0;
   
    // Solution ob;
    solve(myStack, count, myStack.size());
    while(!myStack.empty()){
        cout << myStack.top()<< " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}