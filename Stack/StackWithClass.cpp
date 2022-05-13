#include<iostream>
using namespace std;

class Stack{
    //Properties
    public:
    int top;
    int *arr;
    int size;

    //Behaviour
    //Constructure
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }


    void push(int element){
        if(size - top > 1){
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
    st.push(23);
    st.push(54);
    st.push(90);
    st.push(54);
    // st.push(90);

    st.pop();
    cout << st.peek() << endl; 

    cout << st.isEmpty() << endl;

    st.display();
}