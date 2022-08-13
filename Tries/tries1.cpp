// Program for deleting nodes from trie

#include <bits/stdc++.h>
using namespace std;

const int numChar = 26;

// Trie node structure
struct Trienode{
    struct Trienode *child[numChar];
    bool wordEnd;
};

/*
    Function to create the node which returns new trieNode initialized 
    to NULL
*/
struct Trienode *createNode(void){
    struct Trienode *newNode = new Trienode;
    newNode->wordEnd = false;
    
    for(int i = 0 ; i < numChar ; i++)
        newNode->child[i] = NULL;
        
    return newNode;
}

/*
    If a node is not present, it will insert a word to the trie; if the 
    word is a prefix of trie node, and it will just mark the leaf node
*/
void trieInsert(struct Trienode *root, string word){
    struct Trienode *temp = root;

    for(int i = 0 ; i < word.length() ; i++){
        int index = word[i] - 'a';
        if(!temp->child[index]){
            
            // To create a new node
            temp->child[index] = createNode();
        }
        temp = temp->child[index];
    }

    // Indicates the last node as leaf
    temp->wordEnd = true;
}

// Function for searching word in the trie and return true if present
bool trieSearch(struct Trienode *root, string word){
    struct Trienode *temp = root;

    for(int i = 0 ; i < word.length() ; i++){
        int index = word[i] - 'a';
        if(!temp->child[index]){
            return false;
        }
        temp = temp->child[index];
    }
    return (temp != NULL && temp->wordEnd);
}

// Function to check if the root has any children or not.
bool trieEmpty(Trienode *root){
    for(int i = 0 ; i < numChar ; i++){
        if(root->child[i]){
            return false;
        }
    }    
    return true;
}

// Function having a recursive call to delete a word from the Trie given
Trienode* trieDelete(Trienode *root, string word, int height = 0){
    
    // Condition if the tree is empty
    if(!root){
        return NULL;
    }

    // The final character of the word is being handled
    if(height == word.size()){

        /*
            After removal of the given word/key, the last node is 
            not the end of the word
        */
        if(root->wordEnd){
            root->wordEnd = false;
        }

        // In case if the given word isn't prefix of any other word
        if(trieEmpty(root)){
            delete (root);
            root = NULL;
        }
        return root;
    }

    /*
        In case it is not the last character, repeat for the child using 
        ASCII value
    */
    int index = word[height] - 'a';
    root->child[index] = trieDelete(root->child[index], word, height + 1);

    /*
        In case the root does not have any child(its only child gets 
        removed), then it is not the same for another word. The another 
        word does not end here.
    */
    if(trieEmpty(root) && root->wordEnd == false){
        // Node deleted
        delete(root); 
        root = NULL;
    }
    return root;
}

int main(){
    string word[] = {"coding", "ninja", "play", "join", "us", "have", 
    "fun"};
    int size = sizeof(word) / sizeof(word[0]);
    struct Trienode *root = createNode();

    // To construct the nodes in the trie
    for(int i = 0; i < size; i++){
        trieInsert(root, word[i]);
    }

    // To search for a word in the trie inputted
    trieSearch(root, "coding") ? cout << "Yes, it is present!\n" : cout 
    << "No, it is not present!\n";
    
    trieSearch(root, "ninja") ? cout << "Yes, it is present!\n" : cout 
    << "No, it is not present!\n";

    // To delete a word in the trie
    trieDelete(root, "play");
    
    // To search the word deleted
    trieSearch(root, "playground") ? cout << "Yes, it is present!\n" : cout 
    << "No, it is not present!\n";
    return 0;
}