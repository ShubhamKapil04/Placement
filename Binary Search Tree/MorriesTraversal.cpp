#include<iostream>
#include<queue>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

TreeNode* BuildTree(TreeNode* root){

    cout << "Enter the data " << endl;
    int data;
    cin >> data;
    
    root = new TreeNode(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter the data for the left of  " << data << endl;
    root->left = BuildTree(root->left);
    cout << "Enter the data for the right of  "<< data << endl;
    root->right = BuildTree(root->right);


    return root; 

}

void levelOrderTraversal(TreeNode* &root){

    queue< TreeNode* > q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        TreeNode* temp = q.front();
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : data(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
 * };
 */

vector< int> solve(TreeNode* root){
        
        vector< int> inOrder;
        
        TreeNode* curr = root;
        while(curr != NULL){
            
            if(curr->left == NULL){
                inOrder.push_back(curr->data);
                curr= curr->right;
            }
            
            else{
                TreeNode* prev = curr->left;
                while(prev->right && prev->right != curr){
                    prev = prev->right;
                }
                
                if(prev->right == NULL){
                    prev->right = curr;
                    curr = curr->left;
                }
                // if(prev->right == curr)
                else{
                    prev->right = NULL;
                    inOrder.push_back(curr->data);
                    curr = curr->right;
                }
            }
        }
    return inOrder;
}
    
vector<int> inorderTraversal(TreeNode* root) {
        
        vector< int > inOrder = solve(root);
        
        return inOrder;
}
int main()
{


    TreeNode* root = NULL;

    root = BuildTree(root);

    levelOrderTraversal(root);

    vector< int> ans = inorderTraversal(root);
   
    for(int i = 0; i <ans.size(); i++){
        cout << ans[i] <<" ," ;
    }
    return 0;
}