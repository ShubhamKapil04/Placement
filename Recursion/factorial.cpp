#include<iostream>
using namespace std;

int factorial(int n)
{
    // Base case it is important to write base case in recursion
    if(n == 0)
    {
        return 1;
    }
    //Recursive Relation
    //int smallProb = factorial( n - 1);
    //int bigProb = n * smallProb;

    return n * factorial( n - 1);
}

int main()
{
    int n;
    cin >> n;

    int ans = factorial(n);
    cout << ans;


    return 0;
}
