#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int solveMem(int n, int a[], int curr, int prev, vector<vector<int>> &dp){

        if(curr == n) 
            return 0;

        if(dp[curr][prev+1] != -1) 
            return dp[curr][prev+1];

        int take = 0;
        if(prev == -1 || a[curr] > a[prev]){
            take = 1 + solveMem(n, a, curr + 1, curr, dp);
        }
        
        int  notake = 0 + solveMem(n, a, curr + 1, prev, dp);
        
        return  dp[curr][prev+1] = max(take, notake);
    }

    int longestSub(int n, int a[]){
        vector<vector<int>> dp(n, vector<int>(n+1, -1));

        return solveMem(n, a, 0, -1, dp);
    }
};

int main(){
    int n = 6;

    int a[n] = {5, 8, 3, 7, 9, 1};
    //output --> 3

    Solution ob;

    cout << ob.longestSub(n, a) << endl;
}