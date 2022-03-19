#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<vector<int>> arr;
    int n = arr.size();

    // Transpose array


    for(int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            swap(arr[row][col], arr[col][row]);
        }
    }

    // reverse the array to get the 90degree

    for(int row = 0; row < n; row++)
    {
        reverse(arr[row].begin(), arr[row].end() );
    }

  

    return 0;
}