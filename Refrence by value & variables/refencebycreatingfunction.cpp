#include<iostream>
using namespace std;

void update(int n)
{
    // So herer we can see that the value be incrementing
    // herer will stay in this function onlt thats why this value not incrementing in after returning to main function
    n++;
    //printing inn the function 

    cout << "Inside the function --> " << n << endl;
}

int main()
{
    int i =  8;

    //Before updating the value
    cout <<i<<endl;
    update(i);

    // After updating the value
    cout << i << endl;

    return 0;
}