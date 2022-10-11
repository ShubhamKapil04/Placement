#include<bits/stdc++.h>
using namespace std;


int solveRec(int n){

    if(n == 0) return 0;

    int ans = n;

    for(int i = 1; i*i <= n; i++){

        int temp = i*i;

        ans = min(ans, 1 + solveRec(n - temp));

    }

    return ans;
}


int main(){

    int n = 6;

    int ans = solveRec(n);


    cout << ans << endl;

    return 0;

}