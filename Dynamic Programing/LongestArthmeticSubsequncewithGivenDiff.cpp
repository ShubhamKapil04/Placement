#include<bits/stdc++.h>
using namespace std;


int solution(vector<int> &arr, int diff){

    unordered_map<int, int> dp;

    int ans = 0;

    for(int i = 0; i < arr.size(); i++){

        int temp = arr[i] - diff;
        int tempAns = 0;

        //Find that ans in dp
        if(dp.count(temp))
            tempAns = dp[temp];
        
        //Update the Ans

        dp[arr[i]] = 1 + tempAns;
        ans = max(ans, dp[arr[i]]);
    }

    return ans;
}

int main(){

    vector<int> arr = {1, 5, 7, 8, 5, 3, 4, 2, 1};
    int diff = -2;

    int ans =  solution(arr, diff);

    cout  << ans << endl;

    return 0;
}