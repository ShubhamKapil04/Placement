#include<iostream>
#include<math.h>
using namespace std;

//     int m;
//     cin >> m;
//     int mask = 0;

//     if (m==0)
//     {
//     return 0;
//     }
    
//     while (m!=0)
//     {
//        mask = (mask << 1) & 1;
//        m >> 1;
//     }

//     int ans = (~m) & mask;
//    cout << ans;    
// }


    int main() {
        int n;
        cin >> n;
        int m = n;
        int mask = 0;
        
        // edge case
        if(n==0){
            return 1;
        }
        
        while(m!=0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        return ans;                                                                             
    }
