#include<bits/stdc++.h>
using namespace std;

int SolveRec(vector<int> &days, vector<int> &costs, int n, int index){

    //base case
    if(index >= n) return 0;

    int option1 = costs[0] + SolveRec(days, costs, n, index + 1);

    int i;
    for(i = index; i < n && days[i] < days[index] + 7; i++);

    int option2 = costs[1] + SolveRec(days, costs, n, i);

    for(i = index; i < n && days[i] < days[index] + 30; i++);

    int option3 = costs[2] + SolveRec(days, costs, n, i);

    return min(option1, min(option2, option3));
}

int minCostTicket(vector<int> &days, vector<int> &costs){

    int n = days.size();

    return SolveRec(days, costs, n, 0);
}

int main(){

    vector<int> days = {1,4,6,7,8,20};
    vector<int> costs = {2,7,15};

    int ans = minCostTicket(days, costs);
    cout << ans << endl;
    return 0;
}