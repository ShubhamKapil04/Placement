// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
        // Deficit --> kami
       int deficit = 0;
       int balance = 0;
       int start = 0;
       
       for(int i = 0; i < n; i++){
           //Balace of distance covered ny the truck
           balance = balance + p[i].petrol - p[i].distance;
           //check if the balance is positivee or not
           if(balance < 0){
               //Kami kitny hai
               deficit = deficit + balance;
               start = i+1;
               balance = 0;
           }
       }
       if(deficit + balance >= 0){
           return start;
       }
       else{
           return -1;
       }
    }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
  // } Driver Code Ends

  //Time Complexity --> O(n);
  //Space Complexity  --> o(1);