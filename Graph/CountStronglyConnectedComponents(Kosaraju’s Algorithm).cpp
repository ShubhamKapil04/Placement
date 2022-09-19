#include<unordered_map>
#include<list>
#include<stack>

// Topo sort
void dfs(int node, stack<int> &s, unordered_map<int, bool> &visited,                     unordered_map<int, list<int>> adjList){
    
    visited[node] =  true;
    
    for(auto nbr:  adjList[node]){
        if(!visited[nbr]){
            dfs(nbr, s, visited, adjList);
        }
    }
    s.push(node);
}

// transpose adjlist mark 
void Rdfs(int node, unordered_map<int, bool>&visited, unordered_map<int, list<int>> &adjList){
    
    visited[node] = true;
    
    for(auto i:adjList[node]){
        Rdfs(i, visited, adjList);
    }
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	// crate adjList
    
    unordered_map<int ,list<int>> adjList;
    
    for(int i = 0; i < edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adjList[u].push_back(v);
    }
    
    
    //toposort
    stack<int> s;
    unordered_map<int, bool> visit;
    
    for(int i = 0; i < v; i++){
        if(!visit[i]){
            dfs(i, s, visit, adjList);
        }
    }
    
    // Transpose
    unordered_map<int, list<int>> transpo;
    for(int i = 0; i < v; i++){
        visit[i] = 0;
        for(auto nbr: adjList[i]){
            transpo[nbr].push_back(i);
        }
    }
    
    int count  = 0;
    
    while(!s.empty()){
        int top = s.top();
        s.pop();
        
        if(!visit[top]){
            count++;
            Rdfs(top, visit, transpo);
        }
    }
    return count;
}