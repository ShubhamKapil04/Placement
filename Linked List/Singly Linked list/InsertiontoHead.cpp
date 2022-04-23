#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Creating constructor for node
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void insertionAtHead(Node* &head, int d){
    //Inserting at Head of the linked list
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
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
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node* head = node1;

    insertionAtHead(head, 12);
    insertionAtHead(head, 34);
    insertionAtHead(head, 78);

    print(head);
}