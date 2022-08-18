#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    int ChildCount;
    bool isTerminal;

    TrieNode(char val){
        data = val;
        for(int i = 0; i < 26; i++){
            children[i] = NULL;
        }
        ChildCount = 0;
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;
    
    Trie(char ch){
        root = new TrieNode(ch);
    }

    void insertUtl(TrieNode* root, string word){
        // base case
        if(word.length() == 0){
           root->isTerminal = true;
           return;
        }

        int index = word[0] - 'a';
        TrieNode* temp;

        if(root->children[index] != NULL){
            temp = root->children[index];
        }else{
            temp = new TrieNode(word[0]);
            root->ChildCount++;
            root->children[index] = temp;
        }
        insertUtl(temp, word.substr(1));
    }

    void insertWord(string word){
        insertUtl(root, word);
    }
        
    void lcp(string first, string &ans){

        for(int i  = 0; i<first.length(); i++){
            char ch = first[i];

            if(root->ChildCount == 1){
                ans.push_back(ch);

                int index = ch - 'a';
                root = root->children[index];
            }
            else{
                break;
            }

            if(root->isTerminal){
                break;
            }
        }
    }
};



string longestPrefix(vector<string> &arr, int n){
    Trie *t = new Trie('\0');

    //insert

    for(int i = 0; i < n; i++){
        t->insertWord(arr[i]);
    }

    string first = arr[0];
    string ans = " ";

    t->lcp(first, ans);

    return ans;
}

int main(){

    vector<string> str = {"code", "coding", "coder", "codezen"};
    int size = str.size();

    string ans = longestPrefix(str, size);

    for(int i = 0; i < ans.length(); i++){
        cout << ans[i];
    }

    return 0;
}