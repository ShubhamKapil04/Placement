#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define MOD 1000000007

int add(int a, int b){
    return ((a % MOD + b % MOD) % MOD);
}

int mul(int a, int b){
    return ((a % MOD * 1LL* (b % MOD))% MOD);
}

int numMemo(vector<int> &dp, int n, int k){
    
    if(n == 1) return k;
    if(n == 2) return add(k, mul(k, k-1));

    if(dp[n] != -1) return dp[n];


    dp[n] = add(mul(numMemo(dp, n-2, k), k-1), mul(numMemo(dp, n-1, k), k-1));

    return dp[n];
}

int numberofWay(int n, int k){

    vector<int> dp(n+1, -1);

    return numMemo(dp, n, k);
}

int main(){

    int n = 4;
    int k = 3;

    int ans = numberofWay(n, k);
    cout << ans;

    return 0;
}