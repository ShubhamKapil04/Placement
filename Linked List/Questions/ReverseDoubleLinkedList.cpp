#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void reverseLinkedList(Node* & head){
    
    // if(head == NULL || head->next == NULL){
    //     return head;
    // }
    Node* temp = NULL;
    Node* current = head;
     
    /* swap next and prev for all nodes of
    doubly linked list */
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;            
        current = current->prev;
    }
     
    /* Before changing the head, check for the cases like empty
        list and list with only one node */
    if(temp != NULL ){
        head = temp->prev;
     }
    
}

void print(Node* &head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node* head = new Node();
    Node* secondNode = new Node();
    Node* thirdNode = new Node();
    Node* forthNode = new Node();
    Node* tailNode = new Node();

    head->prev = NULL;
    head->data = 12;
    head->next = secondNode;

    secondNode->prev = head;
    secondNode->data = 13;
    secondNode->next = thirdNode;

    thirdNode->prev = secondNode;
    thirdNode->data = 14;
    thirdNode->next = forthNode;

    forthNode->prev = thirdNode;
    forthNode->data = 15;
    forthNode->next = tailNode;

    tailNode->prev = forthNode ;
    tailNode->data = 11;
    tailNode->next = NULL;

    cout << " before linked list reverseed --> ";
    print(head);
    reverseLinkedList(head);
    cout << " After linked list reverseed --> ";
    print(head);




}