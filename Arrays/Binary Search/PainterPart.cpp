#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int PainterCount = 1;
    int boardsum = 0;
    
    for(int i  = 0; i < n; i++){
        
        if(boardsum + arr[i] <= mid)
        {
            boardsum = boardsum + arr[i];
        }
        
        else
        {
            PainterCount++;
                if(PainterCount > m || arr[i] > mid)
                {
                    return false;
                }
            boardsum = 0;
            boardsum = boardsum + arr[i];
        }
    }
    return true;
}

int main(){
    
    int arr[] = {5, 5, 5, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 2;
    
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s)/2;
    
    while(s<=e)
    {
        
        if(isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    
    cout << ans;
    
    return 0;
}