//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
#include<unordered_map>
class Solution{   
public:

      int SolveRec(int index, int diff, vector<int>& A, unordered_map<int, int> dp[]){

        //base case
        if(index < 0) 
            return 0;
        if(dp[index].count(diff)) 
            return dp[index][diff];
        
        int ans = 0;

        for(int j = index-1; j >= 0; j--){
            //logic
            if(A[index]-A[j] == diff){
                ans = max(ans, 1 + SolveRec(j, diff, A, dp));
            }
        }
        return dp[index][diff] = ans;
    }

    int lengthOfLongestAP(vector<int> &A, int n) {

        sort(A.begin(), A.end());
        if(n <= 2)
            return n;
            
        unordered_map<int, int> dp[n+1];

        int ans = 0;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                ans = max(ans, 2 + SolveRec(i, A[j] - A[i], A, dp));
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
        vector<int> A = {0,8,45,88,48,68,28,55,17,24};
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