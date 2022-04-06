#include<iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s +(e-s)/2;

    //Length of First array
    int len1 = mid - s + 1;

    //Length of 2nd array
    int len2 = e - mid;

    //Create 2 Arrays

    //With the helpm of new keyword we are creating dynamic memory
    int *first = new int[len1];
    int *second = new int[len2];

    //create a variable which start from starting
    //Copy values
    int mainIndexarray = s;
    for(int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndexarray++];
    }

    //Creating Index for 2nd Array which start from mid
    mainIndexarray = mid + 1;
    for(int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndexarray++];
    }

    /* Now we are donw ith copy  the ARRAY FROM first part 
    ans also from 2nd part now we have to merge the both  
    array in shorteed form
    */

   //Merge 2 shorted Array

   int index1 = 0;
   int index2 = 0;

   //this is main Array index
   mainIndexarray = s;
   while(index1 < len1 && index2 < len2)
   {
       if(first[index1] < second[index2])
       {
           arr[mainIndexarray++] = first[index1++];
       }
       else{
           arr[mainIndexarray++] = second[index2++];
       }
   }

   //If 1st Array length is larger then 2nd one
   while(index1 < len1)
   {
       arr[mainIndexarray++] = first[index1++];
   }

    //If 2st Array length is larger then 1nd one
    while(index2 < len2)
   {
       arr[mainIndexarray++] = second[index2++];
   }


    // deleting the dynamic memory we created
   delete [] first;
   delete [] second;


}

void mergeShort(int *arr, int s, int e)
{
    //Base Case
    if(s>=e)
    {
        return ;
    }

    //mid
    int  mid = s + (e-s)/2;
    /*If we use (start + end )/2 then it may happen that the 
    sum will exceed the limit of integer hence we should use 
    start + (end-start)/2
    */


    //Left wala part Short 
    mergeShort(arr, s, mid);

    //Rigth wala part Short
    mergeShort(arr, mid+1, e);

    //Merge Left ans Right
    merge(arr, s, e);
}

int main()
{
    int arr [13] = {1, 4, 5, 3, 65, 32, 86, 21, 90, 65, 23, 10, 556};
    int size = 13;

    mergeShort(arr, 0, size - 1);


    for(int i = 0; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}