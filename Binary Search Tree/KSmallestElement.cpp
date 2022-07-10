#include<iostream>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

TreeNode* crateBST(TreeNode* root, int d){

    if(root == NULL){
        root = new TreeNode(d);
        return root;
    }

    if(d < root->data){
    root->left = crateBST(root->left, d);
    }
    else{
    root->right = crateBST(root->right, d);
    }

}

void TakeInput(TreeNode* &root){

    int data;
    cin >> data;

    while(data != -1){
        root = crateBST(root, data);
        cin >> data;
    }
}

void inOrder(TreeNode* &root){

    if(root == NULL){
        return ;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int solve(TreeNode* root, int k, int &i){

    if(root == NULL){
        return -1;
    }

    // Call LNR

    int left = solve(root->left, k, i);
    if( left != -1){
        return left;
    }

    // Calling N

    i++;
    if(i == k){
        return root->data;
    }

    return solve(root->right, k, i);
}

int KthSmallestElement(TreeNode* root, int k){

    int i = 0;
    int ans = solve(root, k, i);

    return ans;
}

int main(){

    TreeNode* root = NULL;

    TakeInput(root);
    inOrder(root);
    cout << endl;

    int k = 3;
    int ans = KthSmallestElement(root, k);

    cout << ans;

    return 0;
}