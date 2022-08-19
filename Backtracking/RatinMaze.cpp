#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

bool isSafe(int newx, int newy, vector<vector<bool>>& isVisiT,
            vector<vector< int >> &arr, int n){
      
      if((newx >= 0 && newx < n) && (newy >= 0 && newy < n) &&                    (isVisiT[newx][newy] != 1) && (arr[newx][newy] != 0)){
      return true;
      }
      else{
      return false;
      }
}

void solve(int x, int y, vector<vector< int >> &arr,
            vector<vector<bool>>& isVisit, 
            vector<string> &ans, int n,
           string path){
           // base case
           if(x == n-1 && y == n-1){
            ans.push_back(path);
            return;
           }
           
           // 4 Movement
           // D, L, R, U
           isVisit[x][y] = 1;
           // Down move
           if(isSafe(x+1, y, isVisit, arr, n)){
               solve(x+1, y, arr, isVisit, ans, n, path + 'D');
           }
           
           //Left
           if(isSafe(x, y-1, isVisit, arr, n)){
               solve(x, y-1, arr, isVisit, ans, n, path +'L');
           }
           //Right
           if(isSafe(x, y+1, isVisit, arr, n)){
               solve(x, y+1, arr, isVisit, ans, n, path + 'R');
           }
           // Up
           if(isSafe(x-1, y, isVisit, arr, n)){
                solve(x-1, y, arr, isVisit, ans, n, path + 'U');
            }
      isVisit[x][y] = 0;
}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    vector<string> ans;

    vector<vector<bool>> isVisited (n, vector<bool>(n, 0));
    string path = "";
     if(arr[0][0] == 0){
        return ans;
    }
    
    solve(0, 0, arr, isVisited, ans, n, path);
    return ans;
}

int main(){
    vector<vector<int>> arr = {{1, 0, 0, 0},
                                {1, 1, 0, 0},
                                {1, 1, 0, 0},
                                {0, 1, 1, 1}};
    int n = 4;

    vector<string> ans = searchMaze(arr, n);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }

    return 0;
}