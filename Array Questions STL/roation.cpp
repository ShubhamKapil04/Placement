#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr ={1, 2, 3, 4};

    // Where K is number of position we are going to update
    int k = 2;

    vector<int> temp(arr.size());
    int i = 0;
    for(; i < arr.size(); i++)
    {
        temp[(i+k) % arr.size()] = arr[i];
        
    }
    for(int i:temp)
    {
        cout << i <<" ";
    }

    temp = arr;

    return 0;
}