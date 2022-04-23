#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){

    //Create new node

    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){

    //Creating new Node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node* &tail, Node* &head, int Position, int d){

    // Starting node Insertion
    if(Position == 1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < Position - 1){
        temp = temp->next;
        cnt++;
    }   //Inserting at tail
    if(temp->next = NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    //Creating noce for D
    Node* nodetoInsert = new Node(d);

    nodetoInsert -> next = temp->next;

    temp->next = nodetoInsert;

}

void print(Node* &head){
    Node* temp = head;

    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

}

int main(){

    Node* kartik = new Node(20);
    // cout << kartik->data << endl;
    // cout << kartik->next << endl;

    //Head pointed to kartik
    Node* head = kartik;
    Node* tail = kartik;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 13);
    print(head);

    insertAtPosition(tail, head, 2, 22);
    print(head);

    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;
    return 0;
}