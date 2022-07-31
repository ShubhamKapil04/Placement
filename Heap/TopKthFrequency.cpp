#include<iostream>
#include<queue>
#include<unordered_map>
#include<bits/stdc++.h>

using namespace std;

int main(){

    // int arr[] = {1, 1, 1, 3, 2, 2, 4};
    // int size = sizeof(arr)/sizeof(arr[0]);
    vector< int > arr = { 1, 1, 1, 3, 2, 2 , 4};
    int k = 2;
    
    unordered_map<int, int> m;
    // for(int  i = 0; i < size; i++){
    for(auto i: arr){    
        m[arr[i]]++;
    }


    priority_queue< pair<int, int> , vector< pair<int, int>>, greater< pair<int, int>> > pq;

    // for(int i = pqp.begin(); i < pqp.end(); i++){
    for(auto i = m.begin(); i != m.end(); i++  ){
        pq.push(make_pair(i->second, i->first));

        if(pq.size() > k){
            pq.pop();
        }
    }

    vector< int > ans;
    while(!pq.empty()){
        // cout << pq.top().second << " ";
        ans.push_back(pq.top().second);
        pq.pop();
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    // for(int i = 0; i < arr.size(); i++){
    //     cout << arr[i] << endl;
    // }

}