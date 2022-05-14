#include<iostream>
using namespace std;

class Stack{
    //Properties
    public:
    int top;
    int top2;
    int *arr;
    int size;

    //Behaviour
    //Constructure
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
        top2 = size;
    }


    void push(int element){
        if(top2 - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack is OverFlowing " << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << " Stack is UnderFlowing " << endl;
        }
    }

    void push2(int element){
        if(top2 - top > 1){
            top2++;
            arr[top2] = element;
        }
        else{
            cout << "Stack is OverFlowing " << endl;
        }
    }

    void pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
        }
        else{
            cout << " Stack is UnderFlowing " << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is Empty " << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Stack st(6);

    st.push(23);
    st.push(54);
    st.push(90);
    st.push2(34);
    st.push2(45);
    st.push2(80);
    // st.push(23);
    // st.push(54);
    // st.push(90);
    // st.push(54);
    // st.push(90);

    st.pop2();
    cout << st.peek() << endl; 

    cout << st.isEmpty() << endl;

    // st.display();
}