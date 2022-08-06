#include<iostream>
#include<vector>

using namespace std;

int main()
{

    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;
    int k=m+n-1;
	int i=m-1,j=n-1;


		while(i>=0 && j>=0)
		{
			if(nums1[i]>nums2[j])
			{
				nums1[k]=nums1[i];
				k--;
				i--;
			}
			else
			{
				nums1[k]=nums2[j];
				j--;
				k--;
			}
		}
		while(i>=0)
		{
			nums1[k]=nums1[i];
			k--;
			i--;
		}
		while(j>=0){
			nums1[k]=nums2[j];
			j--;
			k--;
		}
    
  return 0;
}