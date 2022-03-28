#include<iostream>
using namespace std;


void update(int& a)
{
    // this a is loacal variable for this function
    cout << a << endl;
}

int main()
{
    int i = 5;
    // This is the local varaible for this function

    update(i);
    cout << i << endl;

    return 0;
}
