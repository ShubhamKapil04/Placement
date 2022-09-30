#include<iostream>
#include<vector>
using namespace std;

int main(){
//     int solveMemo(vector<int> &nums, int n, vector<int> &dp){
        
//         if(n < 0) return 0;
        
//         if(n == 0) return nums[0];
        
//         if(dp[n] != -1) return dp[n];
        
//         int inc = solveMemo(nums, n - 2, dp) + nums[n];
//         int excl = solveMemo(nums, n - 1, dp) + 0;
        
//         dp[n] = max(inc, excl);
        
//         return dp[n];
//     }
    
//     int solveRec(vector<int> &nums, int n){
        
//         if(n < 0) return 0;
        
//         if(n == 0) return nums[0];
        
       
//         int inc = solveRec(nums, n - 2) + nums[n];
//         int excl = solveRec(nums, n - 1) + 0;
    
        
//         return max(inc, excl);
//     }
//     int solveTab(vector<int> &nums){
        
//         int n = nums.size();
        
//         vector<int> dp(n, 0);
        
//         dp[0] = nums[0];
        
//         for(int i = 1; i < n; i++){
//             int inclu = dp[n - 2]  +  nums[i];
//             int excl = dp[n-1] + 0;
            
//             dp[i] = max(inclu, excl);
//         }
        
//         return dp[n-1];
//     }
    
    
//         // vector<int> dp(n, -1);
        
//         // int ans = solveMemo(nums, n-1, dp);
//         int ans = solveRec(nums, n-1);
//           return solveTab(nums);
        // int prev2 = 0, prev = nums[0], cur = 0;
        // for(auto i : nums) {
        //     cur = max(prev, i + prev2);
        //     prev2 = prev;
        //     prev = cur;
        // }
        // return cur;

        vector<int>  nums = {2,7,9,3,1};
        
        int prev2 = 0;
        int prev1 = nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            
            int incl = prev2 + nums[i];
            int exlu = prev1 + 0;
            
            int ans = max(incl, exlu);
            prev2 = prev1;
            prev1 = ans;
        }
        cout << prev1 << endl;        
        return prev1;
}