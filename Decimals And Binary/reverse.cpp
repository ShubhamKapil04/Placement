 #include<iostream>
 #include<math.h>
 #include<limits.h>
 using namespace std;
 int main(){

        int n;
        cin >> n;
        
        int ans = 0;
        
        
        while(n!=0){
            int digit = n%10;
             n = n/10;
             if ((ans > INT_MAX/10) || (ans < INT_MIN/10))
             {
                    return  0;
             }
             
            ans = (10 * ans) + digit;
            
        }
        cout << ans ;
 }