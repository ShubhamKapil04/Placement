#include<iostream>
using namespace std;

class Queue{
    //Queue properties
    public:
    int* arr;
    int front;
    int rear;
    int size;
    public:
    Queue(){
        size = 1000;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data){
        if(rear == size){
            cout << "Queue is  full" << endl;
            return ;
        }
        else{
            arr[rear] =  data;
            rear++;
        }

    }

    int deQueue(){
        if(front==rear){
            cout << "Queue is empty";
            return -1;
        }
        else{
            int ans = front;
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int qfront(){
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    bool isempty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }

    // void print(){
    //     while(){
    //         cout << arr[front];
    //         front++;
    //     }
    // }

};
int main()
{
    //Creating object
    Queue q1;

    q1.push(10);
    cout << q1.qfront() << endl;
    q1.push(45);
    q1.push(78);

    if(q1.isempty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }
    
    q1.deQueue();
    q1.deQueue();
    q1.deQueue();

    if(q1.isempty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }
    cout << q1.qfront() << endl; 

}
