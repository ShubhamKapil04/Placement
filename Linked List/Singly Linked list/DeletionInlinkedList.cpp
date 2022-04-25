#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* Next;

    //Creating Constructor
    Node(int data){
        this->data = data;
        this->Next = NULL;
    }
    // creating destructor to delete the memory
    ~Node(){
        if(this->Next != NULL){
            delete Next;
            this->Next = NULL;
        }
    }
};

void insertionAtHead(Node* &head, int d){
    //Creatinig new Node for insertion
    Node* temp = new Node(d);

    //temp node will point to next node
    temp->Next = head;
    //head will be temp now
    head = temp;
}

void insertionAtTail(Node* &tail, int d){

    // Creating New node for insertion
    Node* temp = new Node(d);
    //tail value will be temp
    tail->Next = temp;
    //temp will be the tail
    tail = temp;
}

void insertionAtAnyPosition(Node* &head, Node* &tail, int Position, int d){
    //If the postionof new node is 1
    if(Position == 1){
        insertionAtHead(head, d);
        return;
    }

    //Starting from head
    Node* temp = head;
    int cnt = 1;

    while(cnt != Position){
        temp = temp->Next;
        cnt++;
    }

    //If you inserting on the Last Postion
    if(temp->Next == NULL){
        insertionAtTail(tail, d);
        return;
    }

    //Create new node to add data
    Node* NodeToInsert = new Node(d);
    //new node next value is in temp next
    NodeToInsert->Next = temp->Next;

    //temp next become NodeToInsert POinter
    temp->Next = NodeToInsert;
}
//Delete any node
void deleteNode(Node* &head, int Position){

    if(Position == 1){
        Node* temp = head;
        head = head->Next;

        //Free Memory
        temp->Next = NULL;
        delete temp;
    }
    else{
        Node* currnt = head;
        Node* previous = NULL;

        int cnt = 1;

        while(cnt < Position){
            previous = currnt;
            currnt = currnt->Next;
            cnt++;
        }
        previous->Next = currnt->Next;
        currnt->Next = NULL;
        delete currnt;
    }
}

void print(Node* &head){

    //Creating a Pointer which point to head
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data <<  " ";
        temp = temp->Next;
    }
    cout << endl;
}

int main()
{

    Node* node1 = new Node(32);
    
    Node* head = node1;
    Node* tail = node1;

    insertionAtTail(tail, 54);
    insertionAtTail(tail, 67);
    insertionAtTail(tail, 89);
    insertionAtAnyPosition(head, tail, 1, 90);
    print(head);
    deleteNode(head, 5);
    print(head);
    cout << tail->data << endl;

}