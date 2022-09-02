#include<unordered_map>
#include<queue>
#include<list>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Create adjlist
    unordered_map<int, list<int>> adjList;
    for(int i = 0; i < e; i++){
        
        int u = edges[i][0];
        int v = edges[i][1];
        
        adjList[u].push_back(v);
    }
    
    //Indregee 
    vector<int> indegree(v);
    for(auto i : adjList){
        
        for(auto j: i.second){
            indegree[j]++;
        }
    }
    
    //0 indegrre push
    queue<int> q;
    for(int i = 0; i < v; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    
    // Do bfs
    
    vector<int> ans;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        ans.push_back(front);
        
        for(auto i : adjList[front]){
            indegree[i]--;
            if(indegree[i] == 0){
                q.push(i);
            }
        }
    }
    return ans;
}