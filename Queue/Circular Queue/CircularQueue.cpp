#include<iostream>
using namespace std;

class CircularQueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    // Intializing the Queue
    CircularQueue(int size){
        arr = new int[size];
        front = rear = -1;
    }

    //The push Statement
    void push(int d){
        //checking the Queue is full or not
        if((front == 0 && rear == size-1) || (rear == (front-1) % (size -1))){
            cout <<"Queue is full" << endl;
        }

        //First element Insertion
        else if(front == -1){
            front = rear = 0;
            arr[rear] = d;
        }
        else if(rear == size - 1 && front != 0){//to maintain cyclic nature
            rear = 0;
            arr[rear] = d;
        }
        else{//Normal Flow
            rear++;
            arr[rear] = d;
        }
    }

    int deQueue(){
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

    // int front(){
    //     if(front == rear){
    //         return -1;
    //     }
    //     else{
    //         return arr[front];
    //     }
    // }
};

int main()
{
    CircularQueue q1(10);

    q1.push(34);
    q1.push(54);

    cout << q1.front() << endl;
}