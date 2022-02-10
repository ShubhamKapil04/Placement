#include<iostream>
using  namespace std;

int main(){

    float fah, cel;

    cout << "Enter the value in Celsius: ";
    cin >> cel;

    fah = (9.0/5.0) * cel + 32;

    cout << cel << " Converstion to " << fah << endl;
}