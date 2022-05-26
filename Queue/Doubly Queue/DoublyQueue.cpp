#include<iostream>
#include<queue>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_front(124);
    dq.push_back(54);

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    dq.pop_back();

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    if(dq.empty()){
        cout << "Queue is Empty" << endl;
    }
    else{
        cout << "Queue is not empty" <<endl;
    }

    dq.pop_front();

    
    cout << dq.front() << endl;
    cout << dq.back() << endl;

    
    if(dq.empty()){
        cout << "Queue is Empty" << endl;
    }
    else{
        cout << "Queue is not empty" <<endl;
    }

    return 0;
}