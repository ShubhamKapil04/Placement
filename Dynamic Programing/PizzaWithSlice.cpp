#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
//     int solveRec(int index, int endIndex, vector<int> &slices, int n){
        
//         //base case
//         if(n == 0 || index > endIndex){
//             return 0;
//         }
        
//         int take = slices[index] + solveRec(index + 2, endIndex, slices, n-1);
//         int notake = 0 + solveRec(index+1, endIndex, slices, n);
        
//         return max(take, notake);
        
//     }
    
//     int solve(int index, int endIndex, vector<int>& slices, int n ){
//     // base case I
//         if(n = 0 || index > endIndex){
//             return 0;
//         }
        
//         int take = slices[index] + solve(index+2, endIndex, slices, n-1);
//         int notTake = 0 + solve(index+1 , endIndex, slices, n);
        
//         return max(take, notTake);
//     }
    int solve(vector<int> &slices, int s, int e , int n){
        if(n==0 || s>e) return 0;

        int in = slices[s] + solve(slices,s+2,e,n-1);
        int ex = 0 + solve(slices,s+1,e,n);

        return max(in,ex);
    }
    
     int solveMem(vector<int> &slices, int s, int e , int n, vector<vector<int>> &dp){
        if(n==0 || s>e) return 0;
         
        if(dp[s][n] != -1) return dp[s][n];

        int in = slices[s] + solveMem(slices,s+2,e,n-1, dp);
        int ex = 0 + solveMem(slices,s+1,e,n, dp);

        return dp[s][n] = max(in,ex);
    }
    
    int maxSizeSlices(vector<int>& slices) {
//         int totalSlices = slices.size();

//         int op1 = solve(slices,0,slices.size()-2,totalSlices/3);
//         int op2 = solve(slices,1,slices.size()-1,totalSlices/3);
        
        
        int totalSlices = slices.size();
    
        vector<vector<int>> dp1(totalSlices, vector<int>(totalSlices, -1));
        int op1 = solveMem(slices,0,slices.size()-2,totalSlices/3, dp1);
        vector<vector<int>> dp2(totalSlices, vector<int>(totalSlices, -1));
        int op2 = solveMem(slices,1,slices.size()-1,totalSlices/3, dp2);

        return max(op1,op2);

//     int maxSizeSlices(vector<int>& slices) {
        
//         int k = slices.size();
        
//         int case1 = solveRec(0, k - 2, slices, k/3);
//         int case2 = solveRec(0, k - 1, slices, k/3);
        
//         return max(case1, case2);
        
    }
};


int main(){

    Solution ob;

    

}