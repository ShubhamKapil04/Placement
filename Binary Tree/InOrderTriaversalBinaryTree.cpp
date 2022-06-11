#include<iostream>
#include<stack>
#include<queue>

using  namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
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
    cout << "Enter the data for the right of " << data << endl;
    root->right = buildTree(root->right);

    return root;

}

void levelOrderTraiversal(node* root){

    //Create Queue
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        //condtion check 
        if(temp == NULL){
            cout << endl;


            if(!q.empty()){ // Means Queue has some child node
                q.push(NULL); // Seperator
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

void inOrder(node* root){
    //Base acse
    if(root == NULL){
        return ;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main()
{
    node* root = NULL;

    root = buildTree(root);

    levelOrderTraiversal(root);

    inOrder(root);


    return 0;

}

// InOrder Triaversal L N R ---> left, print, right

