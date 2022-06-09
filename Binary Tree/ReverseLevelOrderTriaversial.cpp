#include<iostream>
#include<queue>
#include<stack>

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
    
    // we use the dequeue because we have 2 side of the implimentation

    queue< node* > q;
    stack< node* > s;

    q.push(root); // pushing the data from the tree to Stack

    // Right subtree visited before the left subtree

    while(!q.empty()){

        root = q.front();
        q.pop();
        s.push(root);

        // Enqueue the right child
        if(root->right)
        q.push(root->right);

        // Enqueue the left after right
        if(root->left)
        q.push(root->left);
    }

    while (!s.empty()){
        root = s.top();
        cout << root->data << " ";
        s.pop();
    }
 
}



int main()
{
    node* root = NULL;

    //Creating a Tree

    root = buildTree(root);

    reverseOrder(root);

    return 0;
}