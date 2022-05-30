#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){

    queue< int > q;
    //Using queue as a FIFO setup
    q.push(12);
    q.push(1);
    
    q.push(3);
    q.push(4);
    
    stack<int> s;
    //Using Stack as a LIFO setup 
    // And then use the Stack and push the data back to Queue and 
    //get the  reverse order of the 
    //Data

    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return 0;
}

// Time Complexity - O(n)
// Space Complexity - O(n)