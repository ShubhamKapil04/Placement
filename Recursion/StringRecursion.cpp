#include<iostream>
using namespace std;

void reverse(string& str, int s, int e)
{
    //Base case
    //  if(i>j)
    //     return ;

    // swap(str[i], str[j]);
    // i++;
    // j--;

    // //Recursive call
    // reverse(str,i,j);

    if(s>e)
    {
        return ;
    }
    
    swap(str[s], str[e]);
    s++;
    e--;

    // Recursive relation
    reverse(str, s, e);
}

int main()
{
    string name = "Shubham";


    reverse(name, 0, name.length()-1 );

    cout << name << endl;

    return 0;
}