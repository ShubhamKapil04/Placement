#include<climits>
#include<iostream>
using namespace std;


int solveRec(int n, int x, int y, int z){
    
    if(n == 0) return 0;
    
    if(n < 0) return INT_MIN;
    
    int a = solveRec(n-x, x, y, z) + 1;
    int b = solveRec(n-y, x, y, z) + 1;
    int c = solveRec(n-z, x, y, z) + 1;
    
    int ans = max(a, max(b, c));
    
}

int cutSegments(int n, int x, int y, int z) {
	
    int ans = solveRec(n, x, y, z);
    if(ans < 0) return 0;
    else{
        return ans;
    }
}

int main(){

    int n = 8;
    int x = 3;
    int y = 3;
    int z = 3;

    int ans = cutSegments(n, x, y, z);
    cout << ans;

    return 0;
}