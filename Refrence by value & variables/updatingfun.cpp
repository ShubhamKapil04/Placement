#include<iostream>
using namespace std;

int main()
{
    int i = 7;


    // when we trying to print the value of k then we get the adress of i which is
    // Stored in the k

    int *k = &i;
    // we can cross check the adress of i bt fucntion
    cout << " Address of i is --> " << &i << endl;
    cout << "value stored at K is -- > " << k << endl;
    cout << "Address of K is -- > " << &k << endl;
    cout << " Value at i is --> " << i << endl;
    cout << "Address stored at k value is -- >" << *k << endl;
}