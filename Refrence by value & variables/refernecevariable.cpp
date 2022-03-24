#include<iostream>
using namespace std;

int main()
{
    int i = 5;
    // this is refernece by the value


    int &j = i;
    cout << i << endl;
    i++;
    //After incrimenting i

    cout << i << endl;

    // after incrimenting j what j should be?

    cout << j << endl;

    // So here we can se we have a value in j that is i vlaue only

    return 0;
}