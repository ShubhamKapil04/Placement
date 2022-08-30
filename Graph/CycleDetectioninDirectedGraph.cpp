#include<unordered_map>
#include<list>
bool dfsCycleDetect(int node, unordered_map<int, bool>&visited,  unordered_map<int, list<int>> &adjList,
                    unordered_map<int, bool>&dfsVisited){
    
    visited[node] = true;
    dfsVisited[node] = true;
    
    for(auto i: adjList[node]){
        if(!visited[i] ){
            bool detect = dfsCycleDetect(i, visited, adjList, dfsVisited);
            if(detect == true){
                return true;
            }
        }
        else if(dfsVisited[i]){
           return true;
        }
    }
    dfsVisited[node] = false;
    
    return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  
    //Crate AdjList
    unordered_map<int, list<int>> adjList;
    for(int i = 0; i < edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;
        
        adjList[u].push_back(v);
        // here we have the list now
    }
    
    unordered_map<int, bool>visited;
    unordered_map<int, bool>dfsVisited;
    //Now check if the node is visited or nor
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            bool dfscycle = dfsCycleDetect(i, visited, adjList, dfsVisited);
            if(dfscycle){
                return true;
            }
        }
    }
    return false;
}