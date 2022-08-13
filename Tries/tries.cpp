#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

// class TrieNode{
//     public:
//     int data;
//     TrieNode* children[26];
//     bool isTerminal;
    
   
//     // Constructor
//     TrieNode(char ch){
//         data = ch;
//         for(int i = 0; i < 26; i++){
//             children[i] = NULL;
//             // Pointing every children to NULL
//         }
//         isTerminal = false;
//         // every single child is false at initial state
//     }
// };

// class Trie{
//     public: 
//     TrieNode* root;

//     Trie() {
//         root = new TrieNode('\0');
//     }

//     void insertUtl(TrieNode* root, string word){

//         // TrieNode* temp = root;

//         // Recursively
//         // Base case
//         if(word.length() == 0){
//             root->isTerminal = true;
//             return;
//         }

//         //Index to insert word
//         int index = word[0] - 'a';

//         // Crate node
//         TrieNode* temp;

//         // if present
//         if(root->children[index] != NULL){
//             temp = root->children[index];
//         }else{// Not present
//             // Then crate node
//             temp = new TrieNode(word[0]);
//             root->children[index] = temp;
//         }

//         //Recursive call
//         insertUtl(temp, word.substr(1));

//         // for(int i = 0; word[i] != '\0'; i++){

//         //     /* check if the word is already present
//         //     if not thn create the new word */

//         //     int index = word[i] - 'a';
        

//         //     if(root->children[index] == NULL){
//         //         temp->children[index] = new TrieNode(word[i]);   
//         //     }else{
//         //         // Do nothing. The node already exists
//         //     }
//         //     // Go down a level, to the child referenced by idx
//         //     // since we have a prefix match
//         //     temp = temp->children[index];
//         // }
//         // At the end of the world mark the node as the leaf node
//         // temp->isTerminal = true;
//         // return root;
//     }

//     void insertWord(string word){
//         insertUtl(root, word);
//     }

//     bool searchUtl(TrieNode* root, string word){

//         //base case
//         if(word.length() == 0){
//             return root->isTerminal;
//         }

//         int index = word[0] - 'a';

//         TrieNode* temp;

//         //if present
//         if(root->children[index] != NULL){
//             temp = root->children[index];
//         }else{
//             return false;
//         }
//         // Recursive call
//         return searchUtl(temp, word.substr(1));

//         // TrieNode* temp = root;
//         // for(int i = 0; word[i] != '\0'; i++){

//         //     // index
//         //     int index = word[i] - 'a';

//         //     if(root->children[index] == NULL)
//         //     return false;

//         //     temp = temp->children[index];

//         //     if(temp != NULL && temp->isTerminal == true){
//         //         return true;
//         //     }
//         //     else{
//         //         return false;
//         //     }
            
        
//     }

//     bool searchWord(string word){
//         return searchUtl(root, word);
//     }


//     TrieNode* trieDeleteUtl(TrieNode *root, string word, int height = 0){
        
//         // Condition if the tree is empty
//         if(!root){
//             return NULL;
//         }

//         // The final character of the word is being handled
//         if(height == word.size()){

//             /*
//                 After removal of the given word/key, the last node is 
//                 not the end of the word
//             */
//             if(root->isTerminal){
//                 root->isTerminal = false;
//             }

//             // In case if the given word isn't prefix of any other word
//             if(trieEmpty(root)){
//                 delete (root);
//                 root = NULL;
//             }
//             return root;
            
//         }

//         /*
//             In case it is not the last character, repeat for the child using 
//             ASCII value
//         */
//         int index = word[height] - 'a';
//         root->children[index] = trieDelete(root->children[index], word, height + 1);

//         /*
//             In case the root does not have any child(its only child gets 
//             removed), then it is not the same for another word. The another 
//             word does not end here.
//         */
//         if(trieEmpty(root) && root->isTerminal == false){
//             // Node deleted
//             delete(root); 
//             root = NULL;
//         }
//         return root;
//     }

// };


// int main(){
    
//     Trie *t = new Trie();
//     // cout << "hello " << endl;
//     t->insertWord("abcd");
//     t->insertWord("Hello");
//     cout << "Present or Not " << t->searchWord("abcd") << endl;
//     cout << "Present or Not " << t->searchWord("Hello") << endl;
    
//     // t->trieDelete("Hello");

//     cout << "Present or Not "<< t->searchWord("Hello") << endl;
    

    
//     return 0;
    
// }

struct Node
{
    Node* links[26];
    bool flag = false;
    bool containsKey(char ch){
        return (links[ch - 'a'] != NULL);
        //It does exist
    }

    void put(char ch, Node* node){
        links[ch - 'a'] = node;
    }
};

class Trie{
    private:
    Node* root;

    public:

        Trie(){
            root = new Node();
        }

        void insert(string word){
            Node* temp = root;
            for(int i = 0; i < word.length(); i++){
                // if doesn't contain
                if(!temp->containsKey(word[i])){
                    temp->put(word[i], new Node());
                }
            }

            // Moves to the refernce trie
            temp->get(word[i]);
        }


};

