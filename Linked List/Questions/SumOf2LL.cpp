#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};

void insertAthead(Node* &head, int d){

    //empty case
    if(head == NULL){
        Node* newNode = new Node(d);
        head = newNode;
    }
    else{

        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
}

Node* reverse(Node* &head){

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while( curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void inertAtTail(Node* &head, Node* &tail, int val){

    Node* temp = new Node(val);
    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        tail -> next = temp;
        tail = temp;
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
Node* add(Node* &first, Node* &second){

    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first != NULL && second != NULL){
        int sum = carry + first->data + second->data;
        int digit = sum % 10;

        // Node* temp = new Node(digit);
        inertAtTail(ansHead, ansTail, digit);

        carry = sum/10;

        first = first -> next;
        second = second -> next;
    }

    while(first != NULL){
        int sum = carry + first->data + second->data;
        int digit = sum % 10;

        // Node* temp = new Node(digit);
        inertAtTail(ansHead, ansTail, digit);

        carry = sum/10;
        first = first -> next;
    }
    while(second != NULL){

        int sum = carry + first->data + second->data;
        int digit = sum % 10;

        // Node* temp = new Node(digit);
        inertAtTail(ansHead, ansTail, digit);

        carry = sum/10;
        second = second -> next;
    }
    while(carry != 0){
        int sum = carry;
        int digit = sum%10;

        inertAtTail(ansHead, ansTail, digit);
        carry = sum/10;
        
    }
    print(ansHead);
    return ansHead;
    
}

int main()
{
    Node* node1 = new Node(5);
    Node* head1 = node1;
    insertAthead(head1, 3);
    // insertAthead(head1, 1);
    cout << "1st Linked list --> ";
    print(head1);

    //2nd Node
    Node* node2 = new Node(5);
    Node* head2 = node2;
    insertAthead(head2, 4);
    insertAthead(head2, 2);
    cout << "2nd Linked list --> ";
    print(head2);

    reverse(head1);
    // cout << "Reverse of linked list 1 --> ";
    // print(head1);

    reverse(head2);
    // cout << "Reverse of linked list 2 --> ";
    // print(head2);

    //Step 2 Add 2 linked list

    Node* ans = add(node1, node2);

    //Step 3
    print(ans);

}