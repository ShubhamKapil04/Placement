#include<iostream>
#include<climits>
using namespace std;

int MaxIndex(int arr[], int size){

	int max = INT_MIN;
	int index = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
		
	}
	return index;
	
}

int main(){
	int arr[] = {13, 90, 887, 4343, 54};
	int n = sizeof(arr)/ sizeof(arr[0]);

	MaxIndex(arr, n);

	cout <<" Maximum index of elemnt : " << MaxIndex(arr, n);

	return 0;
}

