#include<iostream>
#include<queue>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {1, 1, 1, 3, 2, 2, 4};

    unordered_map< int, int > m;
    for(auto i: arr){
        m[arr[i]]++;
    }

    // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    // max Heap
    priority_queue<pair<int, int>> pq;
    for(auto i = m.begin(); i != m.end(); i++){
        pq.push(make_pair(i->second, i->first));
    }

    vector<int>ans;
    while(pq.size() > 0){
        int freq = pq.top().first;
        int element = pq.top().second;
        for(int i = 1; i <= freq; i++){
            cout << element << " ";
        }
        // ans.push_back(pq.top().second);
        pq.pop();
    }

    // for(int i = 0; i < ans.size(); i++){
    //     cout << ans[i] << " ";
    // }
}