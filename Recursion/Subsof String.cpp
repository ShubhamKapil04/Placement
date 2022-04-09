#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(string str, string output, int index, vector<string> &ans)
{
    //base Case
    if(index >= str.length())     
    {
        ans.push_back(output);
        return ;
    }

    //Exclude Case
    solve(str, output, index+1, ans);

    //Include Case
    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);
}

int main()
{
    string  str ={"abc"};
    string output;
    int index = 0;
    vector<string> ans;

    solve(str, output, index, ans);

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";

    }

    return 0;
}