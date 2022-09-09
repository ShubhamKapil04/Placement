#include<iostream>
#include<unordered_map>
#include<vector>
#include<stack>
#include<list>
#include<limits.h>

using namespace std;

class Graph{
    public:
    unordered_map <int, list<pair<int, int>>> adjList;

    void addEdges(int u, int v, int weight){
        pair<int, int> p = make_pair(v, weight);
        adjList[u].push_back(p);
    }

    void print(){
        for(auto i : adjList){
            cout << i.first << "--> ";
            for(auto j : i.second){
                cout << "(" << j.first <<"," << j.second <<"), ";
            }cout << endl;
        }
    }

    void dfs(int node, stack<int> &topo, unordered_map<int, bool> &visited){
        visited[node] = true;

        for(auto i : adjList[node]){
            if(!visited[i.first]){
                dfs(i.first, topo, visited);
            }
        }
        topo.push(node);
    }

    void getShortedDistance(int src, stack<int>&topo, vector<int> &dist){

        dist[src] = 0;

        while(!topo.empty()){
            int top = topo.top();
            topo.pop();

            if(dist[top] != INT_MAX){
                for(auto i:adjList[top]){
                    if(dist[top] + i.second < dist[i.first]){
                        dist[i.first] = dist[top] + i.second;
                    }
                }
            }
        }
    }

};


int main(){

    Graph g;
    // g.addEdges(0, 1, 5);
    // g.addEdges(0, 2, 3);
    // g.addEdges(1, 3, 6);
    // g.addEdges(1, 2, 2);
    // g.addEdges(2, 3, 7);
    // g.addEdges(2, 4, 4);
    // g.addEdges(2, 5, 2);
    // g.addEdges(3, 4, -1);
    // g.addEdges(4, 5, -2);

    g.addEdges(0, 1, 2);
    g.addEdges(0, 4, 1);
    g.addEdges(1, 2, 3);
    g.addEdges(2, 3, 6);
    g.addEdges(4, 2, 2);
    g.addEdges(4, 5, 4);
    g.addEdges(5, 3, 1);

    g.print();

    // number of edges
    int n = 6;

    unordered_map<int, bool> visited;
    stack<int> s;
    // we have topological sort
    for(int i = 0; i < n;  i++){
        if(!visited[i]){
            g.dfs(i, s, visited);
        }
    }

    int src = 1;
    vector<int> dist(n);

    for(int i = 0; i < n; i++){
        dist[i] = INT_MAX;
    }

    g.getShortedDistance(src, s, dist);

    
    cout << "ans is --> " << endl;

    for(int i = 0; i < dist.size(); i++){
        cout << dist[i] << " ";
    }
    cout << endl;

    return 0;

}