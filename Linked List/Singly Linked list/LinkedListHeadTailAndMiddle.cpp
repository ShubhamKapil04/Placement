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

    ~Node(){
        int value = this->data;
        if(this->Next != NULL){
            delete Next;
            this->Next = NULL;
        }
        cout << " Memeory is free for node with data "<< value  << endl;
    }
};


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
void insertionAtPosition(Node* &head, Node* &tail, int position, int d){
    //Inserting at head
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    //Starting from the head
    Node* temp = head;
    //With the help of this we can we cam iterate from the starting
    int cnt = 1;

    while(cnt < position - 1){
        temp = temp->Next;
        cnt++;
    }
    //Inserting At last position
    if(temp->Next == NULL){
        insertionAtTail(tail, d);
        return ;
    }
    //Creating new node to add data
    Node* NodeToInsert = new Node(d);
    //
    NodeToInsert->Next = temp->Next;
    // Temp next come to node to insert
    temp->Next = NodeToInsert;

}
//deletion of any Node
void deletionOfAnyNode(Node* &head, int Position){

    //Deletion From the headNode or Starting node
    if(Position == 1){
        Node* temp = head;
        head = head->Next;
        //memeory free
        temp->Next = NULL;
        delete temp;
    }
    //deleting Any Middle Node & last Node
    else{
        Node* curt = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < Position){
            prev = curt;
            curt = curt->Next;
            cnt++;
        }
        
        prev->Next = curt->Next;
        curt->Next = NULL;
        delete curt;
    }


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

    insertionAtPosition(head, tail, 7, 15);

    // cout << "Head --> " << head->data << endl;
    // cout << "Tail --> " << tail->data << endl;

    deletionOfAnyNode(head, 1);

    print(head);
}