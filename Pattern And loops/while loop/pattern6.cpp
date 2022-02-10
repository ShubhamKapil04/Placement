#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;

    while (row<=n)
    {
        int col = 1;
        while (col<=row)   // Here output will be depends upon row not on the n value
        {
            cout << "*" << " ";
            col = col + 1;

        }
        cout << endl;
        row = row + 1;
        
    }
    
}