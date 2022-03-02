#include<iostream>
using namespace std;


bool isPossibleSolution(int arr[], int n, int m,  int mid)
{
    int studentCount = 1;
    int PageCount = 0;
    
    for( int i = 0; i<n; i++){
        
        if(PageCount + arr[i] <= mid)
        {
            PageCount = PageCount + arr[i];
        }
        
        else
        {
            studentCount++;
            if(studentCount > m || mid < arr[i])
            {
                return false;
            }
            PageCount = 0;
            PageCount = PageCount + arr[i];
        }
    }
    return true;
}

int main(){
     
     int arr[] ={10, 20, 30, 40};
     int n = sizeof(arr)/sizeof(arr[0]);
     int m = 2;
	 int s = 0;
      int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    int ans = - 1;
    int mid = s +( e - s)/2;
    while(s<=e)
    {  
        if(isPossibleSolution(arr, n, m, mid))
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
