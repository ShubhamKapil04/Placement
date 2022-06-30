// { Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.

void createMapping(int in[], map< int, int> &nodeToIndex, int n){
    
    for(int i = 0; i < n; i++){
        nodeToIndex[in[i]] = i;
    }
}

Node* solve(int in[], int post[], int &Index, int StratingIndex, int endingIndex, int n, map<int, int>& nodeToIndex){
    
    //base case
    if(Index < 0 || StratingIndex > endingIndex )
    return NULL;
    
    int element = post[Index--];
    Node* root = new Node(element);
    int position = nodeToIndex[element];
    
    //Recursive call
    
    root->right = solve(in, post, Index,  position + 1, endingIndex, n, nodeToIndex);
    root->left = solve(in, post, Index, StratingIndex, position - 1, n, nodeToIndex);
    
    return root;
    
}

Node *buildTree(int in[], int post[], int n) {
    
    int postOrderIndex = n - 1;
    //Create Mapping
    map<int, int> nodeToIndex;
    createMapping(in, nodeToIndex, n);
    
    Node* ans = solve(in, post, postOrderIndex, 0, n-1, n, nodeToIndex);
    
    return ans;
    
}
