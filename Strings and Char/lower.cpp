#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string convertString(string &str)
{
    bool flag = true;
    for (int i = 0; i < str.size(); i++)
    {
            if (flag == true && islower(str[i])) {
                str[i] = toupper(str[i]);
            }
            if (str[i] ==' ')
            {
                flag = true;
            }
            else
            {
                flag = false;
            }
        }

        return str;
}

int main(){
    string str = {"i love programming"};

    string ans = convertString(str);

    for(int i = 0; i < str.length(); i++){
        cout << str[i] ;
    }
}