#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

    string s = "PAYPALISHIRING";
    int numRows = 3;
    
    // int l = s.length();
    // string v[numRows];
    // int j=0,f=0;
    // if(numRows==1)
    //     cout << s << endl;
    // for(int i=0;i<l;i++)
    //     {
    //         v[j] += s[i];
    //         if(j==numRows-1) f=1;
    //         if(j==0) f=0;
    //         if(f==0) j++;
    //         if(f==1) j--;
    //     }
    // string result;
    // for(int i=0;i<numRows;i++)
    //     {
    //         result += v[i];
    //     }

    // // cout << result <<endl;

     if (numRows == 1) {
            // return s;
        }

        string answer;
        int n = s.size();
        int charsInSection = 2 * (numRows - 1);

        for (int currRow = 0; currRow < numRows; ++currRow) {
            int index = currRow;

            while (index < n) {
                answer += s[index];

                // If currRow is not the first or last row
                // then we have to add one more character of current section.
                if (currRow != 0 && currRow != numRows - 1) {
                    int charsInBetween = charsInSection - 2 * currRow;
                    int secondIndex = index + charsInBetween;
                    
                    if (secondIndex < n) {
                        answer += s[secondIndex];
                    }
                }
                // Jump to same row's first character of next section.
                index += charsInSection;
            }
        }

        cout << answer;

    return 0;
}