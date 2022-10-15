#include<bits/stdc++.h>
using namespace std;

int solveMemo(vector<vector<int>> &mat, int row, int col, int &maxi,  vector<vector<int>> &dp){

    //bace case
    if(row >= mat.size() || col >= mat[0].size()){
        return 0;
    }

    if(dp[row][col] != -1) return dp[row][col];

    int right = solveMemo(mat, row+1, col, maxi, dp);
    int diagonal = solveMemo(mat, row+1, col+1, maxi, dp);
    int down = solveMemo(mat, row+1, col, maxi, dp);

    if(mat[row][col] == 1){
        dp[row][col] = 1 + min(right, min(diagonal, down));
        maxi = max(maxi, dp[row][col]);
    }

    return maxi;
}

int maxSquare(vector<vector<int>>&mat){

    int maxi = 0;
    int n = 2;
    int m = 2;
    vector<vector<int>> dp(n, vector<int>(m, -1));
    int ans = solveMemo(mat, 0, 0, maxi, dp);

    return maxi;

}

int main(){

    vector<vector<int>> mt = {{1, 0},
                                {0, 0}};

    int ans = maxSquare(mt);
    
    cout << ans << endl;

    return 0;
}