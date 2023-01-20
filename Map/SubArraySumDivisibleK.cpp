#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int subArrayDivK(vector<int> &nums, int k){

    unordered_map<int,int> map;

    map[0] = 1;
    int ans = 0;
    int sum = 0;
    
    for(int i = 0; i < nums.size(); i++){

        sum = sum + nums[i];
        cout << "sum of this line" << i << " " << sum << endl;
        int remider = sum % k;
        if(remider < 0){
            cout << "remider bfore additiion" << remider << endl;
            remider = remider + k;
            cout << "remider after addition " << remider << endl;
        }
        ans = ans + map[remider];
        cout << "Ans at each call " << i << "  " << ans << endl;
        map[remider]++;
        // cout << "remider at each call" << i << "  " << map[remainder] << endl;
    }

    for(auto i: map)
        cout << i.first << " -->  " << i.second << endl;

    return ans;
}

// void mapi(vector<int> &nums, int k){

//     unordered_map<int, int> mp;

//     for(auto i: nums){
//         mp[i]++;
//     }

//     for(auto i:mp){
//         cout << i.first << " --> " << i.second << endl;
//     }

// }

int main(){

    vector<int> nums = {4, 5, 0, -2, -3, 1};
    int  k = 5;

    // mapi(nums, k);

    // int subArrayDivbyK(nums, k);

    int ans = subArrayDivK(nums, k);

    cout << ans << endl;
    return 0;
}

