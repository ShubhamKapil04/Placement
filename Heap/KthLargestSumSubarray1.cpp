#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {3, 2, 1};
    int k = 2;

    priority_queue<int, vector<int>, greater<int> >pq;

    for(int i = 0; i< arr.size(); i++){
        int sum = 0;
        for(int j = i; j < arr.size(); j++){

            sum += arr[j];
            
            if(pq.size() < k){
                pq.push(sum);
            }
            else{

                if(sum > pq.top()){
                    pq.pop();
                    pq.push(sum);
                }
            }
        }
    }
    cout << pq.top() << endl;
}