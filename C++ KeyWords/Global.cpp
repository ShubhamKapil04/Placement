#include<iostream>
using namespace std;

int Score = 90;
// This  is the Flobal Variable

void update(int& a)
{
    // this a is loacal variable for this function
    cout << a << endl;
    cout << Score << " int upadate Function" << endl;
}

int main()
{
    int i = 5;
    // This is the local varaible for this function

    update(i);
    cout << i << endl;

    cout << Score << " <--in Main function" << endl;

    return 0;
}