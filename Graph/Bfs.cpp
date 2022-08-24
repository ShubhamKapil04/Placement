#include<iostream>
#include<queue>
#include<unordered_map>
#include<vector>
#include<list>

using namespace std;

class graph{
    public:
    unordered_map<int, list<int > > adj;

    void addAdj(int u, int v, bool direction){

        adj[u].push_back(v);
        if(direction != 1){
            adj[v].push_back(u);
        }
    }

    void print(){
        for(auto i: adj){
            cout << i.first << " ";
            for(auto j: i.second){
                cout << j << " ";
            }
            cout << endl;
        }
    }

    void BFS(int s);

};

vecetor<int > BFS (int vertex, )


int main(){

    int n = 6;// node;
    int m = 5;// edges;

    graph g;

    for(int i = 0; i < m; i++){
        int u, v;

        cin >> u >> v;
        g.addAdj(u, v, 0);
    }

    g.print();

    vector<int> ans = BFS(0, );

}