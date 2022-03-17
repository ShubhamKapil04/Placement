#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{
    vector<char> chars;
    
    for(int i = 0; getchar != '\0'; i++)
    {
        cin >> chars[i];
    }

    int i = 0;
    int ansIndex = 0;
    int n = chars.size();
        
        while(i<n)
        {
            int j = i + 1;
            while(j<n && chars[i] == chars[j])
            {
                j++;
            }
            // Yha kab ayoge?
            // ya toh vector puda traverse kr diya hoga
            // ya fir new/different character emcpunter kia ai
           
            // oldChar sttore kerlo
            chars[ansIndex++] = chars[i];
            
            int count = j - i;
            
            if(count > 1)
            { // Converting counting into single digit and seving in answer
                string cnt = to_string(count);
                for(char ch: cnt)
                {
                    chars[ansIndex++] = ch;
                }
            } 
            
            // Moving to new/ Differnet Character
            i=j;
        } 
    cout <<  ansIndex;
    return 0;
}
