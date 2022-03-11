#include<iostrem>
using namespace std;

int main(){

    int arr[] = { 0, 7, 9, 2, 3, 1}
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i < size - 1; i++)
    {
        int MinIndex = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[MinIndex])
            {
                MinIndex = j;
            }
        }
        swap(arr[MinIndex], arr[i]);
    }
    return 0;
    
}