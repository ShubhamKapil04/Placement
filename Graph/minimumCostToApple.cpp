class Solution {
public:
    
//    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
//        // creating adjacency list
//         vector<vector<int>> a(n);
//         for (auto& x : edges) {
//             a[x[0]].push_back(x[1]);
//             a[x[1]].push_back(x[0]);
//         }

//         return dfs(-1, 0, a, hasApple);
//     }

//     int dfs(int prev, int curr, vector<vector<int>>& a, vector<bool>& hasApple) {
//         int ans = 0;
//         for (auto x : a[curr]) {
//             if (x != prev) {
//                 int res = dfs(curr, x, a, hasApple);
//                 if (res > 0 || hasApple[x]) {
//                     ans += (res + 2);
//                 }
//             }
//         }
//         return ans;
    
    unordered_map<int, vector<int>> g; // to store the graph
    unordered_map<int, bool> visited; // to stop exploring same nodes again and again.
	
    void createGraph(vector<vector<int>>& edges) {
      for (auto e: edges) {
        g[e[0]].push_back(e[1]); // adjecency list representation
		g[e[1]].push_back(e[0]); // adjecency list representation
      }
    }
  
    int dfs(int node, int myCost, vector<bool>& hasApple) {
	  if (visited[node]) {
		  return 0;
	  }
	  visited[node] = true;
	  
      int childrenCost = 0; // cost of traversing all children. 
      for (auto x: g[node]) { 
        childrenCost += dfs(x, 2, hasApple);  // check recursively for all apples.
      }

      if (childrenCost == 0 && hasApple[node] == false) {
	  // If no child has apples, then we won't traverse the subtree, so cost will be zero.
	  // similarly, if current node also does not have the apple, we won't traverse this branch at all, so cost will be zero.
        return 0;
      }
	  
	  // Children has at least one apple or the current node has an apple, so add those costs.
      return (childrenCost + myCost);
    }
  
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
      createGraph(edges); // construct the graph first.
      return dfs(0, 0, hasApple); // cost of reaching the root is 0. For all others, its 2.
    }

}; 