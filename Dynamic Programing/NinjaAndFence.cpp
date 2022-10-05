#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define MOD 1000000007

int add(int a, int b){
    return ((a % MOD + b % MOD) % MOD);
}

int mul(int a, int b){
    return ((a % MOD * (b % MOD))% MOD);
}

int numberofWay(int n, int k){

    if(n == 1) return k;
    if(n == 2) return add(k, mul(k, k-1));

    int ans = add(mul(numberofWay(n-2, k), k-1), mul(numberofWay(n-1, k), k-1));

    return ans;
}

int main(){

    int n = 3;
    int k = 3;

    int ans = numberofWay(n, k);
    cout << ans;

    return 0;
}