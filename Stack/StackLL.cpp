#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    /* data */
};
struct Node* top = NULL;

// StackNode newNode(int d){
//     StackNode* stackNode = new StackNode();
//         this->data = data;
//         this->next = NULL;
//         return stackNode;
// }

void push(int element){
    //Create new Node
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = element;
    temp->next = top;
    top = temp;
    cout << "Data pushed " << element << endl;
}

void pop(){

    //empty case
    if(top ==NULL){
        cout << " Stack is UnderFlow " << endl;   
    }
    else{
        cout << " The popped element is " << top->data << endl;
        top = top->next;
    }
}

void peek(){
    struct Node* temp;
    if(top == NULL){
        cout << "Stack is empty" << endl; 
    }
    else{
        temp = top;
        cout << temp->data << endl;
    }

}

bool isEmpty(){
    if(top == NULL){
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    // struct Node* st = NULL;

    push(12);
    push(45);
    push(78);
    
    pop();

    peek();
    pop();
    // pop();

    if(isEmpty()){
        cout << "Stack is empty";
    }
    else{
        cout << "Stack have data";
    }
}

// // C++ program for linked list implementation of stack
// #include <bits/stdc++.h>
// using namespace std;

// // A structure to represent a stack
// class StackNode {
// public:
// 	int data;
// 	StackNode* next;
// };

// StackNode* newNode(int data)
// {
// 	StackNode* stackNode = new StackNode();
// 	stackNode->data = data;
// 	stackNode->next = NULL;
// 	return stackNode;
// }

// int isEmpty(StackNode* root)
// {
// 	return !root;
// }

// void push(StackNode** root, int data)
// {
// 	StackNode* stackNode = newNode(data);
// 	stackNode->next = *root;
// 	*root = stackNode;
// 	cout << data << " pushed to stack\n";
// }

// int pop(StackNode** root)
// {
// 	if (isEmpty(*root))
// 		return INT_MIN;
// 	StackNode* temp = *root;
// 	*root = (*root)->next;
// 	int popped = temp->data;
// 	free(temp);

// 	return popped;
// }

// int peek(StackNode* root)
// {
// 	if (isEmpty(root))
// 		return INT_MIN;
// 	return root->data;
// }

// // Driver code
// int main()
// {
// 	StackNode* root = NULL;

// 	push(&root, 10);
// 	push(&root, 20);
// 	push(&root, 30);

// 	cout << pop(&root) << " popped from stack\n";

// 	cout << "Top element is " << peek(root) << endl;
	
// 	cout<<"Elements present in stack : ";
// 	//print all elements in stack :
// 	while(!isEmpty(root))
// 	{
// 		// print top element in stack
// 		cout<<peek(root)<<" ";
// 		// remove top element in stack
// 		pop(&root);
// 	}

// 	return 0;
// }

// // This is code is contributed by rathbhupendra
