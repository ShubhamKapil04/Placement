#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void insertionAtHead(Node* &head, int d){
    //empty Case
    if(head == NULL){
        Node* newNode = new Node(d);
        head = newNode;
        return;
    }

    //create new node
    Node* temp = new Node(d);
    temp->next = head;
    head  = temp;
}

void deleteDuplicate(Node* &head){
    //empty Case
    if(head == NULL){
        return ;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* duplicate = NULL;

    while(curr != NULL && curr->next != NULL){
        prev = curr;
        
        while( prev->next != NULL ){
            
    
            if(curr->data == prev->next->data){
               duplicate = prev->next;
               prev->next = prev->next->next;
               delete(duplicate);
            }
            else{
                prev = prev->next;
            }
        }
        curr = curr->next;
        
    }
}

void print(Node* &head){

    Node* temp = head;

    while(temp  != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node* node1 = new Node(12);
    Node* head = node1;
    Node* tail = node1;
    insertionAtHead(head, 3);
    insertionAtHead(head, 12);
    insertionAtHead(head, 65);
    insertionAtHead(head, 65);
    insertionAtHead(head, 76);
    insertionAtHead(head, 12);
    cout << "Before Linked list duplicate deleted --> " <<" "; 
    print(head);

    deleteDuplicate(head);
    cout << "After Deleting Duplicate from Linked List --> " <<" ";
    print(head);
}