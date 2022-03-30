#include<iostream>
using namespace std;

int print(int n)
{
    // Base case it is important to write base case in recursion
    if(n == 0)
    {
        return 1;
    }
    //Process
    cout << n << endl;

    // Recurcive Relation

    print(n-1);
    // tail recursion

}

int main()
{
    int n;
    cin >> n;
    cout << endl;

    print(n);


    return 0;
}
