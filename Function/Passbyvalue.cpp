#include<iostream>
using namespace std;

void dummy(int n){

    n++;
    cout << "Value of n is : "<< n << endl;
    return ;
}

int main(){

    int a;
    cin >> a;

    dummy(a);

    cout << "Number A is : "<< a << endl;

    return 0;
}