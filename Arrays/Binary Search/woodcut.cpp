#include<iostream>
#include<vector>
using namespace std;



long long int WoodObtain(vector<int> A, int mid)
{
  long long int sum = 0;
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] >= mid)
        {
            sum += A[i] - mid;
        }
    }

    return sum;
}


int main ()
 {
    vector<int>A = {10, 20, 15, 17};
    int B = 7;
    int s = 0;
    int maxi = 0;
    for(int i = 0; i < A.size(); i++){
        maxi = max(maxi,A[i]);
    }

    int e = maxi;
  long long  int wood = 0;
    int mid = s + ( e - s)/2;

    while(s<=e)
    {
        wood = WoodObtain(A, mid);
        if(wood == B)
        {
            cout << mid;
        }

        if (wood > B)
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }

        mid = s + ( e - s)/2;
    }
    return 0;
}
