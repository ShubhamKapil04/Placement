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

void insertaAtTail(Node* &tail, int d){

    //empty case
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
    }
    else{

        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }
}

Node* floyedDetection(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast != NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow = slow->next;
        if(slow==fast){
            return slow;
        }
    }

    return NULL;
}

Node* intersectionPoint(Node* &head){
    // here we checked if LL is empty if yes then return NULL
    if(head == NULL){
        return NULL;
    }
    //  Here i got the intersection point where fast ans slow met by FCA
    //  after that i pointed the slow to head
    Node* intersection = floyedDetection(head);
    Node* slow = head;
    // Here i started the loop for slow and the intersection point or Fast
    // and incremented them by one one position

    while(slow != NULL && intersection != NULL){
        slow = slow->next;
        intersection = intersection->next;
        //here i checked that slow is == to fast if yes then return that value which 
        // is the satrting of loop 
        if(slow == intersection){
            return slow;
        }
    }
    return NULL;

}

void deleteLoop(Node* &head){

    if(head == NULL){
        return;
    }
    Node* start = intersectionPoint(head);
    Node* temp = start;

    while(temp->next != start){
        temp = temp->next;
    }
    temp->next = NULL;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    Node* node1 = new Node(87);

    Node* head = node1;
    Node* tail = node1;

    insertaAtTail(tail, 54);
    insertaAtTail(tail, 67);
    insertaAtTail(tail, 87);
    insertaAtTail(tail, 43);

    tail->next = head->next;

    if(floyedDetection(head) != NULL){
        cout << "LL is cycle" << endl;
    }
    else{
        cout << " LL is not cycle" << endl;
    }

    Node* loop = intersectionPoint(head);

    cout << "The starting point of loop is " << loop->data << endl;

    deleteLoop(head);
    
    print(head);
     
}


// Time Complexity --> O(n);
// Space Complexity --> O(1); which is constant space 