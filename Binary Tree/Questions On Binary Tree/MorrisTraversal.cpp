#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct tNode
{
    int data;
    struct tNode* left;
    struct tNode* right;

};

void MorriesTraversal(struct tNode* root){

    struct tNode *curr, *pre;

    if(root == NULL)
        return;
    

    curr = root;

    while(curr != NULL){

        if(curr->left == NULL){
            cout << curr->data << " ";
            curr = curr->right;
        }

        else{
            // inorder Predecesser
            pre = curr->left;
            while(pre->right != NULL && pre->right != curr)
                pre = pre->right;



                if(pre->right == NULL){
                    pre->right = curr;
                    curr = curr->left;
                }



                else{
                    pre->right = NULL;
                    cout << curr->data << " ";
                    curr = curr->right;
                 }
        }
    }
}

/* crating node */
struct tNode* newtNode(int data){
    struct tNode* node = new tNode;
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

int main(){

    struct tNode* root = newtNode(1);
    root->left = newtNode(2);
    root->right = newtNode(3);
    root->left->left = newtNode(4);
    root->left->right = newtNode(5);

    MorriesTraversal(root);

    return 0;
}