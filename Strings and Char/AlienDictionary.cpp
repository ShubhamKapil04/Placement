/*

In an alien language, surprisingly, they also use English lowercase letters, but possibly in a different 
order. The order of the alphabet is some permutation of lowercase letters.

Given a sequence of words written in the alien language, and the order of the alphabet, return true if and 
only if the given words are sorted lexicographically in this alien language.

Example 1:

Input: words = ["hello","leetcode"], order = "hlabcdefgijkmnopqrstuvwxyz"
Output: true
Explanation: As 'h' comes before 'l' in this language, then the sequence is sorted.

*/


#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>

using namespace std;

class AlienDictionary{
public:

    bool checkOrder(string str1, string str2){

        int i = 0;

        while(i < str1.length() && i < str2.length()){

            //Checking 2 Contion
            if(str1[i] == str2[i])
                continue;
            else{
                // if(mp[str1[i]] > mp[str2[i]])
                //     return false;
                // else{
                //     return true;
                // }
                return mp[str1[i]] > mp[str2[i]] ? false : true;
            }
            i++;
        } 
    }

    unordered_map<char, int> mp;

    bool isAlienSorted(vector<string> &words, string &order){

        for(int i = 0; i < order.length(); i++){
            mp[order[i]] = i;
        }

        for(int i = 0; i < words.size(); i++){

            string str1 = words[i];

            for(int j = i+1; j < words.size(); j++){

                string str2 = words[j];

                if(checkOrder(str1, str2)) return true;
            }
        }
        return false;
    }
};


int main(){

    vector<string>words = {"hello","leetcode"};
    string order = "hlabcdefgijkmnopqrstuvwxyz";

    AlienDictionary obj;

    bool ans = obj.isAlienSorted(words, order);
    cout << ans << endl;

    return 0;
}