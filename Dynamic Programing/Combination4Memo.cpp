#include<bits/stdc++.h>

using namespace std;

int solveMemo(vector<int> &nums, int tar, vector<int> &dp){
    if(tar ==  0) return 1;
    if(tar < 0) return 0;


    if(dp[tar] != -1)return dp[tar];

    int solve = 0;

    for(int i = 0; i < nums.size(); i++){
        solve += solveMemo(nums, tar - nums[i], dp);
    }

    dp[tar] = solve;

    return dp[tar];
}

int noOfWays(vector<int> nums, int tar){

    vector<int> dp(tar+1, -1);
    return solveMemo(nums, tar, dp);
}

int main(){

    vector<int> nums = {1, 2, 5};

    int target = 5;

    int ans = noOfWays(nums, target);

    cout << ans << endl;

    return 0;
}