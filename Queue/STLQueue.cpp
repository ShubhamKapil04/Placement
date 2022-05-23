#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue< int > q;
    q.push(24);
    q.push(45);
    q.push(667);

    cout << "Queue Size is --> " << q.size() << endl; 

    cout << "Front element in Queue --> " << q.front() << endl;

    q.pop();

    cout <<  "Front element in Queue --> " << q.front() << endl;

    q.pop();

    cout <<  "Front element in Queue --> " << q.front() << endl;

    cout << "Queue Size is --> " << q.size() << endl; 

    if(q.empty()){
        cout << "Queue is Empty ";    
    }
    else{
        cout << "Queue is not empty" <<endl;
    }
}