#include<iostream>
#include<vector>

using namespace std;

// int f(int n, vector<int> &dp){

//     //base case
//     if(n == 1 || n == 0){
//         return n;
//     }
//     dp[0] = 0;
//     dp[1] = 1;

//     if(dp[n] != -1){
//         return dp[n];
//     }

//     dp[n] = f(n-1, dp) + f(n-2, dp);
    
//     return dp[n];
// }

int main(){

    //IBH
    //base case
    int n;
    cin >> n;
    vector<int> dp(n+1);
    // for(int i = 0; i < dp.size(); i++){
    //     dp[i] = -1;
    // }
    // int ans = f(n, dp);
    dp[0] = 0;
    dp[1] = 1;
    
   

   for(int i = 2; i <=n ; i++){

    dp[i] = dp[i-1] + dp[i-2];

   }
   cout << dp[n] << endl;

    // cout << ans << endl;

    return 0;

}
// TC --> O(n);
// SC --> O(n) + O(n)