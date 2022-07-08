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


Node* CreateBST(Node* root, int val){

    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(root->data > val){
        root->left = CreateBST(root->left, val);
    }

    else{
        root->right = CreateBST(root->right, val);
    }

}

//sharing Root by refernce then value will be pass
void TakeInput(Node* &root){

    int data;
    cin >> data;
    
    while(data != -1){
        root = CreateBST(root, data);
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

Node* inOrderSuccessor(Node* root, Node* temp){

    Node* successor = NULL;

    while(root != NULL){

        if(temp->data >= root->data){
            root = root->right;
        }
        else{
            successor =  root;
            root = root->left;
        }
    }
    return successor;
}

int main(){

    Node* root = NULL;

    cout << "Take Input for BST " << " " ;

    TakeInput(root);

    cout << "Printing data " << " ";
    inOrder(root);

    Node* temp = root->left;

    Node* ans = inOrderSuccessor(root, temp);

    cout << "inOrder Successor of " << temp->data << " is " << "---> " ;
    cout << ans->data << endl;

    return 0;
}