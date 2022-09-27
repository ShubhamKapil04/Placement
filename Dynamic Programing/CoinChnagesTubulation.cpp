#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int TabSol(vector<int> &coins, int ammount){

    int dp[ammount+1];

    dp[0] = 0;

    for(int i = 1;  i < ammount; i++){
        dp[i] = INT_MAX;
    }

    for(int i = 1; i <= ammount; i++){
        for(int j = 0; j < coins.size(); j++){

            if( i - coins[j] >= 0 && dp[i-coins[j]] != INT_MAX)
            dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
        }
    }

    if(dp[ammount] == INT_MAX) return -1;
    else return dp[ammount];
    
}

int coinChanges(vector<int> &coins, int ammount){

    

    return TabSol(coins, ammount);

    
}


int main(){

    vector<int> coins = {1, 2, 3};
    int ammount = 5;

    int MemoSol = coinChanges(coins, ammount);

    cout << MemoSol << endl;

    return 0;

}