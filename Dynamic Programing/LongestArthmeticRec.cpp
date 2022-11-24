#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

class Solution{
    public:

    int SolveRec(int index, int diff, vector<int>& nums){

        //base case
        if(index < 0) return 0;

        int ans = 0;

        for(int j = index-1; j >= 0; j--){
            //logic
            if(nums[index]-nums[j] == diff){
                ans = max(ans, 1 + SolveRec(j, diff, nums));
            }
        }
        return ans;
    }

    int longestArthmetic(vector<int> & nums){

        if(nums.size() <= 2)
        return nums.size();

        int ans = 0;

        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                ans = max(ans, 2 + SolveRec(i, nums[j] - nums[i], nums));
            }
        }
        return ans;
    }
};

int main(){

    vector<int> nums = {1, 7, 10, 13, 14, 19};
    int n = nums.size();

    Solution obj;
    int ans = obj.longestArthmetic(nums);
    cout << ans << endl;

    return 0; 

}