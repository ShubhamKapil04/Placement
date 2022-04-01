#include<iostream>
using namespace std;

int fib(int n)
{
    // Base case
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }

    // Recursive Relation 
    //int ans = fib(n-1) + fib(n-2);

    int fibonacci1 = fib(n-1);
    int fibonacci2 = fib(n-2);

    int ans = fibonacci1 + fibonacci2;

   // Process
   
   return ans;
}

int main()
{
    int n;
    cin >> n;

    int ans = fib(n);
    cout << ans;
    return 0;
}