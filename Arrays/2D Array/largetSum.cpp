#include<iostream>
#include<array>
#include<limits> 

using namespace std;

int largestRowSum(int arr[][3], int n, int m)
{
    
    int maxi = INT8_MIN;
    int Rowindex = -1;
    for(int i = 0; i < 3; i++)
    {
        int sum = 0;
        for(int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        if(sum > maxi){
            maxi = sum; 
            Rowindex =  i;
        }

    }
    cout << "The maximum sum is " << maxi << endl;
    return Rowindex;
}

int main()
{
    int arr[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
   int ans = largestRowSum(arr, 3, 3);
   cout << " Max row is at index " << ans;
    return 0;
}