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
int main()
{
    
    node* root = NULL;

    //Creating a Tree

    root = buildTree(root);

    levelOrderTraiversal(root);

    return 0;

}