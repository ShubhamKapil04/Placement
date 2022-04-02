/*
Problem Statement
You have been given a number of stairs. Initially,
you are at the 0th stair, and you need to reach the 
Nth stair. Each time you can either climb one step 
or two steps. You are supposed to return the number
of distinct ways in which you can climb from the 
0th step to Nth step.
*/




#include<iostream>
using namespace std;

int countDistinctway(int nStaires)
{
    //base case

    if(nStaires < 0)
    return 0;

    if(nStaires == 0)
    return 1;

    // Recursive relation
    int ans = countDistinctway(nStaires - 1) + countDistinctway(nStaires - 2);

    return ans;
}

int main()
{
  int n;
  cin >> n;

  int ans = countDistinctway(n);

  return 0;
}