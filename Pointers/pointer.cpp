#include<iostream>
using namespace std;

int main()
{
    int n = 100;

    int *p = &n;

    // To get the address of n which is given to the value of N
    cout << p << endl;

    // to get the Value at the Pointer  p;

    cout << *p << endl;

    cout << *p + 1 << endl;

    cout << p+1;

    return 0;
}