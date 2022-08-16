#include<iostream>
#include<string.h>
using namespace std;

int main(){

    string str = {"coding", "code", "coders", "codingNinja"};
    int size = str.size();

    for(int i = 0; i < size; i++){
        cout << str[i] <<  " ";
    }
    return 0;
}