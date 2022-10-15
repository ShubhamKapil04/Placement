#include<bits/stdc++.h>
using namespace std;

int solveRec(vector<vector<int>> &mat, int row, int col, int &maxi){

    //bace case
    if(row >= mat.size() || col >= mat[0].size()){
        return 0;
    }

    int right = solveRec(mat, row+1, col, maxi);
    int diagonal = solveRec(mat, row+1, col+1, maxi);
    int down = solveRec(mat, row+1, col, maxi);

    if(mat[row][col] == 1){
        int ans = 1 + min(right, min(diagonal, down));
        maxi = max(maxi, ans);
    }

    return maxi;
}

int maxSquare(vector<vector<int>>&mat){

    int maxi = 0;
    int ans = solveRec(mat, 0, 0, maxi);

    return maxi;

}

int main(){

    vector<vector<int>> mt = {{1, 0},
                                {0, 0}};

    int ans = maxSquare(mt);
    
    cout << ans << endl;

    return 0;
}