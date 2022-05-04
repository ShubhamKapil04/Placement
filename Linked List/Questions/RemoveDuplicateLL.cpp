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

    // ~Node(){
    //     int value = data;
    //     if(this->next != NULL){
    //         delete next;
    //         next = NULL;
    //     }
    //     cout << " Deleted node is " << value << endl;
    // }
};

void insertionAtHead(Node* &tail, int d){

    //Creating new Node
    if(tail == NULL){
        Node* newNode = new Node(d);
        newNode = tail;
        return;
    }

    //Create new node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void deleteNode(Node* &head){

    //Empty
    if(head == NULL){
        return ;
    }

    Node* curr = head;

    while(curr != NULL){
        // (curr->next != NULL) &&
        if( curr->next != NULL && curr -> data == curr -> next -> data){
            Node* next_next = curr->next->next;
            Node* NodetoDelete = curr->next;
            delete(NodetoDelete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return ;
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
    Node* tail = node1;

    insertionAtHead(tail, 5);
    insertionAtHead(tail, 4);
    insertionAtHead(tail, 4);
    insertionAtHead(tail, 3);
    insertionAtHead(tail, 2);
    insertionAtHead(tail, 2);
    cout << "Before Deleting the Node the Linked List is--> " ;
    print(head);
    deleteNode(head);
    cout << "After deleting the Node the Linked List is--> ";
    print(head);

    // print(head);

}

//Time Complexity --  O(n);
//Space Complexity -- O(1);