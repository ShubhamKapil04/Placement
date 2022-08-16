#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

string longgestCommonPrefix(vector<string> &arr, int n){

    string ans = "";

    for(int i = 0; i < arr[0].length(); i++){

        //take char out
        char ch = arr[0][i];

        bool match = true;

        for(int j = 1; j < n; j++){
            if(ch != arr[j][i]){
                match = false;
                break;
            }
        }

        if(match == false)
            break;
        else
         ans.push_back(ch);
    }
    return ans;
}

int main(){

    vector<string> str = {"car", "cus", "cart", "carat"};
    int size = str.size();
    int TotalString = 10;

    string ans = longgestCommonPrefix(str, size);

    for(int i = 0; i < ans.length(); i++){
        cout << ans[i];
    }
}