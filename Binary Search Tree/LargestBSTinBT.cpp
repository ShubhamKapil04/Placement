#include<iostream>
using namespace std;

class TreeNode{
    public:
    int maxNode, minNode, maxSize;

    TreeNode(int minNode, int maxNode, int maxSize){
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
    }

};

class solution{
    public:
    TreeNode largestBSTinBT(TreeNode* root);
    // An empty tree is a size 0 BST

    if(root == NULL){
        return TreeNode(INT_MIN, INT_MAX, 0);
    }

    // Got the  Value of Left & Right Subtree of the Current Tree
    auto left = largestBSTinBT(root->left);
    auto right = largestBSTinBT(root->right);

    // Current Node is grater then max in left AND Smaller then min right, it is BST

    if(left.maxNode < root->val && root->val < right.minNode){
        // It is BST
        return TreeNode(min(root->val, left.maxNode), max(eoot->val, right.minNode), 
                left.maxSize + right.maxSize + 1);
    }
    // otherwise return [-info, info], so parent can't be a valid BST
    else{
            return TreeNode(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize) ); 
    }
};

int main(){

}