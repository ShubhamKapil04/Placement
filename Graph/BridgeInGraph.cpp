#include<unordered_map>
#include<list>
#include<vector>
void dfs(int node, vector<int> &disc, vector<int> &low, unordered_map<int, bool> &         vist, int timer, vector<vector<int>> &result, unordered_map<int, list<int>> &adjList, int parent){
     
    vist[node] = true;
    disc[node] = low[node] = timer++;
    
    for(auto  i: adjList[node]){
        if(i == parent)
            continue;
        
        if(!vist[i]){
            dfs(i, disc, low, vist, timer, result, adjList, node);
            
            low[node] = min(low[node], low[i]);
            
            // if node is brigr
            if(low[i] > disc[node]){
                vector<int> ans;
                ans.push_back(node);
                ans.push_back(i);
                result.push_back(ans);
            }  
        }
        
        else{
            // i backBriges
            low[node] = min(low[node], disc[i]);
        }
    }
    
    
    
}





vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
    
    
    unordered_map<int, list<int >> adjList;
    //adjlist
    for(int i = 0; i< edges.size();  i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int timer = 0;
    
    int parent = -1;
    vector<int> disc(v);
    vector<int> low(v);
    unordered_map<int, bool> visit;
    
    
    for(int i = 0; i < v; i++){
        disc[i] = -1;
        low[i] = -1;
    }
    
    vector<vector<int>> result;
    
    for(int i= 0; i < v; i++){
        if(!visit[i]){
            dfs(i, disc, low, visit, timer, result, adjList, parent);
        }
    }
  return result;
}