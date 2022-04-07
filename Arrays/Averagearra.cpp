#include<iostream>
using namespace std;


double average(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum+= arr[i];
    }

    double average = sum/size;

    return average;
}
int main()
{
    int n;

    cin >> n;

    int arr[n] = { };

    for(int i =0; i< n; i++)
    {
        cin >> arr[i];
    }

    double ans = average(arr, n);

    cout << ans << endl;

    return 0;
}