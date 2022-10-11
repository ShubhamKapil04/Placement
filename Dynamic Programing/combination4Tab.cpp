#include<bits/stdc++.h>

using namespace std;

int solveTab(vector<int> &nums, int tar){

    vector<int> dp(tar + 1, 0);

    dp[0] = 1;

    for(int i = 1; i <= tar; i++){

        for(int j = 0; j < nums.size(); j++){

            if(i - nums[j] >= 0)
                dp[i] += dp[ i - nums[j]];

        }

    }

    return dp[tar];
}

int noOfWays(vector<int> nums, int tar){

    
    return solveTab(nums, tar);
}

int main(){

    vector<int> nums = {1, 2, 5};

    int target = 5;

    int ans = noOfWays(nums, target);

    cout << ans << endl;

    return 0;
}