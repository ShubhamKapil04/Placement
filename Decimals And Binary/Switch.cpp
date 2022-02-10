#include<iostream>
using namespace std;
int main(){

    int num = 1;
    char ch = 'a';

    switch (ch)
    {
    case 1:
        cout << "First" << endl;
        break; 

    case '1':
        cout << "Second" << endl;
        break;               
    
    default: cout << "Somthing else" << endl;
        break;
    }

}