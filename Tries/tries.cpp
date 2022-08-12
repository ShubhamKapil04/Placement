#include<iostream>
#include<string>

using namespace std;

class TrieNode{
    public:
    int data;
    TrieNode* children[26];
    bool isTerminal;
    
   
    // Constructor
    TrieNode(char ch){
        data = ch;
        for(int i = 0; i < 26; i++){
            children[i] = NULL;
            // Pointing every children to NULL
        }
        isTerminal = false;
        // every single child is false at initial state
    }
};

class Trie{
    public: 
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtl(TrieNode* root, string word){

        // TrieNode* temp = root;

        // Recursively
        // Base case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }

        //Index to insert word
        int index = word[0] - 'a';

        // Crate node
        TrieNode* temp;

        // if present
        if(root->children[index] != NULL){
            temp = root->children[index];
        }else{// Not present
            // Then crate node
            temp = new TrieNode(word[0]);
            temp = root->children[index];
        }

        //Recursive call
        insertUtl(temp, word.substr(1));

        // for(int i = 0; word[i] != '\0'; i++){

        //     /* check if the word is already present
        //     if not thn create the new word */

        //     int index = word[i] - 'a';
        

        //     if(root->children[index] == NULL){
        //         temp->children[index] = new TrieNode(word[i]);   
        //     }else{
        //         // Do nothing. The node already exists
        //     }
        //     // Go down a level, to the child referenced by idx
        //     // since we have a prefix match
        //     temp = temp->children[index];
        // }
        // At the end of the world mark the node as the leaf node
        // temp->isTerminal = true;
        // return root;
    }

    void insertWord(string word){
        insertUtl(root, word);
    }

    bool searchUtl(TrieNode* root, string word){

        //base case
        if(word.length() == 0){
            return root->isTerminal;
        }

        int index = word[0] - 'a';

        TrieNode* temp;

        //if present
        if(root->children[index] != NULL){
            temp = root->children[index];
        }else{
            return false;
        }
        // Recursive call
        return searchUtl(temp, word.substr(1));

        // TrieNode* temp = root;
        // for(int i = 0; word[i] != '\0'; i++){

        //     // index
        //     int index = word[i] - 'a';

        //     if(root->children[index] == NULL)
        //     return false;

        //     temp = temp->children[index];

        //     if(temp != NULL && temp->isTerminal == true){
        //         return true;
        //     }
        //     else{
        //         return false;
        //     }
            
        
    }

    bool searchWord(string word){
        return searchUtl(root, word);
    }

};


int main(){
    
    Trie *t = new Trie();

    t->insertWord("abcd");

    cout << "Present or Not " << t->searchWord("abcd") << endl;

    
    return 0;
    
}