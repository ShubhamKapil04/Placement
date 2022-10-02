#include<climits>
#include<iostream>
#include<vector>
using namespace std;


int solveMemo(int n, int x, int y, int z, vector<int> &dp){
    
    if(n == 0) return 0;
    
    if(n < 0) return INT_MIN;

    if(dp[n] != -1) return dp[n];
    
    int a = solveMemo(n-x, x, y, z, dp) + 1;
    int b = solveMemo(n-y, x, y, z, dp) + 1;
    int c = solveMemo(n-z, x, y, z, dp) + 1;
    
    dp[n] = max(a, max(b, c));
    
    return dp[n];
}

int cutSegments(int n, int x, int y, int z) {
	
    vector<int> dp(n+1, -1);
    int ans = solveMemo(n, x, y, z, dp);
    if(ans < 0) return 0;
    else{
        return ans;
    }
}

int main(){

    int n = 8;
    int x = 3;
    int y = 3;
    int z = 3;

    int ans = cutSegments(n, x, y, z);
    cout << ans;

    return 0;
}