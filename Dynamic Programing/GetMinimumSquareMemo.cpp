#include<bits/stdc++.h>
using namespace std;



int solveMemo(vector<int> &dp, int n){
    if(n == 0) return 0;
    	    
    if(dp[n] != -1) return dp[n];
    	    
    int ans = n;
    	    
    	for(int i = 1; i*i <= n; i++){
    	    int temp = i*i;
    	    ans = min(ans, 1 + solveMemo(dp, n - temp));
        }
    
    dp[n] = ans;
    return dp[n];
}
    	
int MinSquares(int n){
	   // return solveRec(n);
	vector<int> dp(n+1, -1);
	   
	return solveMemo(dp, n);
}

int main(){


    int n = 100;

    int ans = MinSquares(n);
    cout << ans << endl;

    return 0;
}