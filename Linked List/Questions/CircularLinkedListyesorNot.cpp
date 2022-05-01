#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertNode(Node* &tail, int element, int d){

    //empty cae
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
        return;
    }
    else{
        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }
}

void print(Node* &tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<< "Linked list is Empty" << endl;
        return;
    }

    do{
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != tail);
    cout << endl;
}
bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;

}
int main()
{
    Node* tail = NULL;

    insertNode(tail, 1, 3);
    print(tail);

    if(isCircularList(tail)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }

}