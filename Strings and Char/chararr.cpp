#include<iostream>

#include<string>
using namespace std; 

// void reverse(char name[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while(s<e)
//     {
//         swap(name[s], name[e]);
//         s++;
//         e--;
        
//     }
// }
void reverse(char name[], int n) {
    int s=0;
    int e = n-1;

    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

int getLen(char name[])
{
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter Your Name ---> ";
    cin >> name;

    cout << "Your Name is " << name << endl;
    int len = getLen(name);
    cout << "Length : " << len << endl;

    reverse(name, len);

    cout << "The reverse of  char " << name << endl;

    return 0;
}
