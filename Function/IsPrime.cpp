#include<iostream>
using namespace std;

bool IsPrime(int n){

    // 1 ---> Prime
    // 0 ---> not a Prime

    for (int i = 2; i < n; i++)
    {
        // Divide ho gya h, not a prime no.
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}

int main(){
    int a;
    cin >> a;

    if (IsPrime(a))
    {
        cout << "Is a Prime Number" << endl;
    }
   else {
    cout << " Not a Prime Number" << endl;
   }
    return 0;
    
}