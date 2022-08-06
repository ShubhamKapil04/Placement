#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include <iomanip>
using namespace std;


class node{
    public:
    int val;
    int i;
    int j;

    node(int data, int row, int col){
        this->val = data;
        i = row;
        j = col;
    }
};

class compare{
    public:
    bool operator()(node* a, node* b){
        return a->val > b->val;
    }
};


int main(){

    vector<vector<int>> arr = { {1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};

    int k = 3;

    priority_queue<node*, vector<node*>, compare> pq;

    for(int i = 0; i < k; i++){
        node* temp = new node(arr[i][0], i, 0);
        pq.push(temp);
    }

    vector<int> ans;
    // Step 2
    while(pq.size() > 0){
        node* temp = pq.top();

        ans.push_back(temp->val);
        pq.pop();

        int i = temp->i;
        int j = temp->j;

        if(j+1 < arr[i].size()){
            node* next = new node(arr[i][j+1], i, j+1);
            pq.push(next);
        }
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
         
    return 0;
}