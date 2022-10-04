#include<iostream>
#include<bits/stdc++.h>  
using namespace std;

#define MOD 1000000007

int countDerangements(int n) {
    
    if(n == 1) return 0;
    if(n == 2) return 1;
    
    int ans = (n - 1) * (countDerangements(n-1) % MOD + countDerangements(n-2) % MOD) % MOD;
    return ans;
}

int main(){

    int n = 3;

    int ans = countDerangements(n);

    cout << ans;

    return 0;
}