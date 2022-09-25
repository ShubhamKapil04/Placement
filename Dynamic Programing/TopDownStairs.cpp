#include<iostream>
#include<vector>
using namespace std;

int solve(int n, vector<int>  &dp, int i){

    if(i == n) return 1;
    if(i > n) return 0;

    if(dp[i] != -1){
        return dp[i];
    }

    dp[n] = solve(n, dp, i+1) + solve(n, dp, i+2);

    return dp[n];

}


int main(){

    int n;
    cin >> n;

    vector<int> dp(n+1, -1);

    int ans = solve(n, dp, 0);

    cout << ans << endl;
    return 0;
}

// Time Complexity --> O(n);
// Space Complexity --> O(n);