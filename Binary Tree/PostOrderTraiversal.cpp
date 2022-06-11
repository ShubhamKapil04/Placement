#include<iostream>
#include<queue>

using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;

    node(int d){
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }    
};


node* buildTree(node* root){
    cout << "Enter the data " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter the data for the left of " << data << endl;
    root->left = buildTree(root->left);
    cout << " Enter the data for the right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void PostOrder(node* root){

    //Base Case
    if(root == NULL){
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}


int main()
{
    node* root = NULL;

    root = buildTree(root);

    PostOrder(root);

    return 0;

}

// L R N ---> left, Right, Print .....