#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int i = 2;
    int sum = 0;
    while (i<=n)
    {
        cout << i << endl;
        sum = sum + i;
        i = i + 2;

    }

    cout <<"The Total sum of even no is "<< sum << endl;
    
}