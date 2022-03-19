#include<iostream>
#include<array>

using namespace std;

bool isPresent(int arr[][3], int target, int n , int m)
{
    for(int i = 0; i <3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][3];
    

    // taking Input of aarray
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Giving output

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cin >> target;
    if(isPresent(arr, target, 3, 3) )
    {
        cout << "Element Found";
    }
    else{
        cout<< " not Found";
    }
    return 0;
}
