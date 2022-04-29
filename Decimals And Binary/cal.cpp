#include<iostream>
using namespace std;

int main(){

    //creating variable in static memoery
    int a, b;

    cin >> a;
    cin >> b;

    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    
    case '-':
        cout << a - b << endl;
        break;

    case '*':
        cout << a * b << endl;
        break;

    case '/':
        cout << a / b << endl;
        break;
    
    default:
       cout << "Enter the valid operator" << endl;
        break;
    }
}