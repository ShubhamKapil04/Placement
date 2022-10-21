#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solveTab(vector<int> &obstacle){

    int n = obstacle.size() - 1;
    vector<vector<int>> dp(4, vector<int> (obstacle.size(), 1e9));

    dp[0][n] = 0;
    dp[1][n] = 0;
    dp[2][n] = 0;
    dp[3][n] = 0;

    for(int currPos = n-1; currPos >= 0; currPos--){
        for(int currLane = 1; currLane <= 3; currLane++){

            if(obstacle[currPos + 1] != currLane){
            
                dp[currLane][currPos + 1];
            }else{
            // checking for side if we can jump
                int ans = 1e9;
                for(int i = 1; i <= 3; i++){
                
                    if(currLane != i && obstacle[currPos] != i)
                        ans = min(ans, 1 + dp[i][currPos + 1]);
                }
                dp[currLane][currPos] = ans;
            }
        }
    }
    return min(dp[2][0], min( 1 + dp[1][0], 1 +  dp[1][0]));
}

int minsideJump(vector<int> &obstacle){

    return solveTab(obstacle);
}

int main(){

    vector<int> obstacle = {0, 1, 2, 3, 0};

    int ans = minsideJump(obstacle);

    cout << ans << endl;


    return 0;
}