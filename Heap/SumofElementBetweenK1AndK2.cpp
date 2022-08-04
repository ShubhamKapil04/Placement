#include<iostream>
#include<queue>

using namespace std;

int kthSmallest(vector<int>& arr, int k){

    priority_queue<int> pq;

    for(int i = 0; i < arr.size(); i++){
        pq.push(arr[i]);
        if(pq.size() > k){
            pq.pop();
        }
    }

    return pq.top();
}

int main(){

    vector< int > arr = {1, 3, 12, 5, 15, 11};
    int k1 = 3;
    int k2 = 6;

    int firstElement = kthSmallest(arr, k1);
    int secondElement = kthSmallest(arr, k2); 

    cout << firstElement << endl;
    cout << secondElement << endl;
    int sum = 0;

    for(int i = 0; i < arr.size(); i++){

        if(arr[i] > firstElement && arr[i] < secondElement){
            sum+=arr[i];
        }
    }

    cout << sum << endl;
}