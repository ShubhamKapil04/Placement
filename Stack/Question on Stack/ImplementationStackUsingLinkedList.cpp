/*
Implement Stack using Linked List 
Basic Accuracy: 49.96% Submissions: 66512 Points: 1
Let's give it a try! You have a linked list and you have to implement the 
functionalities push and pop of stack using this given linked list. Your 
task is to use the class as shown in the comments in the code editor and 
complete the functions push() and pop() to implement a stack. 

Example 1:

Input: 
push(2)
push(3)
pop()
push(4) 
pop()
Output: 3 4
Explanation: 
push(2)    the stack will be {2}
push(3)    the stack will be {2 3}
pop()      poped element will be 3,
           the stack will be {2}
push(4)    the stack will be {2 4}
pop()      poped element will be 4
Example 2:

Input: 
pop()
push(4)
push(5)
pop()
Output: -1 5
Your Task: You are required to complete two methods push() and pop(). 
The push() method takes one argument, an integer 'x' to be pushed into 
the stack and pop() which returns an integer present at the top and 
popped out from the stack. If the stack is empty then return -1 from the pop() method.

Expected Time Complexity: O(1) for both push() and pop().
Expected Auxiliary Space: O(1) for both push() and pop().

Constraints:
1 <= Q <= 100
1 <= x <= 100

*/


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        MyStack *sq = new MyStack();

        int Q;
        cin >> Q;
        while (Q--) {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1) {
                int a;
                cin >> a;
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;
    }
}
// } Driver Code Ends


//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
   StackNode* temp = new StackNode(x);
//   if(top == NULL){
//       top = temp;
//       return;
//   }
//   else{
   temp -> next = top;
   top = temp;
//   }
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(!top){
        return -1;
    }
    else{
        int data = top->data;
        top = top->next;
        return data;
    }
}
