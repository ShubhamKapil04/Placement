#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 3, 3, 3, 4, 4, 1, 2, 0, 4};
    int n = arr.size();
    int k = 4;

    
  
    // vector<bool> visited(n, false);
    unordered_set<int> ans;

    for (int i = 0; i < n; i++)
    {

        // if (visited[i] = true)
        //     continue;

        int count = 1;

        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] == arr[j])
            {
                // visited[j] = true;
                count++;
                
            }
            
        }
        // cout << arr[i] << " " << count << endl;
        if(count >= n/k){
            
            ans.insert(arr[i]);
        }
    }
    vector < int > ans1(ans.begin(), ans.end());

    for (int i = 0; i < ans1.size(); i++)
    {
        cout << ans1[i] << " ";
    }
}