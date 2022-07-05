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


void PostOrder(Node* root){

    if(root == NULL){
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

void inOrder(Node* root){

    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
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

Node* maxValue(Node* root){

    //crate temp node

    Node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }

    return temp;
}

Node* minValue(Node* root){

    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }

    return temp;
}

int main(){

    Node* root = NULL;

    cout << "Enter the data to create BST " << " ";
    takeInput(root);


    cout << "Printing BST " << endl;

    preOrder(root);

    cout << "Printing PostOrder BST " << endl;

    PostOrder(root);


    cout << "Printing inOrder BST " << endl;

    inOrder(root);

    Node* ans = maxValue(root);
    cout << "Maximmum Value in BST is --> " << ans-> data;

    Node* ans2 = minValue(root);
    cout << "Minimum Value in BST is --> "<< ans2->data;

    
    return 0;
}