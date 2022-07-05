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

void preOrder(Node* root){

    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

Node* BuildBST(Node* root, int d){

    //base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d < root->data){
        root->left = BuildBST(root->left, d);
    }

    else{
        root->right = BuildBST(root->right, d);
    }

}

///Takin input

void takeInput(Node* &root){

    int data;
    cin >> data;

    while(data != -1){
        root = BuildBST(root, data);
        cin >> data;
    }
}

int main(){

    Node* root = NULL;

    cout << "Enter the data to create BST " << " ";
    takeInput(root);


    cout << "Printing BST " << endl;

    preOrder(root);
    
    return 0;
}