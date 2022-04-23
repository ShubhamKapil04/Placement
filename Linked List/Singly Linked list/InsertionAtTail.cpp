#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Creating Constructor For insertion
    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }

};
void insertAtHead(Node* &head, int d)
{
    //Prepare the new node
    Node* temp = new Node(d);
    // temp->data = d;
    //Put it in front of current head
    temp->next = head;
    //Move head of list to point to the newnode
    head = temp;

}

void insertionAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(Node* &head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data <<  " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){ 
    Node* node1 = new Node(21);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node* head = node1;
    Node* tail = node1;
    insertionAtTail(tail, 23);
    insertionAtTail(tail, 25);
    insertionAtTail(tail, 27);
    print(head);
}