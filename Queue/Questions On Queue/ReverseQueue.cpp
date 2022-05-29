#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){

    queue< int > q;
    q.push(12);
    q.push(1);
    
    q.push(3);
    q.push(4);
    
    stack<int> s;

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