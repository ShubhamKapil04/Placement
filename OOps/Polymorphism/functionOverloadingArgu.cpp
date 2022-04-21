#include<iostream>
using namespace std;

class A{

    public:

    void sayHello(int a){
        cout << "Hello Shubham" << endl;
    }

    void sayHello(char c){
        cout << "Hello Kartik" << endl;
    }
    void sayHello(){
        cout << "Hello Harsh" << endl;
    }
};

class B{

    public:


};



int main(){

    //here with the help of change in arrgument we can access the same name function 
    A obj1;
    obj1.sayHello(2);
    obj1.sayHello('A');
    obj1.sayHello();

}