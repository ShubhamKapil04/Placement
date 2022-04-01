#include<iostream>
using namespace std;

void Saydigit(int n, string arr[] )
{
    // Bse Case

    if(n==0)
    {
        return ;
    }

    // Processing
    int digit = n % 10;
    n = n / 10;

    //Recursive relation call
    Saydigit(n, arr);

    cout << arr[digit] << " ";

}

int main()
{
    string arr[10] = {"zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    int n;
    cin >> n;

    Saydigit(n, arr);

    return 0;
}