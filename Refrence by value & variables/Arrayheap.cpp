#include<iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{   
  int n;

  cin >> n;
  

  // variable Size array
  int* arry = new int[n];

  // Taking input in array
  for(int i = 0; i < n; i++)
  {
    cin >> arry[i];
  }

  int ans = getSum(arry, n);

  cout << "Answer is " << ans << endl;

  // now we have to delete the heap storage so for that 
  // we are going to use the keyboard delete

  delete [] arry;
  
  return 0;
}