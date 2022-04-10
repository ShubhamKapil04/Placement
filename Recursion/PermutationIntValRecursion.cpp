#include<iostream>
#include<vector>
#include<string>

using namespace std;

void solve(vector<int> nums, vector<vector<int>>& ans, int index)
{
    //Base case
    if(index >= nums.size())
    {
        ans.push_back(nums);
        return ;
    }
    
    //iterating into the nums
    for(int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        solve(nums, ans, index+1);
        
        //BAckTracking
        swap(nums[index], nums[i]);
    }
}

int  main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    int index = 0;
    
    solve(nums, ans, index);

    //Printing in 2d vector or array
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j =0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] ;
        }
        cout << " ";
    }
    return 0;
}