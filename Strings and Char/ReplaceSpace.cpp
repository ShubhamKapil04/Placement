#include<iostream>
#include<string>
using namespace std;


int main(){
    string str = "I love coding";

	string temp =" ";
    
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    cout << temp;
    return 0;

}