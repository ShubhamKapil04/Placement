#include<stack>
#include<iostream>
#include<vector>
using namespace std;


vector<int> nextSmallerElement(vector<int> &arr, int n)
 {
//  	// Create A stack
// 	stack< int > s;
// 	s.push(-1);
	
	//Size of vector is N
// 	vector< int > ans(n);
	
// 	for(int i = n-1; i >= 0 ; i--){
// 		int curr = arr[i];
		
// 		while(s.top() >= curr){
// 			s.pop();
// 		}
// 		//Ans is stack ka too
// 		ans[i] = s.top();
// 		s.push(curr);
// 	}
// 	return ans;
    // for(int i = 0 ; i < arr.size(); i++){
    //     cout << arr[i];
    // }
	stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    
    for(int i=n-1; i>=0 ; i--) {
        int curr = arr[i];
        while(s.top() >= curr)
        {
            s.pop();
        }
        //ans is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }
    for(int i = 0 ; i < ans.size(); i++){
        cout << ans[i];
    }
    return ans;
}

int main()
{
    int n ;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> i;
        arr.push_back(i);
    }
    // for(int i = 0 ; i < arr.size(); i++){
    //     cout << arr[i];
    // }


    vector<int> ans = nextSmallerElement(arr, n);
    
    // for(int i = 0 ; i < ans.size(); i++){
    //     cout << ans[i];
    // }
    return 0;
}