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

// void insertAthead(Node* &head, int d){

//     //if linked list is empty
//     if(head == NULL){
//         Node* newNode = new Node(d);
//         head = newNode;
//         // tail = newNode;
//     }
//     else{
//     //if there is another node and we have to put data in last node
//     Node* temp = new Node(d);
//     temp->next = head;
//     head = temp;
//     }
// }

void insertAtTail(Node* &tail, int d){

    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
    }
    else{
        //Create new Node
        Node* temp = new Node(d);
        //Pointing temp to tail;

        tail->next = temp;
        tail = temp;
    }
}

bool floyedsCycle(Node* &head){

    if(head==NULL){
        return false;
    }

    Node* slow = head;
    Node* fast = head;


    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow -> next;

        if(slow == fast){
            cout << "present at " << fast->data << endl; 
            return true;
        }
    }
    return false;
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
    Node* node1 = new Node(12);
    // Node* head = NULL;
    Node* head = node1;
    Node* tail = node1;
    // insertAthead(head, 121);

    // insertAthead(head, 432);
    // print(head);

    // insertAthead(head, 121);

    // insertAthead(head, 432);
    // print(head);

    insertAtTail(tail, 54);
    insertAtTail(tail, 34);
    insertAtTail(tail, 65);
    tail->next = head->next;

    if(floyedsCycle(head)){
        cout <<"Cycle is present" << endl;
    }
    else{
        cout <<"cycle is not present" << endl;
    }
    // print(head);

    // cout << node1->data << endl;


}