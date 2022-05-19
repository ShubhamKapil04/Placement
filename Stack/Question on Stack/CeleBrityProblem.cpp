#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution{
    private:
    bool knows(vector< vector< int>> &arr, int a, int b, int n){
        if(arr[a][b] == 1){
            return true;
        }
        else{
            return false;
        }
    }
    public:

    int celebrity(vector< vector< int>> &arr, int n){
        stack<int>s;
        //Push every element in Stack
        for(int i = 0; i < n; i++){
            s.push(i);
        }
        //step 2
        while(s.size() > 1){
            int a = s.top();
            s.pop();

            int b = s.top();
            s.pop();

            if(knows(arr, a , b, n)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }

        int candidate = s.top();
        //step 3 single element in satck is potentional 
        //member to be celeb so verfity it

        bool rowCheck = false;
        int ZeroCount = 0;
        for(int i = 0; i < n; i++){
            if(arr[candidate][i] == 0){
                ZeroCount++;
            }
        }

        //All Zeros
        if(ZeroCount == n){
            rowCheck = true;
        }

        //Col check

        bool ColCheck = false;

        int OneCount = 0;
        for(int i  = 0; i < n; i++){
            if(arr[i][candidate] == 1 ){
                OneCount++;
            }
        }

        //All One
        if(OneCount == n-1){
            ColCheck = true;
        }

        if(rowCheck == true && ColCheck == true){
            return candidate;
        }
        else{
            return -1;
        }

    }



};


// int main()
// {
//     int size;
//     cin >> size;
//     vector< vector < int >>ideol[size][size];
//     size = ideol.size();

//     for(int i = 0; i < size;  i++){

//         for(int j = 0; j < size; i++){
//             cin >> ideol[i][j];
//         }
//     }
//     Solution ob;
//     cout<<ob.celebrity(ideol,size)<<endl;

// }


// { Driver Code Starts
//Initial template for C++

// #include<bits/stdc++.h>
// using namespace std;

//  // } Driver Code Ends
// //User function template for C++

// class Solution 
// {
//     private:
//     bool know(vector<vector<int> >& M, int a, int b, int n){
//         if(M[a][b] == 1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//         //Create a new Stack
//         stack < int > s;
        
//         //Step 1 push all the elemen t in the Stack
//         for(int i = 0; i < n; i++){
//             s.push(i);
//         }
        
//         while(s.size() > 1){
//             int a = s.top();
//             s.pop();
            
//             int b = s.top();
//             s.pop();
            
//             if(know(M,a, b, n)){
//                 s.push(b);
//             }
//             else{
//                 s.push(a);
//             }
//         }
//         int candidate = s.top();
//         //Step 3 The potenstion candidate is on th top of stack
//         // verify it
        
//         bool rowCheck = false;
//         int ZeroCount = 0;
        
//         for(int i = 0; i < n; i++){
//             if(M[candidate][i] == 0){
//                 ZeroCount++;
//             }
//         }
        
//         if(ZeroCount == n){
//             rowCheck = true;
//         }
        
//         bool ColCheck = false;
//         int OneCount = 0;
        
//         for(int i = 0 ; i < n; i++){
//             if(M[i][candidate] == 1){
//                 OneCount++;
//             }
//         }
        
//         if(OneCount == n-1){
//             ColCheck = true;
//         }
        
//         if(rowCheck == true && ColCheck == true){
//             return candidate;
//         }
//         else{
//             return -1;
//         }
//     }
// };

// // { Driver Code Starts.

int main()
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    // }
}
  // } Driver Code Ends
