#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int solveTab(int a[], int n){

        vector<vector< int >> dp(n+1, vector<int> (n+1, 0));

        //first iteration for the curr

        for(int curr = n-1; curr >= 0; curr--){
            for(int prev = curr-1; prev >= -1; prev--){

                int take = 0;
                if(prev == -1 || a[curr] > a[prev])
                    take = 1 + dp[curr+1][curr+1];

                int notake = 0 + dp[curr+1][prev+1];

                dp[curr][prev+1] = max(take, notake);
            }
        }

        return dp[0][0];
    }

    int longestSubseq(int a[], int n){
        
        return solveTab(a, n);
    }
};

int main(){

    int n = 16;
    int a[n] = {0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};

    Solution ob;

    cout << ob.longestSubseq(a, n) << endl;

}