/* An important observation ---
1) num%10 gives us the last digit of a number
2) num = num/10 cuts off the last digit of the number 
3) numVector.back() gives us the last digit of the number in vector form
4) numVector.pop_back() cuts off the last digit of the number in vector form
5) The extra space required can be reduced by overwriting the first vector. 
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    vector<int> addToArrayForm(vector<int>& a, int k);
};

/* Returns the sum of 2 numbers in vector form */
vector<int> Solution :: addToArrayForm(vector<int>& a, int k)
{
    // Get the length of the first number
    int n = a.size();
    
    // Vector to store the answer
    vector<int> answer;
    
    /* Start adding both the numbers from the end */
    
    int carry = 0;
    // As long as one of the number exists, keep adding them
    while(!a.empty() || k!=0)
    {
        // Get the last digits of both the numbers. If a vector has finished off, the last digit is zero
        int lastDigit_1 = a.empty() ? 0 : a.back();// last digit send
        int lastDigit_2 = k%10;
        
        // Sum up the digits and add the carry
        int sum = lastDigit_1 + lastDigit_2 + carry;
        answer.push_back(sum%10);
        carry = sum/10;
        
        // Remove the last digits of both the numbers
        if(!a.empty()) a.pop_back();
        k = k/10;
    }
    
    // If the carry is remaining, add it
    if(carry!=0) answer.push_back(carry);
    
    // Reverse the answer, since we were summing up from the end
    reverse(answer.begin(), answer.end());
    
    // Return the answer in vector format
    return answer;
}

int main(){


    Solution obj;
    vector<int> a = {1,2,0,0};
    int k = 34;

    vector<int> ans = obj.addToArrayForm(a, k);

    for(auto i: ans){
        cout << i << " ";
    }
    return 0;
}