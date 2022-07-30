#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){

    priority_queue< pair < int, int > > maxHeap;

    int arr[] =  {5, 6, 7, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 7;
    int k = 3;

    for(int i = 0; i < size; i++){
        maxHeap.push(abs(arr[i] - x) , arr[i]);
        if(maxHeap.size() > k){
            maxHeap.pop();
        }
    }

    while(!maxHeap.size()){
        cout << maxHeap.top().second << " ";
        maxHeap.pop();
    }

    return 0;
}