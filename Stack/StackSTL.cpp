#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //Creating Stack using STL
    stack< int > s;
    s.push(12);
    s.push(34);

    cout << "is empty " << s.empty() << endl;
    s.pop();
    cout << s.top() << endl;

    cout << "is empty " << s.empty() << endl;
    cout << "Size of stack is ---> " << s.size() << endl;


    s.pop();
    // cout << s.top() << endl;

    cout << "is empty " << s.empty() << endl;
    cout << "Size of stack is ---> " << s.size() << endl;
}