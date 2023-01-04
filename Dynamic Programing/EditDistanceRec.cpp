


/* 
Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.

You have the following three operations permitted on a word:

Insert a character
Delete a character
Replace a character
 

Example 1:

Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation: 
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')
*/














class Solution {
public:
    
    int solveRec(string &a, string &b, int i, int j,  vector<vector<int>> &dp){
        
        //Base case
        if(i == a.length())
            return b.length() - j; // count of word length ans
        if(j == b.length())
            return a.length() - i;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int ans = 0;
        
        if(a[i] == b[j])
            return solveRec(a, b, i+1, j+1, dp);
        else{
            
            //insert
            int insertAns = 1 + solveRec(a, b, i, j+1, dp);
            
            //Delete
            int deleteAns = 1 + solveRec(a, b, i+1, j, dp);
            
            //Replace
            int replaceAns = 1 + solveRec(a, b, i+1, j+1, dp);
            
            ans = min(insertAns, min(deleteAns, replaceAns));
        }
        
        return  dp[i][j] = ans ;
        
    }    
    
    int minDistance(string word1, string word2) {
        
        vector<vector<int>> dp(word1.length(), vector<int>(word2.length(), -1));
        return solveRec(word1, word2, 0, 0, dp);
    }
};