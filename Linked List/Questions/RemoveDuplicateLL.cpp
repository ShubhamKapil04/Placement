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
        cout << " Deleted node is " << value << endl;
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

Node* deleteNode(Node* &head){

    //Empty
    if(head == NULL){
        return NULL;
    }

    Node* curr = head;

    while(curr != NULL){

        if((curr->next != NULL) && curr->data == curr-> next -> data){
            Node* next_next = curr->next->next;
            Node* NodetoDelete = curr->next;
            delete(NodetoDelete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
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



int main()
{

    Node* node1 = new Node(5);
    Node* head = node1;

    insertionAtHead(head, 5);
    insertionAtHead(head, 4);
    insertionAtHead(head, 4);
    insertionAtHead(head, 3);
    insertionAtHead(head, 2);
    insertionAtHead(head, 2);
    deleteNode(head);
    print(head);

   

    // print(head);

}