#include<unordered_map>
#include<list>
#include<queue>


int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  
    //Crate AdjList
    unordered_map<int, list<int>> adjList;
    for(int i = 0; i < edges.size(); i++){
        int u = edges[i].first - 1;
        int v = edges[i].second - 1;
        
        adjList[u].push_back(v);
        // here we have the list now
    }
    
    // find all indegree
    vector<int> indegree(n);
    for(auto i: adjList){
        for(auto j :i.second){
            indegree[j]++;
        }
    }
    
    queue<int> q;
    for(int i = 0; i < n; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    int cnt =  0;
    // do bfs
    while(!q.empty()){
        int front = q.front();
        q.pop();
        cnt++;
        
        for(auto i : adjList[front]){
            indegree[i]--;
            if(indegree[i] == 0){
                q.push(i);
            }
        }
    }
    
    if(cnt == n){
        return false;
    }
    else{
        return true;
    }
   
}