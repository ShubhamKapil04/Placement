#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int MemoSol(vector<int> &coins, int ammount, vector<int> &dp){

    //Base case
    if(ammount == 0) return 0;

    if(ammount < 0) return INT_MAX;

    if(dp[ammount] != -1) return dp[ammount];

    int mini = INT_MAX;

    for(int i = 0; i < coins.size(); i++){
        int ans = MemoSol(coins, ammount - coins[i], dp);
        
        if(ans != INT_MAX){
            mini = min(mini, ans + 1);
        }
        dp[ammount] = mini;
    }

  
    return dp[ammount];
}

int coinChanges(vector<int> &coins, int ammount){

    vector<int> dp(ammount+1, -1);

    int ans = MemoSol(coins, ammount, dp);

    if(ans == INT_MAX) return -1;
    else return ans;
}


int main(){

    vector<int> coins = {2};
    int ammount = 3;

    int MemoSol = coinChanges(coins, ammount);

    cout << MemoSol << endl;

    return 0;

}