#include<iostream>
using namespace std;


void update (int & m)
{
    m++;
    //This is the updated value of m in void function
    cout << m << endl;
}

int main(){

    int s = 5;  


    int& m = s; // This & create kind of address which point the same value that s is holding
    cout << m << endl;

    update(m);

    // The value afetr coming back to the main function and still the same as we see in void function
    cout << s << endl;

    return 0;

}
