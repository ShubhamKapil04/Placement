#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;
    while (row<=n)
    {
        // For First Triangle
        int col = 1;
        while (col<=n - row + 1)
        {
            cout << col ;
            col = col + 1;
        } 

        // For Second Triangle
         
        int space = row  - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int value = 1;
        while (value<=n+row+col)
        {
            cout << value;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    
}