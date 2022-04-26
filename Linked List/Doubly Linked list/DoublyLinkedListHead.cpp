#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* pre;
    Node* next;

    //Creating a Constructor
    Node(int data){
        this->data = data;
        this->pre = NULL;
        this->next = NULL;
    }

    ~Node(){
        // this-value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;

        }
    }

};

void insertAtHead(Node* &head, Node* &tail, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    //creating new node
    Node* temp = new Node(d);

    // pointing the next value
    temp->next = head;
    head = temp;
    //temp->pre = NULL;
    }
}

void insertAtTail(Node* &tail, Node* &head, int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;

    }
    else{
    //Creating new Node
    Node* temp = new Node(d);
    //pointing temp to tail
    temp->pre = tail;
    tail->next = temp;
    tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int Position, int d){

    // If the postion is 1
    if(Position == 1){
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < Position - 1){
        temp = temp->next;
        cnt++;
    }

    // Condition to check if the node place is last
    if(temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }
    // Create a new node to insertion
    Node* NodeToInsert = new Node(d);

    NodeToInsert->next = temp->next;
    temp->next->pre = NodeToInsert;
    temp->next = NodeToInsert;
    NodeToInsert->pre = temp;

}

void deletion(Node* &head, Node* &tail, int postion){
    if(postion == 1){
        Node* temp = head;

        temp->next->pre = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting Last and middle node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;

        while(cnt < postion){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->pre - NULL;
        prev->next = curr->next;
        curr->next = NULL;     
        delete curr;
    }

}

void print(Node* &head){
    //Creating Pointer and Pointing it at head
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
        temp = temp->next;
        len++;
    }
    return len;
}

int main()
{
    Node* node1 = new Node(345);

    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, tail, 78);

    print(head);

    insertAtTail(tail, head, 86);
    insertAtTail(tail, head, 90);
    insertAtPosition(head, tail, 2, 5453);
    print(head);
    cout << getLenght(head) << endl;
    
    deletion(head, tail, 5);
    print(head);

}