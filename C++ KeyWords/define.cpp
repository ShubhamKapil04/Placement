#include<iostream>
using namespace std;

// Decleration of define keyWord
#define PI 3.146

int main(){

    int i = 5;
    // Here we defined a value Pi which can be use as a constant
    //but if we want it to call in multiple function be have to declare it
    // again an again in the other functions So we are going to use #define keywors
    //double pi = 3.14;

    double area = PI * (i*i);

    cout << area << endl;

    return 0;
}