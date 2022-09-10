#include<unordered_map>
#include<list>
#include<set>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Crate Adjlist
    unordered_map<int, list<pair<int, int> >> adjList;
    for(int i = 0; i < edges; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];
        
        adjList[u].push_back(make_pair(v,w));
        adjList[v].push_back(make_pair(u,w));
    }
    
    // Crate a distance data structure
    vector<int> dist(vertices);
    for(int i = 0; i < vertices; i++)
        dist[i] = INT_MAX;
    
    //Crate a datastructure to store the distace and node
    
    set<pair<int, int>> st;
    
    // source node distance is 0 
    dist[source] = 0;
    st.insert(make_pair(0, source));
    
    while(!st.empty()){
        auto top = *(st.begin());
        
        int nodeDistance = top.first;
        int topNode = top.second;
        
        st.erase(st.begin());
        
        for(auto i : adjList[topNode]){
            if(nodeDistance + i.second < dist[i.first]){
                
                // search if there is smaller value or other value of that
                // Node
                
                auto record = st.find(make_pair(dist[i.first], i.first));
                ///record found
                if(record != st.end()){
                    st.erase(record);
                }
                
                dist[i.first] = nodeDistance + i.second;
                
                st.insert(make_pair(dist[i.first], i.first));
                
            }
        }
    }
    return dist;
}
