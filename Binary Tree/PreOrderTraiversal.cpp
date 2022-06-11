#include<iostream>
#include<queue>
#include<stack>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* BuildTree(node* root){
    cout << "Enter the data " << endl;
    int data;
    cin >> data;
    root = new  node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for the left of the " << data << endl;
    root->left = BuildTree(root->left);
    cout << "Enter data for the Right of the "<< data << endl;
    root->right = BuildTree(root->right);

    return root;
}

void PreOrder(node* root){
    //Base case
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}


int main()
{
    node* root = NULL;

    //Build tree
    root = BuildTree(root);

    PreOrder(root);

    return 0;
}

// PreOrder Triaversal  N L R ---> Print, Left, Right