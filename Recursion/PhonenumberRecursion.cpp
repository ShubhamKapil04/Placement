/*
Letter Combinations of a Phone Number
*/





#include<iostream>
#include<vector>
#include<string>

using namespace std;

void solve(string digit, string output, int index, string mapping[], vector<string> &ans)
{
    //Base case
    if(index >= digit.length())
    {
        ans.push_back(output);
        return ;
    }
    
    //Number will come 
    int number = digit[index] - '0';
    
    //here we will get the value mapped with that number
    string value = mapping[number];
    
    //Now we will iterate 
    for(int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index+1, mapping, ans);
        
        //Backtracking
        output.pop_back();
    }
}


int main()
{
    string digit ={'2','3'};
    vector<string> ans;
    string output;
    int index = 0;
    string mapping[10] = {" ", " ", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    solve(digit, output, index, mapping, ans);
    
    for(int i = 0; i < ans.size();i++)
    {
        cout << ans[i] <<" ";
    }
    
    return 0;
}