#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    private:
    
    void solve(stack<int>&s, int x){
        
        //Base Case
        if(s.empty()){
            s.push(x);
            return;
        }
        
        //Storing the top element
        int num = s.top();
        
        s.pop();
        
        //Recursive Call
        solve(s, x);
        s.push(num);
    }
    public:
    //Function to delete middle element of a stack.
    void pushAtBottom(stack<int>&s, int x)
    {
       
       
       solve(s, x);
       
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            int x = 9;
            ob.pushAtBottom(myStack,  x);
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}