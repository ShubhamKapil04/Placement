#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){

    vector<int> arr1 ={1, 2, 3, 4, 5};
    int n = arr1.size();
    vector<int> arr2 ={2, 4, 6, 8};
    int m = arr2.size();

        int intersectionSize = 0;
        unordered_map < int, int > ma;

        for (int i = 0; i < n; i++)
        ma[arr1[i]] = 1;
        
        
        for (int i = 0; i < m; i++) {
            if (ma.count(arr2[i]) == 1)
            intersectionSize++;
        }

    int unionSize = n + m - intersectionSize;
    pair < int, int > res;
    res.first = intersectionSize;
    res.second = unionSize;

    cout << res.first<< " " << res.second << endl;

    // int m = arr2.size();
    // int count = 0;
    // int union1 = m+n;

    // for(int i = 0 ; i< n; i++ ){
    //     for(int j = 0; j < m; j++){
    //         if(arr1[i] == arr2[j]){
    //             count++;
    //             union1 = union1 - 1;
    //         }
    //     }
    // }

    // pair<int, int> ans;
    // ans.first = count;
    // ans.second = union1;

    // cout << ans.first << " " << ans.second << endl;

    return 0;

}