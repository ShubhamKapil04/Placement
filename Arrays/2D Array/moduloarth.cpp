#include<iostream>
using namespace std;

int mod(int n, int p)
{
    if(n >= p)
    return 0;

    int result = 1;

    for(int i = 1; i <= n ; i++)
    {
        result = (result*i)%p;
    }

    return result;
}

int main()
{
    int n = 20;
    int p = 30;
    
    int ans =  mod(n, p);

    cout<< ans ;
    return 0;
}