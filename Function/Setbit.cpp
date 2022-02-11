#include<iostream>
#include<math.h>
using namespace std;

#include<iostream>
#include<math.h>
using namespace std;

int numberOfSetBits(int a, int b) {
  int count = 0;
  while (a != 0) {
    if (a&1){
      count++;
    }
    a >>= 1;
  }
  while (b != 0) {
    if (b&1){
      count++;
    }
    b >>= 1;
  }
  return count;
}

int main() {
  int a, b;
  cout<< "Enter value of a: ";
  cin>>a;
  cout<< "Enter value of b: ";
  cin>>b;

  int ans = numberOfSetBits(a, b);
  cout<<"Answer: "<<ans <<endl;
  return 0;
}

// int SetBitA(int a){

//     int ans = 0;
//     int i = 0;
//     while (a!=0)
//     {
//         int bit = a & 1;
//         ans = (bit * pow(10, i)) + ans;

//         a = a >> 1;
//         i++;
        
//     }
//     return ans;
    

// }
// int SetBitB(int b){

//     int ans1 = 0;
//     int i = 0;
//     while (b!=0)
//     {
//       int bit1 = b & 1;
//       ans1 = (bit1 * pow (10, i)) + ans1;

//       b = b >> 1;
//       i++;   
//     }

//     return ans1;
    
// }

// int main (){

//     int a, b;
//     cout << "value of A is : ";
//     cin >> a;

//     cout << "Value of B is : ";
//     cin >> b;

//     int ans1 = SetBitA(a);
//     int ans2 = SetBitB(b);

//     cout << "Set bit of A = "<< ans1 << endl;
//     cout << "Set bit of B = "<< ans2 << endl;

  

//     return 0;
// }



