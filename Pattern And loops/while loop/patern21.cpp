#include<iostream>
using namespace std;
 
int main(){
   /*
      * * * *
      * * *       n - row + 1; 
      * *
      * 
   */


    int n;
    cin >> n;
    
    int row = n ;
        
   while (row>0)  
   {
       int col = 1;
       while (col<=row)
       {
           cout << "*" << " " ;
           col = col + 1;             
       }
       cout << endl;
       row = row - 1;
   }

}