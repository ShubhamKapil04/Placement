// Binary tree --> This data Structure is 

#include<iostream>
#include<queue>
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

node* buildTree(node* root){

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    //Null case
    if(data == -1){
        return NULL;
    }

    cout << "Enter data for  the left  of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for the right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

// Level Order Triaversal
void levelOrderTraiversal(node* root){

    //Create a Queue
    queue<node*>q;
    q.push(root);
    q.push(NULL);//Seprator

    while(!q.empty()){
        node* temp =q.front();
        q.pop();

        if(temp == NULL){//Purana level traverse ho gya ho  chuka hai
            cout << endl; // this is the seperator

            if(!q.empty()){// Queue has some child Node
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

void buildOrderTree(node* &root){
    //Create Q
    queue<node*>q;
    cout << "Enter the data " <<endl;
    int data;
    cin >> data;

    root = new node(data);

    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for " << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if(leftdata != -1){
            temp->left = new node(leftdata);
            q.push(temp->left);
            
        }

        //For Right data
        cout << "Enter right node for " << temp->data << endl;
        int rightdata;
        cin >> rightdata;

        if(rightdata != -1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    } 
}

int main()
{
    
    node* root = NULL;

    //Creating a Tree

    //root = buildTree(root);
    buildOrderTree(root);

    levelOrderTraiversal(root);

    return 0;
}