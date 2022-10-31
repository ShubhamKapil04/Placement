#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int> &a, vector<int> &b){

    if(a[0] == b[0])
        return a[1] > b[1];
    
    return a[0] < b[0];

}

int main(){

    vector<vector<int>> russianDoll = {{5, 4}, {2, 3}, {6, 4}, {6, 8}};

    // Sort the array
    int n = russianDoll.size();
    sort(russianDoll.begin(), russianDoll.end(), cmp);

    vector<int> ans;
    ans.push_back(russianDoll[0][1]);

    for(int i = 1; i < n ; i++){
        
        if(russianDoll[i][1] > ans.back()){
            ans.push_back(russianDoll[i][1]);
        }else{ 

            // this will give the exact index value
            int ind = lower_bound(ans.begin(), ans.end(), russianDoll[i][1]) - ans.begin();

            ans[ind] = russianDoll[i][1];
        }
    }

    cout << ans.size() << endl;

    return 0;
}