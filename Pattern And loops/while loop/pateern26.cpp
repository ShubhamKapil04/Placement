#include<iostream>
using namespace std;

int main(){

    /* 1 2 3 4
         2 3 4
           3 4
             4
             */

    int n;
    cin >> n;
    
    int row = 1;
    while (row<=n)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        
        int col =  1;
        
        while (col<=row)
        { 
            cout << col ;
            
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
        
    }
    
}