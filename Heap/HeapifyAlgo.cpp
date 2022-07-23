#include<iostream>
using namespace std;

class heap{
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

    heap h;

    h.insertion(60);
    h.insertion(50);
    h.insertion(40);
    h.insertion(30);
    h.insertion(20);


    h.print();

    return 0;
}