/*
#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums, vector<int>output, int index, vector<int> &ans)
{
    //Base Case
    if(index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    //Exclude 
    solve(nums, output, index+1, ans);

    //include case
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index+1, ans);

}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<int> output;
    vector<int> ans;
    int index = 0;
    solve(nums, output, index, ans);
    return 0;
}
*/

class Solution {
    
void solve(vector<int>nums, vector<int> output, vector<vector<int>>&ans, int index)
{
    //Base Case
    if(index >= nums.size())
    {
        ans.push_back(output);
        return ;
    }
    
    //Exclude the value
    solve(nums, output, ans, index + 1);
    
    //include the index
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, ans, index + 1);
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> output;
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, output, ans, 0);
        
        return ans;
    }
};