#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int recSol(vector<int> &coins, int ammount){

    //Base case
    if(ammount == 0) return 0;

    if(ammount < 0) return INT_MAX;

    int mini = INT_MAX;

    for(int i = 0; i < coins.size(); i++){
        int ans = recSol(coins, ammount - coins[i]);
        
        if(ans != INT_MAX){
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}

int coinChanges(vector<int> &coins, int ammount){

    int ans = recSol(coins, ammount);

    if(ans == INT_MAX) return -1;
    else return ans;
}


int main(){

    vector<int> coins = {1, 2, 5};
    int ammount = 11;

    int RecursiveSol = coinChanges(coins, ammount);

    cout << RecursiveSol << endl;

    return 0;

}