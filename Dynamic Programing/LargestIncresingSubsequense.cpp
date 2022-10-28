#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:

    int solveRec(int n, int a[], int curr, int prev){

        //base case
        if(curr == n) return 0;
        

        int take = 0;
        if((prev == -1) || (a[curr] > a[prev])){   
            take = 1 + solveRec(n, a, curr+1, curr);
        }

        int notake = 0 + solveRec(n, a, curr+1, prev);

        return max(take, notake);
    }

    int longestSubsequence(int n, int a[]){

        return solveRec(n, a, 0, -1);

    }
};

int main(){

    int n = 6;
    int a[n] = {5, 8, 3, 7, 9, 1};

    //Output = 3;

    Solution Sol;

    cout<< Sol.longestSubsequence(n, a) << endl;

}