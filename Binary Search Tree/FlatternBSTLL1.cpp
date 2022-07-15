/*
Inorder Traversal
We can easily optimize the above approach in terms of space complexity by maintaining a previous pointer. While traversing the BST in an inorder manner, we can make the left child of the previous as NULL and the right child of the previous as the current node. Then update the previous to the current node.

 

Algorithm

 

If root == NULL, then return root.
Create a temp pointer and, which will act as the initial previous pointer, 
and store a dummy value in it. As the nodes can’t have a value -1 in this problem, 
we can keep the value -1 in this temp pointer.
Create the previous pointer and make it point to temp initially.
Call the inorder function passing both the root and previous as arguments, 
i.e., inorder(root, previous).
Then at this point, the previous is pointing to the last node of the tree, 
so we make the left and the right child of the previous NULL.
Then, we create a pointer newRoot, which is the root of the resulting BST. 
Make newRoot = temp.right. As temp contains a dummy value, which doesn’t 
belong to the actual BST.
Then delete the temp pointer to avoid memory leak and return newRoot.
 

inorder(root, previous):

 

If root == NULL, then return.
Call the function recursively for the left child, i.e., inorder(root.left, previous).
Make the left child of previous NULL, i.e., previous.left = NULL.
Make the right child of previous as root and make the previous point to root, 
i.e., previous.right = root and previous = root.
Then, call the function recursively for the right child, 
i.e., inorder(root.right, previous).
Time Complexity
O(N), where ‘N’ is the number of nodes in the given BST.

 

We are traversing the entire BST once during the inorder traversal. 
Hence, the overall time complexity is O(N).

Space Complexity
O(H) where ‘H’ is the height of the given BST(Binary Search Tree). 

 

The recursion stack takes a space that is equal to the height of the BST. 
Hence, the overall space complexity will be O(H).
*/

/*
    Time Complexity : O(N)
    Space Complexity : O(N)

    Where 'N' is the total number of nodes in the given BST.
*/

void inorder(TreeNode<int> *root, vector<int> &inorderArray)
{
    if (root == NULL)
    {
        return;
    }
    
    // Recur for left sub-tree
    inorder(root->left, inorderArray);

    // Add current node data to array
    inorderArray.push_back(root->data);

    // Recur for right sub-tree
    inorder(root->right, inorderArray);
}

TreeNode<int>* flatten(TreeNode<int>* root)
{

    if (root == NULL)
    {
        return root;
    }
    
    // Array to store inorder traversal
    vector<int> inorderArray;
    
    inorder(root, inorderArray);

    // Create a pointer called newRoot, and store the first value of the array in it.
    TreeNode<int> *newRoot = new TreeNode<int>(inorderArray[0]);

    // Create a pointer called curr and store the newRoot in it.
    TreeNode<int> *curr = newRoot;

    for (int i = 1; i < inorderArray.size(); i++)
    {

        // Create a new node.
        TreeNode<int> *temp = new TreeNode<int>(inorderArray[i]);

        // Make the left child of curr as NULL and right child as the temp. And make curr = temp.
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }

    // Make both the left and the right child of the last node as NULL.
    curr->left = NULL;
    curr->right = NULL;

    return newRoot;
}
