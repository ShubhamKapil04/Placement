#include<bits/stdc++.h>
using namespace std;

int SolveMemo(vector<int> &days, vector<int> &costs, int n, int index, vector<int> &dp){

    //base case
    if(index >= n) return 0;

    int option1 = costs[0] + SolveMemo(days, costs, n, index + 1, dp);

    int i;
    for(i = index; i < n && days[i] < days[index] + 7; i++);

    int option2 = costs[1] + SolveMemo(days, costs, n, i, dp);

    for(i = index; i < n && days[i] < days[index] + 30; i++);

    int option3 = costs[2] + SolveMemo(days, costs, n, i, dp);

    dp[index] =  min(option1, min(option2, option3));

    return dp[index];
}

int minCostTicket(vector<int> &days, vector<int> &costs){

    int n = days.size();

    vector<int> dp(n+1, -1);

    return SolveMemo(days, costs, n, 0, dp);
}

int main(){

    vector<int> days = {1,4,6,7,8,20};
    vector<int> costs = {2,7,15};

    int ans = minCostTicket(days, costs);
    cout << ans << endl;
    return 0;
}