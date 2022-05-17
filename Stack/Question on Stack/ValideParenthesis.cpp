// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack< char > s;
        
        for(int i = 0; i < x.length(); i++){
            
            char ch = x[i];
            
            //if opening brackets
            
            if(ch == '(' || ch == '[' || ch == '{'){
                s.push(ch);
            }
            else{
                //closing brackets
                
                if(!s.empty()){
                    char top = s.top();
                    if((ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{')){
                        s.pop();
                    }
                    else{
                    return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        
        if(s.empty()){
            return true;
        }
        else{
            return false;
        }
    //     	 stack<char> s;
    //  for(int i=0; i<x.length(); i++) {
         
    //      char ch = x[i];
         
    //      //if opening bracket, stack push
    //      //if close bracket, stacktop check and pop
         
    //      if(ch == '(' || ch == '{' || ch == '['){
    //          s.push(ch);
    //      }
    //      else
    //      {
    //          //for closing bracket
    //          if(!s.empty()) {
    //               char top = s.top();
    //               if( (ch == ')' && top == '(') || 
    //                  ( ch == '}' && top == '{') || 
    //                  (ch == ']' && top == '[') ) {
    //                   s.pop();
    //               }
    //              else
    //              {
    //                  return false;
    //              }
    //          }
    //          else
    //          {
    //              return false;
    //          } 
    //      }  
    //  }
    
    // if(s.empty())
    //     return true;
    // else
    //     return false;
    }

};

// { Driver Code Starts.


//Chnage
int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends