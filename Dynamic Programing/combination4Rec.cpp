#include<bits/stdc++.h>

using namespace std;

int noOfWays(vector<int> nums, int tar){

    if(tar ==  0) return 1;
    if(tar < 0) return 0;

    int solve = 0;

    for(int i = 0; i < nums.size(); i++){
        solve += noOfWays(nums, tar - nums[i]);
    }

    return solve;
}

int main(){

    vector<int> nums = {1, 2, 5};

    int target = 5;

    int ans = noOfWays(nums, target);

    cout << ans << endl;

    return 0;
}