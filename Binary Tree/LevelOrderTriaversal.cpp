#include<iostream>
#include<queue>

using namespace std;

class node{

    public:
    int data;
    node* right;
    node* left;

    node(int d){
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

node* buildTree(node* root){

    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter the data for the left of the tree " << data << endl;
    root->left = buildTree(root->left);

    
    cout << "Enter the data for the left of the tree " << data << endl;
    root->right= buildTree(root->right);
    

    return root;

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

void levelOrderTriaversal(node* root){



    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        // cout << " Data is printing " << endl;
        node* temp = q.front();
        // cout << temp->data <<" ";
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

int main()
{

    node* root = NULL;

    // root = buildTree(root);


    buildOrderTree(root);
    levelOrderTriaversal(root);


    return 0;

}

// 1 3 4 5 6 2 8 -1 -1 -1 -1 -1 -1 -1 -1