#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// type def pair<int, pair<int, int>> ppi;

int main(){

    priority_queue<int, vector<int>, greater<int> > minheap;
    vector< int > ans;
    int arr[] ={7, 10, 4, 3, 20, 15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    for(int i = 0; i < size; i++){
        minheap.push(arr[i]);

        if(minheap.size() > k){
            minheap.pop();
        }
    }

    while (minheap.size() > 0)
    {
        ans.push_back(minheap.top());
        minheap.pop();
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    
    
    return 0;
}