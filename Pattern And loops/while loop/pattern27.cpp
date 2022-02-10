#include<iostream>
using namespace std;

int main(){

    /* - - - 1
       - - 2 3
       - 4 5 6
       7 8 9 10
             */

    int n;
    cin >> n;

    int row = 1;
    int count = 1;
    while (row<=n)
    {
     // 1st triangle

     int space = n - row;
     while (space)
     {
         cout << " ";
         space = space - 1;
     }

     // 2nd Triangle

     int col = 0 ;
     while (col<=row - 1)
     {
         cout << count ;
         count = count + 1;
         col = col + 1;
     } 
     cout << endl;
     row = row + 1;
    }
    
    
   
    
    
}