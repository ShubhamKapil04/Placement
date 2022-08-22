#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>

using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adj;

    void addAdj(int u, int v, bool direction){
        // if direction --> 0 then undirected graph
        // if direction --> 1 then directed graph

        // crate edges u and v
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void printList() {
        for(auto i: adj){

            cout << i.first <<" ";

            for(auto j: i.second){
                cout << j << " ";
            }
            cout << endl;

        }
    }

};

int main(){


    int n;
    cout << "Enter the number of nodes "<< endl;
    cin >> n;

    int m;
    cout << "Enter the number of edges " << endl;
    cin >> m;

    graph g;

    for(int i = 0 ; i < m; i++){

        int u, v;
        cin >> u >> v;
        //creating undirected graphs
        g.addAdj(u, v, 0);
    } 

    g.printList();


}