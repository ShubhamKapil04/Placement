#include<iostream>
using namespace std;

// passing defined value in various function
// Also Know as Macro
#define A 45

int updateVar(int a)
{
    //Passing value from main to function
    int j = 90;
    A++;
    cout << A << endl;
    int sum = j + A + a;
    cout << "sum in upadte function --> "<< sum << endl;
    return sum;
}

int main()
{
    int a = 8;
    int sum = a+A;

    updateVar(a);
    cout << sum;

    cout << A << endl;

    return 0;
}