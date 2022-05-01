#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

};

Node* reverseKposition(Node* head, int position){

    //Step 1
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;

    while(curr != NULL && count < position){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    //Step 2 Recursive Call
    if(next != NULL){
        head->next = reverseKposition(next, position);
    }

    return prev;
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
    Node* second = new Node();
    Node* third = new Node();
    Node* tail = new Node();

    head->data = 2;
    head->next = second;
    second->data = 3;
    second->next = third;
    third->data = 4;
    third->next = tail;
    tail->data = 5;
    tail->next = NULL;

    int k = 2;

    return reverseKposition(head, k);

    // print(head);

}