#include<iostream>
#include<string.h>

using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    // constructor
    TrieNode(char val){
        data = val;
        for(int i = 0; i < 26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Tries{
    public:
    TrieNode* root;
    
    Tries(){
        root = new TrieNode('\0');
    }

    void insertUtl(TrieNode* root, string word){
        // Recursively
        // base case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }
        // to find the value
        int index = word[0] - 'a';
        TrieNode *temp;
        //if present then go to next
        if(root->children[index] != NULL){
            temp = root->children[index];
        }else{
            // crate node
            temp = new TrieNode(word[0]);
            root->children[index] = temp;
        }

        // Recursive call
        insertUtl(temp, word.substr(1));
    }

    void insertWord(string word){
        insertUtl(root, word);
    }

    bool searchUtl(TrieNode* root, string word){
        // Base case
        if(word.length() == 0){
            return root->isTerminal;
        }

        int index = word[0] - 'a';
        TrieNode *temp;

        if(root->children[index] != NULL){
            temp = root->children[index];
        }else{
            return false;
        }

        //recursive call
        return searchUtl(temp, word.substr(1));
    }

    bool searchWord(string word){
        return searchUtl(root, word);
    }

    bool deleteWord(TrieNode* root, string word){

        // Base case
        if(word.length() == 0){
            root->isTerminal = false;
            //check if that root have other child
            if(root->children.size() != 0)
            return false;
            else{
                return true;
            }
        }

        TrieNode* temp = root->children[word[0]];
        if(deleteWord(temp, word.substr(1))){
            root->children.erase(word[0]);
        }
        if(root->isTerminal || root->children.size() != 0)
        return false;
        else{
            true;
        }
    }
    

    void deleteWord(string word){
        deleteUtl(root, word);
    }
    // TrieNode* deleteUtl(TrieNode* root, string word, int height = 0){

    //     if(root == NULL){
    //         return NULL;
    //     }

    //     if(height == word.size()){
            
    //         if(root->isTerminal){
    //             root->isTerminal = false;
    //         }

    //         if()
            
    //     }
    // }

};


int main(){

    Tries* t = new Tries();

    t->insertWord("hello");

    cout << "Present or Not " << t->searchWord("hello") << endl;

    t->deleteWord("hello");

    return 0;
}