#include<iostream>
using namespace std;

int main(){

    int i = 65;

    cout << "Value at i is ---> " << i << endl;

    cout << "Address of i is --> " << &i << endl;
    // Created the pointer which stored the address of i;
    int *p = &i;

    // Value stored at pointer *p is 

    cout << "Value stored at p is ---> " << p << endl;
    cout << "Value stored at *p is ---> " << *p << endl;
    cout << "Address stored at p is ---> " << &p << endl;


    char *pc = (char*) p;

    // pointer typecasting integer to charcter throw expilicity typecasting

    cout << "value at pc is --> " << pc << endl;
    cout << "value at *pc is --> " << *pc << endl;
    cout << "Address at *pc is --> " << &pc << endl;



    return 0;
}