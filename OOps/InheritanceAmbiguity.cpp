#include<iostream>
using namespace std;

class A {
    public:
        void abc() {
            cout << "Class A";
        }
};

class B {
    public:
        void abc() {
            cout << "Class B";
        }
};

class C: public A, public B {
    public:
};


//Main Code
int main() {
    C obj;
    //With the help of this i can't use any function for PERVENT THIS we use scope resulation operator
    //obj.abc();

    obj.A::abc(); 
    cout << endl;
    obj.B::abc();
}
