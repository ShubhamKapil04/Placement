#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int SolveTab(vector<int> &weight, vector<int> &val, int n, int maxWeight){
    
    vector<vector<int>>  dp(n, vector<int>(maxWeight+1, 0));

    for(int w = weight[0]; w <= maxWeight; w++){
        if(weight[0] <= maxWeight) 
            dp[0][w] = val[0];
        else dp[0][w] = 0;
    }

    for (int index = 1; index < n; index++){
        for(int w = 0; w <= maxWeight; w++){
            int include = 0;

            if(weight[index] <= w)
                include = val[index] + dp[index-1][w - weight[index]];
            
            int exclude = 0 + dp[index - 1][w];

            dp[index][w] = max(include, exclude);
        }

    }

    return dp[n-1][maxWeight];
}

int knapSack(vector<int> &weight, vector<int> &value, int n, int maxWeight){

    return SolveTab(weight, value, n-1, maxWeight);
}

int main(){

    /*
    
    4
    1 2 4 5
    5 4 8 6
    5

    
    */


    vector<int> weight = {1, 2, 4, 5};
    vector<int> value = {5, 4, 8, 6};

    int maxWeight = 5;
    int n = 4;

    int ans = knapSack(weight, value, n, maxWeight);

    cout << ans;

    return 0;
}