#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree (Node* root, int d){

    if(root == NULL){
        root = new Node(d);
        return ;
    }

    if(root->data > d){
        root->left = buildTree(root-left, d);
    }
    else{
        root->right = buildTree(root->right, d);
    }
}

void takeInput(Node* &root){

    int data;
    cin >> data;
    while(!data){
        root = buildTree(root, d);
        cin >> data;
    }
}

void inOrder(Node* root){
    if(root == NULL)
    return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right); 
}
class TreeNode{
    public:
    int maxNode, minNode, maxSize;

    TreeNode(int minNode, int maxNode, int maxSize){
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
    }

};

class solution{
    public:
    TreeNode largestBSTinBT(TreeNode* root);
    // An empty tree is a size 0 BST

    if(root == NULL){
        return TreeNode(INT_MIN, INT_MAX, 0);
    }

    // Got the  Value of Left & Right Subtree of the Current Tree
    auto left = largestBSTinBT(root->left);
    auto right = largestBSTinBT(root->right);

    // Current Node is grater then max in left AND Smaller then min right, it is BST

    if(left.maxNode < root->val && root->val < right.minNode){
        // It is BST
        return TreeNode(min(root->val, left.maxNode), max(eoot->val, right.minNode), 
                left.maxSize + right.maxSize + 1);
    }
    // otherwise return [-info, info], so parent can't be a valid BST
    else{
            return TreeNode(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize) ); 
    }
};

int main(){

    Node* root == NULL;

    takeInput(root);

    inOrder(root);

    return 0;
}