#include<iostream>
using namespace std;

clss heap{

    public:
    int arr[1000];
    int size;

    // crate Constructor
    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insertion(int val){

        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){

            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

int main(){





}