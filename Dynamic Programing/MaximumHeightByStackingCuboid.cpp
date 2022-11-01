#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    bool check(vector<int> &base, vector<int> &newBox){
        if(newBox[0] <= base[0] && newBox[1] <= base[1] && newBox[2] <= base[2])
            return true;
        else
            return false;
    }  
    
    int solveTab(int n, vector<vector<int>>& cuboids){
        
        vector<int> currRow(n+1, 0);
        vector<int> nextRow(n+1, 0);
        
        for(int curr = n-1; curr >= 0; curr--){
            for(int prev = curr-1; prev >= -1; prev--){
                
                int take = 0;
                if(prev == -1 || check(cuboids[curr], cuboids[prev])){
                    take = cuboids[curr][2] + nextRow[curr+1];
                }
            
                int notake = 0 + nextRow[prev+1];    
                currRow[prev+1] = max(take, notake);
            }
            nextRow = currRow;
        }
        return nextRow[0];
    }
    
    int maxHeight(vector<vector<int>>& cuboids) {
        
        // Sort the cuboid based on dimentions
        for(auto &a:cuboids)
            sort(a.begin(), a.end());
        
        //Sort the based on width
        sort(cuboids.begin(), cuboids.end());
        
        
        return solveTab(cuboids.size(), cuboids);
    }
};

int main(){

    vector<vector<int>> cuboids = {{50,45,20},{95,37,53},{45,23,12}};

    Solution ob;

    cout << ob.maxHeight(cuboids) << endl;

    return 0;
}