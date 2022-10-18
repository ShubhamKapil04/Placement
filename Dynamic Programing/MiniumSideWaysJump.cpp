class Solution {
public:
//     Recursive Solution TLE 
    int solveRec(vector<int>& obstacles, int currLane, int currPos){
        
        int n = obstacles.size() - 1;
        int ans = INT_MAX;
        //base case
        if(currPos == n) return 0;
        
        //Checking for the current lane
        if(obstacles[currPos + 1] != currLane){
            
            return solveRec(obstacles, currLane, currPos + 1);
        }else{
            // checking for side if we can jump
           
            
            for(int i = 1; i <= 3; i++){
                
                if(currLane != i && obstacles[currPos] != i)
                    ans = min(ans, 1 + solveRec(obstacles, i, currPos));
            }
          
        }
          return ans;
    }
    
    int solveMem(vector<int>& obstacles, int currLane, int currPos, vector<vector<int>> &dp ){
        
        int n = obstacles.size() - 1;
        int ans = INT_MAX;
        //base case
        if(currPos == n) return 0;
        
        if(dp[currLane][currPos] != -1) return dp[currLane][currPos];
        
        //Checking for the current lane
        if(obstacles[currPos + 1] != currLane){
            
            return solveMem(obstacles, currLane, currPos + 1, dp);
        }else{
            // checking for side if we can jump
           
            
            for(int i = 1; i <= 3; i++){
                
                if(currLane != i && obstacles[currPos] != i)
                    ans = min(ans, 1 + solveMem(obstacles, i, currPos, dp));
            }
            dp[currLane][currPos] = ans;
          
        }
          return  dp[currLane][currPos] ;
    }
    
    
    
    int minSideJumps(vector<int>& obstacles) {
        
        // return solveRec(obstacles, 2, 0);
        vector<vector<int>>dp (4, vector<int>(obstacles.size(), -1));
        return solveMem(obstacles, 2, 0, dp);
    }
};