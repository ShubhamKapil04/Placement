#include<iostream>
#include<algorithm>
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

    if(d > root->data){
        root->right = buildBST(root->right, d);
    }

    else{
        root->left = buildBST(root->left, d);
    }

}

void takeInputBST(Node* &root){

    int data;
    cin >> data;

    while(data != -1){
        root = buildBST(root, data);
        cin >> data;
    }
    

}

void inOrder(Node* root){

    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int minVAl(Node* root){

    int minv = root->data;

    while(root->left != NULL){
        minv = root->left->data;
        root = root->left;
    }

    return minv;
}

Node* deleteBST(Node* root, int d){

    if(root == NULL){
    return root;
    }

    if(root->data == d){
    //     delete root->data;
    //     return root;
        // 0 child
        if(root->left == NULL && root->right == NULL ){
            delete root;
            return NULL;
        }

        // 1 Child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 Child

        if(root->left != NULL && root->right != NULL){
            root->data = minVAl(root->right);
            root->right = deleteBST(root->right, root->data);
            return root;
        }
    }

    else if(root->data > d){
        //left part
        root->left = deleteBST(root->left, d);
        return root;
    }
    else{
        root->right = deleteBST(root->right, d);
        return root;
    }
}



int main(){

    Node* root = NULL;

    cout << "Enter the input for creating BST " << " " << endl;

    takeInputBST(root);

    cout << "Print inOrder Traversal " << " " ;
    inOrder(root);

    root = deleteBST(root, 50);

    cout << "Print inOrder Traversal " << " " ;
    inOrder(root);

    return 0;
}