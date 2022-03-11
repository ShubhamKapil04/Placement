 #include<iostream>
 using namespace std; 
  
  int main()
  {// Initialize a variable 'sum' with 0.

    int arr[] = {10 34 12 14 54 12 15};
    int n = 7;
    int m = 4;
    long long sum = 0;

    // To calculate the sum of 'ARR'.
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // Sorting the array in increasing order.
    sort(arr.begin(), arr.end());

    // Subtracting the coin required to buy 'N - M'th apple as it will be free.  
    sum -= arr[n - m];

    // Return final answer.
    cout << sum;
    return 0;
    }