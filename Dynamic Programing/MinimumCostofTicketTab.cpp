#include<bits/stdc++.h>
using namespace std;

int SolveTab(vector<int> &days, vector<int> &costs, int n){

    vector<int> dp(n+1, INT_MAX);

    //base case
    dp[n] = 0;

    for(int k = n-1; k >= 0; k--){

        int option1 = costs[0] + dp[k + 1];

        int i;
        for(i = k; i < n && days[i] < days[k] + 7; i++);

        int option2 = costs[1] + dp[i];

        for(i = k; i < n && days[i] < days[k] + 30; i++);

        int option3 = costs[2] + dp[i];

        dp[k] =  min(option1, min(option2, option3));
    }

    return dp[0];
}

int minCostTicket(vector<int> &days, vector<int> &costs){

    int n = days.size();
    return SolveTab(days, costs, n);
}

int main(){

    vector<int> days = {1,4,6,7,8,20};
    vector<int> costs = {2,7,15};

    int ans = minCostTicket(days, costs);
    cout << ans << endl;
    return 0;
}