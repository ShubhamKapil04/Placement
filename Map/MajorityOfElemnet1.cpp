#include<iostream>
#include<unordered_map>
#include<vector>
#include<map>

using namespace std;

int main(){

    vector<int> arr = {1, 2, 3, 1, 1, 1, 2, 2, 4, 1, 2, 1};
    int n = arr.size();

    int k = 4;

    vector<int> ans;
    map<int, int> m;

    for(int i = 0; i < n; i++)
    m[arr[i]]++;

    for(auto i: m){
        if(i.second >= n / k){
            ans.push_back(i.first);
        }
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}