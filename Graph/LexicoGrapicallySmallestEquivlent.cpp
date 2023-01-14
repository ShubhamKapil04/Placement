class Solution {
public:
    
    char DFS_mini_char( unordered_map<char, vector<char>> &adj, char curr_ch, vector<bool> &visited){
        
        visited[curr_ch - 'a'] = true;
        
        char mini_Ch = curr_ch;
        
        for(auto i: adj[curr_ch]){
            
            if(visited[i - 'a'] == false)
                mini_Ch = min(mini_Ch, DFS_mini_char(adj, i, visited));
        }
        return mini_Ch;
    }
    
    
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        
        int n = s1.length();
        
        int m = baseStr.length();
        
        unordered_map<char, vector<char>> adj;
        
        for(int i = 0; i < n; i++){
            
            char u = s1[i];
            char v = s2[i];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }
        
        string result;
        
        for(int i = 0; i < m; i++){
            // current char
            char ch = baseStr[i];
            
            //boolfor visiteing
            vector<bool> visited(26, false);
            
            char mini_Char = DFS_mini_char(adj, ch, visited);
            
            result.push_back(mini_Char);
        }
        
        return result;
    }
};