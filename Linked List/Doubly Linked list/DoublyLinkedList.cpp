#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* pre;
    Node* next;

    Node(int data){
        this->data = data;
        this->pre = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    
    Node* temp = new Node(d);

    temp->next = head;

    head = temp;

}

void insertionAtTail(Node* &tail, int d){

    Node* temp = new Node(d);

    tail->next = temp;

    tail = temp;

}

void insertAtPosition(Node* &head, Node* &tail, int Position, int d){
//If the postionof new node is 1
    if(Position == 1){
        insertAtHead(head, d);
        return;
    }

    //Starting from head
    Node* temp = head;
    int cnt = 1;

    while(cnt != Position){
        temp = temp->next;
        cnt++;
    }

    //If you inserting on the Last Postion
    if(temp->next == NULL){
        insertionAtTail(tail, d);
        return;
    }

    Node* NodeToInsert = new Node(d);

    NodeToInsert->next = temp->next;
    temp->next->pre = NodeToInsert;
    temp->next = NodeToInsert;
    NodeToInsert->pre = temp; 
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}

int getLenght(Node* &head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{
    Node* node1 = new Node(19);

    Node* head = node1;
    Node* tail = node1;
    // cout << node1->pre << endl;
    // cout << node1->next << endl;


    insertAtHead(head, 32);
    insertionAtTail(tail, 43);
    print(head);

    insertAtPosition(head, tail, 2, 890);
    cout << getLenght(head) << endl;
    print(head);
}