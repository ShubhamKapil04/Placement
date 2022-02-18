#include<iostream>
#include<vector>
using namespace std;


int main(){
int arr1[3] = { 1, 2, 3};
int arr2[2] = {3, 4};

int n;
int i = 0;
int j = 0;


while (i<n && j<n)
{
    if (arr1[i] == arr2[j])
    {
        ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if (arr1[i] < arr2[j])
    {
        i++;
    }

    else{
        j++;
    }
    
    
}
return 0;
}