#include<iostream>
using namespace std;

int main(){

    int a = 10;
    char b = 'x';

    void *p = &a;
    // void pointer hold the address of int a;
    cout << p << endl;
    cout << &b << endl;
    cout << a << endl;
    p = &b;
    // void pointer hold address of char 'b'.....
    return 0;
}