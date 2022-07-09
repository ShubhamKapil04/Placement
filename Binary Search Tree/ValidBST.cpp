#include<iostream>
#include<limits.h>
#include<queue>
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

Node* crateBST(Node* root, int d){// inside thie value of root travel inn refernce

    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(root->data > d){
        root->left = crateBST(root->left, d);
    }
    else{
        root->right = crateBST(root->right, d);
    }
}

void takeInput (Node* &root){

    int d;
    cin >> d;

    while(d != -1){
        root = crateBST(root, d);
        cin >> d;
    }
}

// Printing root

void levelOrder(Node* root){


    queue< Node* > q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
        // 1 traversal complete
            cout << endl;

            if(!q.empty()){
                q.push(NULL);
            }

        }

        else{
            cout << temp->data << " ";

            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inOrder(Node* root){

    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data <<" ";
    inOrder(root->right);
}

bool isBST(Node* root, int min, int max){

    if(root == NULL){
        return true;
    }

    if(root->data >= min && root->data <= max){
        bool left = isBST(root->left, min, root->data);
        bool right = isBST(root->right, root->data, max);

        return left && right;
    }
    else{
        return false;
    }
}

bool isValidBST(Node* root){
    return isBST(root, INT_MAX, INT_MIN);
}


int main(){

    Node* root = NULL;

    cout << "Crate BST " << endl;
    takeInput(root);

    cout << "Printing root " << endl;
    inOrder(root);

    cout << endl;
    cout << "Printing Level Order traversal " << endl;
    levelOrder(root);

    cout << "BST is Valid or Node --> " << endl;

    bool ans = isValidBST(root);
    cout << ans << endl;
    return 0;
}