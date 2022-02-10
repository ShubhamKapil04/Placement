#include<iostream>
using namespace std;

/* 
   - - - 1 - - -
   - - 1 2 1 - -
   - 1 2 3 2 1 -
   1 2 3 4 3 2 1
   
*/


int main(){
      int n;
      cin >> n;

      int row = 1;
      // Print 1St traingle
      while (row<=n)
      {
        int space = n - row;
        while (space)
        {
           cout << " ";
           space = space - 1;
        }
        // Printing 2nd triangle
        int col = 1;
        while (col<=row)
        {
            cout << col;
            col = col + 1;
        }
        // Printing 3rd Triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
        row = row + 1;
        
        
        
      }
      
}