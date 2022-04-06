#include<iostream>
using namespace std;

int power(int a, int b)
{
    // Base case
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }

    //Recursive relation
    int ans = power(a, b/2);

    //if b is even
    if(b%2 == 0)
    {
        return ans * ans;
    }
    else{
        //if b is odd

        return a * ans * ans;
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << endl;

    int ans = power(a, b);

    cout << ans << endl;

    return 0;
}