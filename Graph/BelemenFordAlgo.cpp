/*
    Time complexity: O(N * M)
    Space complexity: O(N)

    where 'N' is the number of vertices in the graph and 'M' is the number of edges in the graph.
*/

int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    
    // Create a vector to store the distances from source.
    vector<int> d(n + 1, 1e9);
    // Distance of source to source is 0.
    d[src] = 0;

    // Apply bellmonford algorithm.
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];

            if (d[u] != 1e9 && d[v] > (d[u] + w)) {
                d[v] = d[u] + w;
            }
        }
    }
    
    //negative cycle is there or not if yes then flag will give true
    bool flag = 0;
    // Return the distance of destination.
    
     for (int j = 0; j < m; j++)
        {
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];

            if (d[u] != 1e9 && d[v] > (d[u] + w)) {
               flag = 1;
            }
        }
    
    if(flag == 0){
        return d[dest];
    }
    else{
        return -1;
    }
    
}