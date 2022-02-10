#include<iostream>
using namespace std;

// function Signature
void PrintCounting(int n){

    // Function Body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    
    int b;
    cout << "Enter the Number : ";
    cin >> b;
    
    //Finction Call

    PrintCounting(b);

    return 0;

}