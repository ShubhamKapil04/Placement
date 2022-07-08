
// Node* deleteBST(Node* root, int d){

//     if(root == NULL){
//     return root;
//     }

//     if(root->data == d){
//     //     delete root->data;
//     //     return root;
//         // 0 child
//         if(root->left == NULL && root->right == NULL ){
//             delete root;
//             return NULL;
//         }

//         // 1 Child
//         if(root->left != NULL && root->right == NULL){
//             Node* temp = root->left;
//             delete root;
//             return temp;
//         }
//         if(root->left == NULL && root->right != NULL){
//             Node* temp = root->right;
//             delete root;
//             return temp;
//         }

//         // 2 Child

//         if(root->left != NULL && root->right != NULL){
//             int mini = minVal(root->right)->data;
//             root->data = mini;
//             root->right = deleteBST(root->right, mini);
//             return root;
//         }
//     }

//     else if(root->data > d){
//         //left part
//         root->left = deleteBST(root->left, d);
//         return root;
//     }
//     else{
//         root->right = deleteBST(root->right, d);
//         return root;
//     }
// }
