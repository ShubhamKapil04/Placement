#include<iostream>
#include<vector>
#include<string>

using namespace std;

void solve(vector<string> str1, vector<vector<string>>& ans, int index)
{
    //Base case
    if(index >= str1.size())
    {
        ans.push_back(str1);
        return ;
    }
    
    //iterating into the str1
    for(int i = index; i < str1.size(); i++)
    {
        swap(str1[index], str1[i]);
        solve(str1, ans, index+1);
        
        //BAckTracking
        swap(str1[index], str1[i]);
    }
}

int  main()
{
    vector<string> str1 = {"a","b","c"};
    vector<vector<string>> ans;
    int index = 0;
    
    solve(str1, ans, index);

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