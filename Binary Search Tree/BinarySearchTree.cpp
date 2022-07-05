#include<iostream>
#include<queue>
using namespace std;

class Node
{   
    public:
    int data;
    struct Node* left;
    struct Node* right;

    Node(int d){
        this->data = d;
        this->left= NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node* root){


    queue< Node* > q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
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

Node* insertInBST(Node* root, int d){

    //Base Case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root->data){
        root->right = insertInBST(root->right, d);
    }
    else{
        root->left = insertInBST(root->left, d);
    }
}

void preOrder(Node* root){

    if(root == NULL){
        return;
    }

    cout << root->data <<  " ";
    preOrder(root->left);
    preOrder(root->right);
}

void takeInput(Node* &root){

    int data;
    cin >> data;

    while(data != -1){
        root = insertInBST(root, data);
        cin >> data;
    }
}

int main(){

    Node* root = NULL;

    cout << "Enter the data to create BST " << endl;
    takeInput(root);

    cout << "Printing BST " << endl;

    levelOrderTraversal(root);


    return 0;
}
