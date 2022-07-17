#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//Crate Classs
class Node{

    public:
    int d;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* solve(Node* pre, int mini, int maxi, int &i){

    if(i >= pre.size())
    return NULL;

    if(pre[i] < mini || pre[i] > maxi)
    return NULL;

    Node* root = new Node(pre[i++]);
    root->left = solve(pre, mini, root->data, i);
    root->right = solve(pre, root->d);

    return root;
}

Node* buildTreePreOrderBST(vector< int>& pre){
    int mini = INT_MIN;
    int maxi = INT_MAX;
    int i = 0;

    solve(pre, mini, maxi, i);
}

int main(){
    
    Node* root = NULL;

    cout << "Build a tree " << endl;

    int n = 7;
    vector< int > preOrder;
    
    for(int i = 0; i < n; i++){
        cin >> preOrder[i];
    }

    Node* preOrderToBST = buildTreePreOrderBST(preOrder);

    return 0;

}