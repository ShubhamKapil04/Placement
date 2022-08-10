// Maximum frequency Number



#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<climits>

using namespace std;

int main(){

    vector<int> arr = { 1, 2, 3, 1, 2, 1};

    /* using unorder map */

    unordered_map<int, int> map;
    int maxFreq = 0, maxAns = 0;

    for(int i = 0; i < arr.size(); i++){
        map[arr[i]]++;
        maxFreq = max(maxFreq, map[arr[i]]);
    }

    int maxi = INT_MIN;
    int ans = 0;

    for(auto i:map){
        if(i.second > maxi)
        maxi = i.second;
        ans = i.first;
    }

    cout << ans <<" "<< maxi << endl;
}