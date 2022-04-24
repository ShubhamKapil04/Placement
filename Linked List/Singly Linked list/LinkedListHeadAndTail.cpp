#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* Next;

    Node(int data){
        this->data = data;
        this->Next = NULL;
    }
};

void insertionAtHead(Node* &head, int d){
    //1 Creating new node for storing data
    Node* temp = new Node(d);
    //Put it the front of current head
    temp->Next = head;
    //Move list head to the temp 
    head = temp;
}

void insertionAtTail(Node* &tail, int d){

    //Creating New Node
    Node* temp = new Node(d);
    //pointing the tail to temp
    tail->Next = temp;
    //temp next value will be Null & tail
    tail = temp;


}

void print(Node* &head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->Next;
    }
    cout << endl;
}


int main()
{
    Node* node1 = new Node(21);

    Node* head = node1;
    Node* tail = node1;

    insertionAtTail(tail, 23);
    insertionAtTail(tail, 24);
    insertionAtTail(tail, 25);
    insertionAtTail(tail, 28);
    insertionAtTail(tail, 29);

    print(head);
}