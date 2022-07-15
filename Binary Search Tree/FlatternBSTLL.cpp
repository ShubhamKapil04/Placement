#include<iostream>
#include<vector>

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

Node* buildRoot(Node* root, int d){

    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(root->data > d){
        root->left = buildRoot(root->left, d);
    }
    else{
        root->right = buildRoot(root->right, d);
    }
}

void TakeInput(Node* &root){

    int data;
    cin >> data;

    while (data != -1)
    {
        root = buildRoot(root, data);
        cin >> data;
    }

}

void inOrder(Node* &root, vector < int > &arr){

    if(root == NULL){
        return;
    }

    inOrder(root->left, arr);
    arr.push_back(root->data);
    inOrder(root->right, arr);
}

int main(){

    Node* root = NULL;
    
    cout << "Taking Input -->  " << " ";

    TakeInput(root); 

    vector< int > inOrderVal;

    inOrder(root, inOrderVal);
    int n = inOrderVal.size();

    Node< int > *rootNode = new Node< int >(inOrderVal[0]);
    Node< int > *curr = rootNode;

    for(int i = 1; i < n; i++){

        Node< int > *temp = new Node<int> (inOrderVal[i]);

        curr-> left = NULL;
        curr-> right = temp;
        curr = temp; 
    }

    curr->left = NULL;
    curr->right = NULL;

    return 0;

}