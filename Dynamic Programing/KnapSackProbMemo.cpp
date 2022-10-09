#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int SolveMemo(vector<int> &weight, vector<int> &val, int index, int maxWeight, vector<vector<int> >&dp){

    // if(index == 0){
    //     if(weight[0] <= maxWeight) 
    //         return val[0];
    //     else return 0;
    // }

    // if(dp[index][maxWeight] != -1)
    //     return dp[index][maxWeight];

    // int include = 0;

    // if(weight[index] <= maxWeight)
    //     include = val[index] + SolveMemo(weight, val, index-1, maxWeight - weight[index], dp);

    // int exclude = 0 + SolveMemo(weight, val, index-1, maxWeight, dp);

    // dp[index][maxWeight] = max(include, exclude);

    // return dp[index][maxWeight];

    
    if(index == 0){
        if(weight[0] <= maxWeight) return val[0];

        else return 0;
    }
    
    if(dp[index][maxWeight] != -1)
        return dp[index][maxWeight];

    int include = 0;

    if(weight[index] <= maxWeight)
        include = val[index] + SolveMemo(weight, val, index-1, maxWeight - weight[index], dp);

    int exclude = 0 + SolveMemo(weight, val, index-1, maxWeight, dp);

    dp[index][maxWeight] = max(include, exclude);

    return  dp[index][maxWeight] ;

}

int knapSack(vector<int> &weight, vector<int> &value, int n, int maxWeight){

    vector<vector<int> >dp(n, vector<int>(maxWeight+1, -1));
    return SolveMemo(weight, value, n-1, maxWeight, dp);
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