#include<iostream>
#include<queue>
using namespace std;

int main(){

    // Cration of maxheap by stl
    priority_queue<int> maxheap;

    maxheap.push(12);
    maxheap.push(45);
    maxheap.push(56);
    maxheap.push(60);
    maxheap.push(23);

    cout << "size of heap is --> " << maxheap.size() << endl;

    for(int i = 0; i , maxheap.size(); i++){
        cout << maxheap.top() << " ";
        maxheap.pop();
    }
    cout << endl;

    // maxheap.pop();
    // cout << "the top element in heap is--> " << maxheap.top() << endl;

    // Min heap

    priority_queue<int, vector<int>, greater<int> > minheap;
    
    minheap.push(12);
    minheap.push(45);
    minheap.push(56);
    minheap.push(60);
    minheap.push(23);

    cout << "size of heap is --> " << minheap.size() << endl;

    for(int i = 0; i , minheap.size(); i++){
        cout << minheap.top() << " ";
        minheap.pop();
    }
    cout << endl;

    // minheap.pop();
    // cout << "the top element in heap is--> " << minheap.top() << endl;
}