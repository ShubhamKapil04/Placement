#include<iostream>
using namespace std;

class TwoStack {

public:
	int *arr;
	int top1;
	int top2;
	int size;

    // Initialize TwoStack.
    TwoStack(int s) {
        this->size = s;
		top1 = -1;
		top2 = s;
		arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        //Checking condition to atlest have one space in array
		if(top2 - top1 > 1){
			top1++;
			arr[top1] = num;
		}
        else{
            cout << "Stack is OverFlow" << endl; 
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2 - top1 > 1){
			top2--;
			arr[top2] = num;
		}else{
            cout << "Stack is OverFlow" << endl;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 >= 0){
			int ans = arr[top1];
			top1--;
			return ans;
		}
		else{
            cout <<"Stack is under Flow" << endl;
			return -1;
		}
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 < size){
			int ans = arr[top2];
			top2++;
			return ans;
		}
		else{
            cout <<"Stack is under Flow" << endl;
			return -1;
		}
    }

};

int mian()
{
    TwoStack st(6);
    st.push1(23);
    st.push1(34);
    st.push1(65);

    st.push2(90);
    st.push2(54);
    st.push2(76);

    st.pop1();
    return 0;
}