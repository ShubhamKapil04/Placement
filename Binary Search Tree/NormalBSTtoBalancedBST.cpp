#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this-> left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root, int d){
    if (root == NULL)
    {
        Node* root = new Node(d);
        return root;
    }

    if(root->data > d){
        root->left = buildTree(root->left, d);
    }
    else{
        root->right = buildTree(root->right, d);
    }

    return root;
}

void takeInput(Node* &root){

    int data;
    cin >> data;

    while(data != -1){
        root = buildTree(root, data);
        cin >> data;
    }

}

void inOrder(Node* &root, vector< int > &in){

    if(root == NULL){
        return ;
    }

    inOrder(root->left, in);
    in.push_back(root->data);
    inOrder(root->right, in);
}

Node* inorderToBST(int s, int e, vector< int>& in){
    if(s>e)
    return NULL;

    int mid = s+(e-s)/2;

    Node* root = new Node(in[mid]);

    root->left = inorderToBST(s, mid-1, in);
    root->right = inorderToBST(mid+1, e, in);

    return root;
}

Node* balancedBST(Node* root){

    vector< int > inOrderVal;

    inOrder(root, inOrderVal);

    return inorderToBST(0, inOrderVal.size()-1, inOrderVal);
}

int main(){

    Node* root = NULL;

    takeInput(root);

    Node* buildBST = balancedBST(root);
    
}