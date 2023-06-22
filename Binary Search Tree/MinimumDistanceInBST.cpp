/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


#include<iostream>
#include<queue>
#include<climits>
using namespace std;


struct TreeNode {

    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    
    
    int minDistance = INT_MAX;
    TreeNode* prevValue;

    
    void inOrderTraversal(TreeNode* root){
        
        if(root == NULL)
            return;
        
        
        inOrderTraversal(root->left);
        
        if(prevValue != NULL){
            minDistance = min(minDistance, root->val - prevValue->val);
        }
        
        prevValue = root;
        
        inOrderTraversal(root->right);
        
    }
    
    int minDiffInBST(TreeNode* root) {
        
        inOrderTraversal(root);
        
        return minDistance;
       
    }
};

TreeNode* insertInBST(TreeNode* root, int d){

    //Base Case
    if(root == NULL){
        root = new TreeNode(d);
        return root;
    }

    if(d > root->val){
        root->right = insertInBST(root->right, d);
    }
    else{
        root->left = insertInBST(root->left, d);
    }
}

void takeInput(TreeNode* &root){

    int val;
    cin >> val;

    while(val != -1){
        root = insertInBST(root, val);
        cin >> val;
    }
}


int main(){

    TreeNode* root = NULL;

    cout << "Enter the data to create BST " << endl;
    takeInput(root);

    Solution obj;
    int ans = obj.minDiffInBST(root);
    cout << ans << endl;4
    return 0;
}