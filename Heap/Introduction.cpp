#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

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

    void deletefromHeap(){
        if(size == 0){
            cout << "Heap is Empty" << endl;
            return;
        }

        // Pehli node me last node dal do
        arr[1] = arr[size];
        // Remove last element
        size--;

        //Take root node to its correct Position
        int i = 1;
        while(i < size){
            int leftIndex = 2*i;
            int rightIndx = 2*i+1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndx < size && arr[i] < arr[rightIndx]){
                swap(arr[i], arr[rightIndx]);
                i = rightIndx;
            }
            else{
                return;
            }
        }

    }
};
int main(){
   heap h;

   h.insertion(20); 
   h.insertion(40); 
   h.insertion(60); 
   h.insertion(70); 
   h.insertion(80); 
   h.insertion(90); 
   h.insertion(100); 
   h.print();

   h.deletefromHeap();
   h.print();

    return 0;
}