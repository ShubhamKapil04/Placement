

// 2246. Longest Path With Different Adjacent Characters
// Hard

// 1307

// 32

// Add to List

// Share
// You are given a tree (i.e. a connected, undirected graph that has no cycles) rooted at node 0 consisting of n nodes numbered from 0 to n - 1. The tree is represented by a 0-indexed array parent of size n, where parent[i] is the parent of node i. Since node 0 is the root, parent[0] == -1.

// You are also given a string s of length n, where s[i] is the character assigned to node i.

// Return the length of the longest path in the tree such that no pair of adjacent nodes on the path have the same character assigned to them.

#include<iostream>
#include<bits/stdc++.h>
using namespace  std;





class Solution {
public:
    
    int result;
    
    int DFS(unordered_map<int, vector<int>> &adj, int curr, int parent, string &s){
        
        int longest = 0;
        int second_longest = 0;
        
        for(auto &child: adj[curr]){
            
            if(child == parent) 
                continue;
            
            int child_longest = DFS(adj, child, curr, s);
            
            //checking if that curr value is equal to its child value
            if(s[curr] == s[child])
                continue;
                
            if(child_longest > second_longest)
                second_longest = child_longest;
            
            
            if(second_longest > longest)
                swap(longest, second_longest);
        }
        
        // Koi ek Acha hai to usko le liya or jo unka parent tha use add kr diya
        int choosing_one = max(longest, second_longest) + 1;
        
        // Root value he li kyuki uske child same value ke the
        int only_root = 1;
        
        // necche he ans nikal liya
        int child_ans = 1 + longest + second_longest;
        
        result = max({result, choosing_one, only_root, child_ans});
        
        return max(choosing_one, only_root);
        
    }
    
    int longestPath(vector<int>& parent, string s) {
        
        unordered_map<int, vector<int>> adj;
        result = 0;
    
        // Created Adj 
        for(int i = 1; i < parent.size(); i++){
            
            int u = i;
            int v = parent[i];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        DFS(adj, 0, -1, s);
        
        return result;
        
    }
};