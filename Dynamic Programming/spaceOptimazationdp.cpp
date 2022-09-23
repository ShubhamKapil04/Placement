#include<iostream>
#include<vector>

using namespace std;


int main(){

    int n;
    cin >> n;

    int prev1 = 1;
    int prev2 = 0;

    if(n==0){
        cout <<  prev2 << endl;
        return 0;
    }

    
    for(int i = 2; i <= n; i++){

        int curr = prev1 + prev2;

        // shifting logic

        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1 << endl;

    return 0;

}
// TC --> O(n);
// SC --> O(n) + O(n)