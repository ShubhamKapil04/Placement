#include<iostream>
using namespace std;


int partition(int arr[], int s, int e)
{
    // Take Pivot 
    int pivot = arr[s];
    //Taking count for leser value then the pivot
    int cnt = 0;
    for(int i = s + 1; i <= e; i++)
    {
        if(arr[i] <= pivot)
        {
            cnt++;
        }
    }

    int pivotIndex = s + cnt; 
    // Place pivotIndex into right postion
    swap(arr[pivotIndex], arr[s]);

    //Taking left and right side
    //First take the the two pointer
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }

        while(arr[j] > pivot)
        {
            j--;
        }

        if(i<pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickShort(int arr[], int s, int e)
{
    //Base Case
    if(s>=e)
    {
        return ;
    }

    //Partition the array
    int p = partition(arr, s, e);

    //Left array
    quickShort(arr, s, p - 1);

    //Right part
    quickShort(arr, p+1, e);

}

int main()
{
    int arr[10] = {1, 34, 54, 23, 21, 90, 35, 54, 67, 99};
    int size = 10;

    quickShort(arr, 0, size - 1);

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;

    }

    return 0;
}