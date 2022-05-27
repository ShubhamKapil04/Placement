#include<iostream>
using namespace std;
class dQueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;


    dQueue(int n){
        this->size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    void pushFront(int  data){
        //if Queue is full
        if((front == 0 && rear == size-1) || (rear ==(front -1) %(size-1))){
            cout << "Queue is full"<< endl;
        }
        if(front == -1){
            //Means pushibg first element
            front = rear = 0;
            arr[front] = data;
        }
        else if(front == 0 &&  rear != size -1){
            //Cyclic Nature
            front = size-1;
        }
        else{
            front--;
        }
        arr[front] = data;
        return;
    }

    void pushRear(int data){
        //empty or not
        if((front == 0 && rear == size - 1) || (rear ==(front - 1)%(size - 1))){
            cout << "Queue is full" <<endl;
        }

        else if(front == -1){
            //Inserting at First position
            front = rear = 0;
            arr[rear] = data;
        }
        else if(rear == size - 1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
            arr[rear] = data;
            return;
        }

    }

    int popFront(){
        //Empty Condition
        if(front == -1){
            cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){//single element
            front = rear = -1;
        }
        else if(front == size-1){//to maintain cyclic nature
            front = 0;
        }
        else{//Normal Flow
            front++;
        }

        return ans;
    }
    
    int popRear(){
        //Empty
        if(front == -1){
            cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if(front == rear){//single element
            front = rear = -1;
        }
        else if(rear == 0){//to maintain cyclic nature
            rear = size - 1;
        }
        else{//Normal Flow
            rear++;
        }

        return ans;
    }
    
};

int main()
{

    dQueue q1(10);

    q1.pushFront(34);
    q1.pushRear(54);
}