#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<string> str = {"coding", "coder", "coders"};
   string ans =" ";
    
    int index = 0;
    for(int i = 0; i < str.size(); i++){
      for(int j = i+1; j < str.size(); j++){
          if(str[i][index] == str[j][index]){
               ans = str[i][index];
               cout << ans;
               index++;
          }else{
              break;
          }
        }
    }
    
    // for(int i = 0; i < ans.size(); i++){
    //     cout << ans[i];
    // }
    
}