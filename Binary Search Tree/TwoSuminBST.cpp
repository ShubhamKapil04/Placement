#include<iostream>
#include<vector>
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

node* buildBST(node* root, int d){

    if(root == NULL){
        root = new node(d);
        return root;
    }

    if(root->data > d){
        root->left = buildBST(root->left, d);
    }
    else{
        root->right = buildBST(root->right, d);
    }
    return root;
}

void takeInput(node* &root){

    int data;
    cin >> data;

    while(data != -1){
        root = buildBST(root, data);
        cin >> data;
    }
}

void inOrder(node* &root, vector< int> &inOrderStore){

    if(root == NULL){
        return;
    }

    inOrder(root->left, inOrderStore);
    inOrderStore.push_back(root->data);
    inOrder(root->right, inOrderStore);
}

bool sumofTwoBST(node* &root, int target){

    //crating to store inorder value
    vector <int> inOrderStore;
    inOrder(root, inOrderStore);

    // Use two pointer Approch

    int i = 0;
    int j = inOrderStore.size()-1;

    while(i > j){
        int sum = inOrderStore[i] + inOrderStore[j];
        if(sum == target){
            return  true; 
        }
        else if(sum > target){
            j--;
        }
        else{
            i++;
        }
    }

    return false;
}


int main(){

    node* root = NULL;

    takeInput(root);

    // cout << "Printing Inorder -->  "<< " ";

    // inOrder(root);
    // cout << endl;

    int target = 19;

    bool sumBST =  sumofTwoBST(root, target);

    cout << sumBST << endl;


    return 0;
}