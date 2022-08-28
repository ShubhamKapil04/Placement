#include<unordered_map>
#include<queue>
#include<list>
// bool bfsCycle(int node, unordered_map<int,bool> &Visited, unordered_map<int, list<int>> &adjList, unordered_map<int,int> &parent){
        
//     queue<int> q;    
//     parent[node] = -1;
//     Visited[node] = 1;
//     q.push(node);
    
//     while(!q.empty()){
//         int frontNode = q.front();
//         q.pop();
        
//         for(auto i : adjList[frontNode]){
// //             adjList[frontNode];
            
//             if(Visited[i] == true && parent[frontNode] != i){
//                 return true;
//             }
//             else if(!Visited[i]){
//                 q.push(i);
//                 parent[i] = frontNode;
//                 Visited[i] = 1;
//             }
//         }
//     }
    
//     return false;
// }

bool dfsCycle(int node, unordered_map<int,bool> &Visited, unordered_map<int, list<int>> &adjList, int parent){
    
    
    Visited[node] = true;
    
    for(auto i: adjList[node]){
        
         if(!Visited[i]){
            bool cycle = dfsCycle(i, Visited, adjList, node);
            if(cycle == true){
                return true;
            }
        }
        else if(i != parent){
                return true;
        }
    }
    
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
      unordered_map<int, list<int>> adjList;
      for(int i = 0; i < m; i++){
          int u = edges[i][0];
          int v = edges[i][1];
          
          adjList[u].push_back(v);
          adjList[v].push_back(u);
      }
    bool ans;
    unordered_map<int,bool> Visited;
    unordered_map<int, int> parent;
    for(int i = 0; i < n; i++){
        if(!Visited[i]){
//             ans = bfsCycle(i, Visited, adjList, parent);
            ans = dfsCycle(i, Visited, adjList, -1);
        }
         
        if(ans == 1){
            return "Yes";
        }
    } 
    return "No";
}
