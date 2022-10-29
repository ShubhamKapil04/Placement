#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int solveSO(int a[], int n){

        vector<int> currRow(n+1, 0);
        vector<int> nextRow(n+1, 0);

        for(int curr = n-1; curr>=0; curr--){
            for(int prev = curr-1; prev>=-1; prev--){

                int take = 0;
                if(prev == -1 || a[curr] > a[prev]){
                    take = 1 + nextRow[curr + 1];
                }

                int notake = 0 + nextRow[prev+1];

                currRow[prev+1] = max(take, notake);
            }
            nextRow = currRow;
        }

        return nextRow[0];
    }

    int longestSubseq(int a[], int n){

        return solveSO(a, n);

    }

};

int main(){

    int n = 6;
    int a[n] = {5, 8, 3, 7, 9, 1};

    //output -> 3;

    Solution ob;

    cout << ob.longestSubseq(a, n) << endl;
}