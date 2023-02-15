#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class AddBinary
{   
public:

    string addBinary(string a, string b){

        int i = a.size() - 1; // Size of A
        // cout << i << endl;
        int j = b.size() - 1;
        string ans;
        int carry = 0;

        while(i >= 0 || j >= 0 || carry){

            if(i >= 0){
                carry += a[i] - '0';
                cout << "carry in i" << endl;
                cout << carry << endl;
                i--;
            }
            if(j >= 0){
                carry += b[j] - '0';
                cout << "Carry in J" << endl;
                cout << carry << endl;
                j--;
            }

            ans += carry%2 + '0';
            cout << "Ans in round " << endl;
            cout << ans << endl;

            carry = carry/2;
            cout << carry << endl;  
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};




int main(){

    string a = "11";
    string b = "1";

    AddBinary obj;
    cout << obj.addBinary(a, b) << endl;

    return 0;
}