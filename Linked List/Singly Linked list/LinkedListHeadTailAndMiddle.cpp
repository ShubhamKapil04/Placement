#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;

    //Creating constructor to pass value
    Node(int data){
        this-> data = data;
        this-> Next = NULL;
    }
};

void insertionAtPosition(Node* &head, int position, int d){

    //Starting from the head
    Node* temp = head;
    //With the help of this we can we cam iterate from the starting
    int cnt = 1;

    while(cnt < position - 1){
        temp = temp->Next;
        cnt++;
    }

    //Creating new node to add data
    Node* NodeToInsert = new Node(d);
    //
    NodeToInsert->Next = temp->Next;
    // Temp next come to node to insert
    temp->Next = NodeToInsert;

}

void insertAtHead(Node* &head, int d)
{
    //Creating new node for head insertion
    Node* temp = new Node(d);
    // New node next = head
    temp->Next = head;
    //Head linked list change to temp
    head = temp;
}
//Inseertion At tail
void insertionAtTail(Node* &tail, int d){

    //Creating a new Node for insertion
    Node* temp = new Node(d);
    //Changing the tail value to new tail node
    tail->Next = temp;
    //now Tail will be change to temp
    tail =  temp;
}

//Print fuction
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
    Node* node1 = new Node(31);
    // cout << node1->data << endl;

    Node* head = node1;
    Node* tail = node1;
    insertionAtTail(tail, 23);
    insertionAtTail(tail, 20);
    insertionAtTail(tail, 43);
    insertionAtTail(tail, 54);
    insertionAtTail(tail, 2354);

    insertionAtPosition(head, 4, 15);

    print(head);
}