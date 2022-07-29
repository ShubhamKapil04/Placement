#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){

    priority_queue< int, vector<int>, greater<int> > minheap;
    vector<int> ans;

    int arr[] = { 6, 5, 3, 2, 8, 10, 9};
    int k = 3;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size; i++){
        minheap.push(arr[i]);
        if(minheap.size() > k){
            ans.push_back(minheap.top());
            minheap.pop();
        }
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
        // ans.pop_back();
    }

}