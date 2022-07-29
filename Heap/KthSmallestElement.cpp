#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue <int> maxheap;

    int arr[] = {7, 10, 4, 3, 20, 15};
    int size = sizeof(arr)/sizeof(arr[0]);

    int k = 3;

    for(int i = 0; i < size; i++){
        maxheap.push(arr[i]);

        if(maxheap.size() > k){
            maxheap.pop();
        }
    }

    cout << maxheap.top() << endl;

    return 0;
}

