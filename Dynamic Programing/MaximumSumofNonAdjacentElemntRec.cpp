#include<iostream>
#include<vector>

using namespace std;

int  RecuSolve(vector<int> &nums, int x){

    int n = nums.size();
    if(x > n) return 0;

    int include = RecuSolve(nums, x+2) + nums[x];
    int exclude = RecuSolve(nums, x+1) + 0;

    return max(include, exclude);
}

int Solve(vector<int> &adj){

    return RecuSolve(adj, 0);

}

int main(){

    vector<int> adj = {9, 9, 8, 2};

    int ans = Solve(adj);

    cout << ans << endl;

    return 0;
}