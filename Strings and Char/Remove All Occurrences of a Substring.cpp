#include<iostream>
#include<string.h>
using namespace std;

int main()
{   
    string s;
    getline (cin, s);
    string part;
    getline(cin, part);

    while(s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    
    cout << s;
    return 0;
}