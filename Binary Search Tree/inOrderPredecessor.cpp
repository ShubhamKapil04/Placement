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

Node* creatBST(Node* root, int data){

    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(root->data > data){
        root->left = creatBST(root->left, data);
    }
    else{
        root->right = creatBST(root->right, data);
    }
}

void takeInput(Node* &root){

    int data;
    cin >> data;

    while(data != -1){
        root = creatBST(root, data);
        cin >> data;
    }
}

void inOrder(Node* root){

    if(root == NULL)
    return;

    inOrder(root->left);
    cout << root->data <<" ";
    inOrder(root->right);
}

Node* inOrderPredecessor(Node* root, Node* temp){

    Node* pre = NULL;

    while(root != NULL){
        if(temp->data > root->data){
            pre = root;
            root = root->right;
        }
        else{
            root = root->left;
        }

    }
    return pre;
}


int main(){

    Node* root = NULL;

    cout << "Take input to Crate BST " << endl;
    takeInput(root);

    cout << "Printing data " << " ";
    inOrder(root);

    Node* temp = root->right->right->right;

    Node* ans = inOrderPredecessor(root, temp);

    cout << "Inorder Predecessor of " << temp->data << "is --> " << ans->data << endl; 

    return 0;
}