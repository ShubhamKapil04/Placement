#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>

using namespace std;


int min(int a, int b){
    if(a > b)
        return b;
    return a;
}


void dfs(int node, int parent, unordered_map<int, list<int>> &adjList, vector<int> &disc, vector<int> &low,
        unordered_map<int, bool>& visited, int &timer, vector<int> &ap){

            visited[node] = true;
            low[node] = disc[node] = timer++;

            int child = 0;

            for(auto i : adjList[node]){
                if(i == parent)
                continue;

                if(!visited[i]){
                    dfs(i, node, adjList, disc, low, visited, timer, ap);

                    low[node] = min(low[node], low[i]);

                    //check for ap

                    if(low[i] >= disc[node] && parent != -1){
                        ap[node] = 1;
                    }

                    child++;
                }
                else{

                    //if backedges is there
                    low[node] = min(low[node], disc[i]);
                }
            }

            if(parent == -1 && child > 1){
                ap[node] = 1;
            }
}



int main(){

    int n = 5;
    int e = 5;

    vector<pair<int, int>> edges;
    edges.push_back(make_pair(0, 3));
    edges.push_back(make_pair(3, 4));
    edges.push_back(make_pair(0, 4));
    edges.push_back(make_pair(0, 1));
    edges.push_back(make_pair(1, 2));


    unordered_map<int, list<int>> adjList;
    for(int  i = 0; i < edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int timer = 0;
    unordered_map<int, bool> visited;
    vector<int>dis(n);
    vector<int> low(n);
    int parent = -1;
    vector<int>articPoint(n, 0);


    for(int i = 0;  i < n; i++){

        if(!visited[i]){
            dfs(i, parent, adjList, dis, low, visited, timer, articPoint);
        }

    }

    for(int i = 0; i < n; i++){
        if(articPoint[i] != 0){
            cout << i << " ";
        }
    }
    cout << endl;


    return 0;
}