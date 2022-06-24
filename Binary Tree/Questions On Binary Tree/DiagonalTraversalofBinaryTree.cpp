#include<iostream>
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

Node* buildTree(Node* root){

    cout << "Enter the data " << endl;
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    } 

    cout << "Enter data for the left of " << data << endl;
    root->left = buildTree(root->left);
    
    cout << "Enter data for the right of " << data << endl;
    root->right = buildTree(root->right);

    return root;

}

void buildm Tree(Node* &root){

    // create Q
    queue< Node* > q;
    cout << "enter the data " << endl;
    int data;
    cin >> data;

    root = new Node(data);

    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << "Enter left node for "<< temp->data << endl;
        int leftNode;
        cin >> leftNode;

        if(leftNode != -1){
            temp->left = new Node(leftNode);
            q.push(temp->left);
        }


        //for right data

        cout << "Enter the right node of " << temp->data << endl;
        int RightNode;
        cin >> RightNode;

        if(RightNode != -1){
            temp->right = new Node(RightNode);
            q.push(temp->right);
        }
    }

}

void levelOrderTraiversal(Node* root){

    //Create Q;
    queue< Node* >q;
    q.push(root);
    q.push(NULL);// Seperator

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

//Iterative
vector< int > diagonal(Node* root){

    vector<int> ans;
    queue<Node*> q;

    q.push(root);

    if(root == NULL){
        return ans;
    }

    while(!q.empty()){

        Node* temp = q.front();
        q.pop();

        while(temp){

            if(temp->left){
                q.push(temp->left);
            }

            ans.push_back(temp->data);
            temp= temp->right;
        }
    }
    return ans;
}

int main()
{
    Node* root = NULL;

    buildTree(root);

    vector<int> diagonalNode = diagonal(root);
    for(int i = 0; i < diagonalNode.size(); i++){
        cout << diagonalNode[i] << " ";
        cout << endl;
    }

    // levelOrderTraiversal(root);

    return 0;
}