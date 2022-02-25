#include<iostream>
using namespace std;

// Maximum number of output is defined with function
#define MAX 500

int Multiply(int x, int arr[], int arr_size);

// This function will help to find the factorial of large numbers
// and print them

void factorial(int n){
     int arr[MAX];
     
     // Intialize Result
     
     arr[0] = 1;
     int arr_size = 1;
     
     // Formula for the factorial
     
     for(int i = 2; i <= n; i++)
         arr_size = Multiply(i, arr, arr_size);   
         cout << " factorial of given number is : " ;
          
           for(int j = arr_size - 1; j >= 0 ; j--)
             cout << arr[j];
            
     
}

int Multiply(int x, int arr[], int arr_size){
    
    int carry =  0;
    // Intialize carry with 0
    
    //Now Multiply one by one n with the other element of array 
    
    for (int i = 0; i < arr_size; i++){
        int prod = arr[i] * x + carry;
        
        // Store last digit of  prod in arr[]
        
        arr[i] = prod % 10;
        
        // Put other in carry
        
        carry = prod / 10;
    }
    
    // Put carry in the array and increase Result sizeof
    
    while(carry){
         arr[arr_size] = carry%10;
         carry = carry/10;
         arr_size++;
    }
    return arr_size;
}

int main(){
    factorial(10);
    return 0;
}