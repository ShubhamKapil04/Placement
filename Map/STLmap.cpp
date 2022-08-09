#include<iostream>
#include<map>
#include<unordered_map>
#include<bits/stdc++.h>

using namespace std;

int main(){



    vector<int> arr ={1, 5, 2, 3, 2, 1, 1, 3, 4, 1};

    unordered_map<string, int> m;
    // 1. way to insert in map
    pair<string, int> p = make_pair("Kapil", 3);

    // 2. way to do that

    pair<string, int> pair2("Shubham", 2);
    m.insert(pair2);

    // 3. Way to insert the value

    m["mera"] = 3;
    // So this is the insertion in the map
    // if we want then we can update the value
 
    m["mera"] = 4;

    // Serching in the map

    cout << m["mera"] << endl;
    cout << m.at("Shubham") << endl;

    cout << m["unknownKey"] << endl; // This crate the entry
    cout << m.at("unknownKey") << endl;

    cout << m.size() << endl;


    // To check presence

    cout << m.count("bro") << endl;

    // Erase
    m.erase("Shubham");
    cout << m.size() << endl;

    // iterator
    // for(auto i:m){
    //     cout << i.first << " " <<  i.second << endl;
    // }

    unordered_map<string, int > ::iterator it = m.begin();
    // unorder Map print the value in rendom way
    // But map print the  value as 
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }


//     map<int, int > map;

//     for(int i = 0; i < arr.size(); i++){
//         map[arr[i]]++;
//     }

    

//    for(auto i = map.begin(); i != map.end(); i++){
//         cout << i->first << " " << i->second << endl;
//    }

   return 0;

}