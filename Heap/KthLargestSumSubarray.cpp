#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    // vector <int> arr = 3, 2, 1;
    int arr[] = {3, 2, 1};
    int k = 5;
    int n = sizeof(arr)/sizeof(arr[0]);

    // priority_queue<int, vector<int>, greater<int> > pq;

    vector<int> ans;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            ans.push_back(sum);
            
        }
    }

    sort(ans.begin(), ans.end());

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    cout << ans[ans.size() - k] << endl;

}