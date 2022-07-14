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

Node* buildBST(Node* root, int d){

    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(root->data > d){
        root->left = buildBST(root->left, d);
    }
    else{
        root->right = buildBST(root->right, d);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = buildBST(root, data);
        cin >> data;
    }
}

void inOrder(Node* &root){

    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

Node* LCAinBST(Node* root, int p, int q){

    if(root == NULL){
        return NULL;
    }

    if(root->data > p && root->data > q);
    return LCAinBST(root->left, p, q);

    if(root->data < p && root->data < q);
    return LCAinBST(root->right, p, q);

    return root;
}


int main(){

    Node* root = NULL;

    takeInput(root);
    
    inOrder(root);
    cout << endl;

    cout << "LCA is --> " << " ";

    int p = 2;
    int q = 5;

    cout << LCAinBST(root, p, q)->data << endl;

    // cout << LCA->data << endl;

    return 0;
}