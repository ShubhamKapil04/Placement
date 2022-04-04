#include<iostream>
using namespace std;

int PeakElemnt(int arr[], int size)
{
    int start = 0;
    int end =  size - 1;
    int mid = start + (end - start)/2;
   
    while(start<end)    
    {
        // incressing in inline 
        if(arr[mid] < arr[mid + 1])
        {
            
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
  return start;
 }

int main(){
    
    int arr[] = {1, 2, 3, 5, 6, 3, 1};
    int size = sizeof(arr)/ sizeof(arr[0]);
    
    cout << PeakElemnt(arr, size);
 
    return 0;
}
