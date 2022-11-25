
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
#include<unordered_map>
class Solution{   
public:

    //   int SolveRec(int index, int diff, vector<int>& A, unordered_map<int, int> dp[]){

    //     //base case
    //     if(index < 0) 
    //         return 0;
    //     if(dp[index].count(diff)) 
    //         return dp[index][diff];
        
    //     int ans = 0;

    //     for(int j = index-1; j >= 0; j--){
    //         //logic
    //         if(A[index]-A[j] == diff){
    //             ans = max(ans, 1 + SolveRec(j, diff, A, dp));
    //         }
    //     }
    //     return dp[index][diff] = ans;
    // }

    int lengthOfLongestAP(vector<int> &nums, int n) {

        sort(nums.begin(), nums.end());
        
        
        unordered_map<int, int> dp[n + 1];
        
        if(nums.size() <= 2) return nums.size(); 
        
        
        int ans = 0;
        // Tabulation
        for(int i = 1; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                int diff = nums[i] - nums[j];
                
                int cnt = 1;
                
                // checking if ans Already Presents
                if(dp[j].count(diff))
                    cnt = dp[j][diff];
                
                dp[i][diff] = 1 + cnt;
                ans = max(ans, dp[i][diff]);
            }
        }
        
        return ans;

    }
};

//{ Driver Code Starts.
int main() {
    // int t;
    // cin >> t;
    // while (t--) {
        // int n;
        // cin >> n;
        vector<int> A = {9,4,7,2,10};
        // for (int i = 0; i < n; i++) {
        //     cin >> A[i];
        // }

        int n = A.size();
        Solution ob;
        auto ans = ob.lengthOfLongestAP(A, n);
        cout << ans << "\n";
    // }
    return 0;
}
// } Driver Code Ends