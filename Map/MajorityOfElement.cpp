#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){

    vector<int> arr = {1, 2, 3, 3, 3, 3, 4, 4, 1, 2, 0};
    int n = arr.size();

    int element = 0;
    int count = 0
    for(int i = 0; i < n; i++){
        element = arr[i];
        for( ;i+1 < n; i+1++){

            if(element == arr[i+1]){
                count++;
            }

        }
        ans.push_back(count);
    }

    
}