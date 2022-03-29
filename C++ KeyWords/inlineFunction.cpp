#include<iostream>
using namespace std;

inline int getMax(int& i, int& j)
{
    return (i>j) ? i : j;
}
// Thi is the inline function
// inline function wrok with 1 line 
// 2 - 3 lines depends on the compiler
// more then the 3 line is not a inline function

int main()
{
    int i = 5;
    int j = 3;
    int ans = 0;

    ans = getMax(i, j);
    cout << ans << endl;
    //ans = (i>j) ? i : j;
    // This is know as Turcry operators
    // the syntax is condition  ? --> syntax a : ---> true
    // : b --> false

    i = i + 3;
    j = j + 9;

    ans = getMax(i, j);
    cout << ans << endl;


    return 0;
}