#include<iostream>
#include<queue>

using namespace std;

class node{
    public:
    int data;
    node*  left;
    node* right;

    //Constructor
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter  data for the left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for the right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

//Reverse order Triaversal
void reverseOrder(node* root){
    
}



int main()
{
    node* root = NULL;

    //Creating a Tree

    root = buildTree(root);

    return 0;
}