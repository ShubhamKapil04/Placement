#include<iostream>
using namespace std;

int main(){

    int amount;
    cout << " Total number of cash ";
    cin >> amount;
    
    int RS100, RS50, RS20, RS10;

    switch (1)
    {
    case 1:
        RS100 = amount / 100 ;
        amount = amount % 100 ;
        cout << "100 Notes : " << RS100  << endl;
         
    
    case 2:
        RS50 = amount / 50;
        amount = amount % 50;
        cout << "50 Notes : " << RS50 << endl;

    case 3:
        RS20 = amount / 20;
        amount = amount % 20;
        cout << "20 Notes : " << RS20 << endl;
    
    case 4:
        RS10 = amount / 10;
        amount = amount % 10;
        cout << "10 Notes : " << RS10 << endl;
    
    }


   return 0;
}