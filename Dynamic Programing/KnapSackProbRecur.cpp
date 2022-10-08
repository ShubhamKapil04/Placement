#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int SolveRec(vector<int> &weight, vector<int> &val, int index, int maxWeight){

    if(index == 0){
        if(weight[0] <= maxWeight) return val[0];

        else return 0;
    }

    int include = 0;

    if(weight[index] <= maxWeight)
        include = val[index] + SolveRec(weight, val, index-1, maxWeight - weight[index]);

    int exclude = 0 + SolveRec(weight, val, index-1, maxWeight);

    int ans = max(include, exclude);

    return ans;


}

int knapSack(vector<int> &weight, vector<int> &value, int n, int maxWeight){

    int ans = SolveRec(weight, value, n-1, maxWeight);

}

int main(){

    /*
    
    4
    1 2 4 5
    5 4 8 6
    5

    
    */


    vector<int> weight = {1, 2, 4, 5};
    vector<int> value = {5, 4, 8, 6};

    int maxWeight = 5;
    int n = 4;

    int ans = knapSack(weight, value, n, maxWeight);

    cout << ans;

    return 0;
}