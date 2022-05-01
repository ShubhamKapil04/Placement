/*
 Given a singly linked list of integers. Your task  
 is to return the head of the reversed linked list.
*/

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Creating Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //Creating Distructor

    ~Node(){
        int value = data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << " Deleting node is " << value << endl;
    }
};

void insertionAtHead(Node* &head, int d){

    //Creating new Node
    if(head == NULL){
        Node* newNode = new Node(d);
        newNode = head;
        return;
    }

    //Create new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head){
    //creating pointer 
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node reverse(Node* &head){
    //empty list
    if(head == NULL || head->next == NULL){
        return *head;
    }

    //Creating node
    Node* prev = NULL;
    Node* curr = head;
    Node* fow = NULL; 

    while(curr != NULL){
        fow = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = fow;
    }
    print(head);
    return *prev;

}

int main()
{

    Node* node1 = new Node(12);
    Node* head = node1;

    // insertionAtHead(head, 32);
    // insertionAtHead(head, 34);
    // insertionAtHead(head, 36);
    // insertionAtHead(head, 37);
    // insertionAtHead(head, 38);
    // insertionAtHead(head, 39);
    print(head);

    Node* reverse (head);

    // print(head);

}


//Complexity

// Time Complexity ---> O(n);
// Space Complexity --> O(1);

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
// 	//Empty case
// 	if(head == NULL || head->next == NULL){
// 		return head;
// 	}
// 	LinkedListNode<int> *prev = NULL;
// 	LinkedListNode<int>  *curr = head;
// 	LinkedListNode<int> *fow = NULL;
	
// 	while(curr != NULL){
// 		fow = curr -> next;
// 		curr->next = prev;
// 		prev = curr;
// 		curr = fow;
// 	}
// 	return prev;
   
// }