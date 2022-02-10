#include<iostream>
using namespace std;

int main(){

    char ch;
    cout << "Enter the Character" ;
    cin >> ch;

    if (ch >= 65 && ch <= 90)
    {
        cout << "The character is Upper case "<< ch << endl;
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "The Character is Lower case "<< ch << endl;

    }

    else {

     cout << "The Character is numarical " << ch << endl;

    }
}
