#include<iostream>
using namespace std;

int main(){

    int n;
    cout << " Total number of cash ";
    cin >> n;
    
    int cash = 100;

    switch (cash)
    {
    case 100:
        cash = n / 100 ;
        cout << "100 Notes : " << cash  << endl;
    
    case 50:
        
        cash = cash / 50;
        cout << "50 Notes : " << cash << endl;

    case 20:
        
        cash = cash/ 20;
        cout << "20 Notes : " << cash << endl;
    
    case 10:

        cash = cash/ 10;
        cout << "10 Notes : " << cash << endl;
    
    }



}