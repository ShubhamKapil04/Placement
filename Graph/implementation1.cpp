#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>

using namespace std;

class graph{

    public:
    unordered_map<int, list<int>> adj;

    void addAdj(int n, int e, bool directon){
        // direction if --> 1
        // then it is a directed graph
        // direction if --> 0
        // then it is undirected graph

        adj[n].push_back(e);
        if(directon != 1){
            adj[e].push_back(n);
        }
    }

    void printList(){
        for(auto i : adj){
            cout << i.first << " ";
            for(auto j : i.second){
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main(){

    int n;
    cout << "Enter no of nodes " << endl;
    cin >> n;

    int e;
    cout << "Enter no of edges "<< endl;
    cin >> e;

    graph direceted;

    for(int i = 0 ; i < e; i++){

        int u, v;
        cin >> u >> v;

        // Creating grapg
        direceted.addAdj(u, v, 0);
    }

    direceted.printList();

}