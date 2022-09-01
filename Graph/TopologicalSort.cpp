#include<vector>
#include<unordered_map>
#include<list>
#include<stack>

void topoSort(int node, stack<int> &s, vector<bool> &visited,                                   unordered_map<int,list<int>> &adjList){
    
    visited[node] = true;
    
    for(auto i: adjList[node]){
        if(!visited[i]){
            topoSort(i, s, visited, adjList);
        }
    }
    s.push(node);
}



vector<int> topologicalSort(vector<pair<int,int>>& edges, int N, int M)
{
    unordered_map<int, list<int>> adjList;
    
    for(int i = 0; i < M; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adjList[u].push_back(v);
    }
    
    vector<bool> visited(N);
    stack<int> s;
    
    for(int i = 0; i < N; i++){
        if(!visited[i]){
            topoSort(i, s, visited, adjList);
        }
    }
    
    vector<int>ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    
    return ans;
} 
