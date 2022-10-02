#include<climits>
#include<iostream>
#include<vector>
using namespace std;


int solveRec(int n, int x, int y, int z){
    
    if(n == 0) return 0;
    
    if(n < 0) return INT_MIN;
    
    int a = solveRec(n-x, x, y, z) + 1;
    int b = solveRec(n-y, x, y, z) + 1;
    int c = solveRec(n-z, x, y, z) + 1;
    
    int ans = max(a, max(b, c));
    
}


int solveTab(int n, int x, int y, int z){
    vector<int> dp(n+1, INT_MIN);

    dp[0] = 0;

    // now from 1 tp n we have to traverse

    for(int i = 1; i <= n; i++){

        if(i-x >= 0)
            dp[i] = max(dp[i], dp[i-x] + 1);

        if(i-y >= 0)
            dp[i] = max(dp[i], dp[i-y] + 1);
        
        if(i-z >= 0)
            dp[i] = max(dp[i], dp[i-z] + 1);
    }

    if(dp[n] < 0) return 0;
    else return dp[n];
}


int cutSegments(int n, int x, int y, int z) {
	
    return solveTab(n, x, y, z);
}

int main(){

    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;

    int ans = cutSegments(n, x, y, z);
    cout << ans;

    return 0;
}