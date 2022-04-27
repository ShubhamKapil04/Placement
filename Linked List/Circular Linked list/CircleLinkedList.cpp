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

    ~Node(){
        if(this->next = NULL){
            delete next;
            next = NULL;
        }
    }
};

void insertNode(Node* &tail, int element, int d){
    //Assuming that we have the element are in the linked list

    //emepty case
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // non-empty list
        //Asumming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        //element found -> curr is represented element node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next =  temp;
    }
}



void print(Node* &tail){

    Node* temp = tail;

    // while(tail->next != temp){
    //     cout << tail->data << " ";
    //     tail = tail->next;
    // }
    // cout << endl;

    do{
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
    
}

void deletion(Node* &tail, int value){

    //Empty List
    if(tail == NULL){
        cout << " List is empty " << endl;
        return;
    }
    else{
        // Non - empty

        // Assuming that "value" is present in Linked list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr -> data != value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}


int main()
{
    // Node* node1 = new Node(23);

    Node* tail = NULL;
    // Node* tail = node1;

    insertNode(tail, 1, 3);
    print(tail);

    // insertNode(tail, 3, 5);
    // print(tail);

    // insertNode(tail, 5, 7);
    // print(tail);

    // insertNode(tail, 3, 10);
    // print(tail);

    // insertNode(tail, 5, 11);
    // print(tail);

    deletion(tail, 3);
     print(tail);

}