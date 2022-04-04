#include<iostream>
using namespace std;

bool checkPalidrome(string& str, int s, int e)
{
    //Base case
    if(s>e)
    {
        return true;
    }
    if(str[s] != str[e])
    {
        return false;
    }
    else{
        //Recursive relation

        return checkPalidrome(str, s+1, e-1);
    }
}

int main()
{
    string str = "abcba";
    cout << endl;

    bool isPalidrome = checkPalidrome(str, 0, str.length()-1);

    if(isPalidrome)
    {
        cout << "String is Palidrome" << endl;
    }
    else{
        cout << "String isn't Palidrome" << endl;
    }

    return 0;
}