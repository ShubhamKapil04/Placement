#include<iostream>
using namespace std;


int solve(int n, int i){
    //Base case
    if(i == n){
        return 1;

    }

    if(i > n){
        return 0;
    }


    return solve(n, i+1) + solve(n, i+2);
}


int main(){

    int n;
    cin >> n;

    int i = 0;
    int ans = solve(n, i);

    cout << ans << endl;
    return 0;
}

// Time Complexity --> O(2^n)
//Space Complexity --> O(n)