#include<bits/stdc++.h>
using namespace std;


int main(){

    string str;
    getline(cin, str);

    reverse(str.begin(), str.end());

    cout << str;

    return 0;
}

// A quickly written program for reversing a string
// using reverse()
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	string str = "geeksforgeeks";

// 	// Reverse str[begin..end]
// 	reverse(str.begin(), str.end());

// 	cout << str;
// 	return 0;
// }
