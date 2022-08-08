#include<iostream>
#include<queue>
#include<limits.h>
using namespace std;

class node{
    public:
    int data;
    int row;
    int col;

    node(int d, int r, int c){
        data = d;
        row = r;
        col = c;
    }
};

class compare{
    public:
    bool operator()(node* a, node* b){
        cout << "This is A data -> "<<a->data << "This is B data -> " << b->data << endl;
        return a->data > b->data;
    }
};



int main(){

    vector<vector<int> > arr = { {1, 10, 11},
                                 {2, 3, 20},
                                 {5, 6, 12} };
    
    int k = 3;
    int n = arr.size();

    // From starting of the arr list

    // Using minheap

    priority_queue<node*, vector<node*>, compare>  pq;

    // crating minimum nad maximum
    int mini = INT_MAX, maxi = INT_MIN;

    for(int i = 0; i < k; i++){
        int element = arr[i][0];
        mini = min(mini, element);
        maxi = max(maxi, element);

        cout << "Value of mini is --> " << mini << endl;
        cout << "Value of maxi is --> " << maxi << endl;

        pq.push(new node(element, i, 0));
    }

    // starting index
    int start = mini, end = maxi;
    // So here we have the value of start as the minimum value we get from the
    // min function and also the max funtion

    while (!pq.empty())
    {
        node* temp = pq.top();
        pq.pop();

        cout << "Temp data " << temp->data << endl;
        mini = temp->data;

        if(maxi - mini < end - start){
            end = maxi;
            start = mini;
        }

        if(temp->col + 1 < n){
            maxi = max(maxi, arr[temp->row][temp->col+1]);
            pq.push(new node (arr[temp->row][temp->col+1]));
        }
        else{
            break;
        }
    }
    cout << end - start + 1 << endl;

    return 0;
}