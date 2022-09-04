#include<iostream>
using namespace std;

void recursiveCall(int n){

    //base call
    if(n > 9){
        return;
    }

    cout << n << " ";

    recursiveCall(n+1);

}

int main(){

    int a = 1;

    recursiveCall(a);

    return 0;
}