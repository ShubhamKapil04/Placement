#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[], int size){

    int mini = INT_MAX;
    
    for (int i = 0; i < size; i++)
    {
        //Predefined function

        mini = min(mini, num[i]);
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
        
    }
    
    return mini;
}

int getMax(int num[], int size){

    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // Predefined function 
        maxi = max(maxi, num[i]);
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
        
    }
    return maxi;
    
}
int main(){
     int size;
     cin >> size;

     int num[100] = {1, 2, 45, 50};

     //Taking input in Arrays

     for (int i = 0; i < size; i++)
     {
         cin >> num[i];
     }

     cout << "Max Value of Array  is : " << getMax(num, size) << endl;
     cout << "Min Value of Array  is : " << getMin(num, size) << endl;

     return 0;
}