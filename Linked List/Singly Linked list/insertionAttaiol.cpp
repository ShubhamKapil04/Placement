#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //Creeating constructor to add nodes
    //With the help of insertion we can insert data in node
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void inserAtHead(Node* &head, int d){

    //  Creating new Node 
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

//Printing Function to  Iterate in Linked list
void print(Node* &head){

    //Creating Pointer for head
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next ;
    }

    cout << endl;
}

int main(){
    Node* node1 = new Node(21);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node* head = node1;
    inserAtHead(head, 22);
    print(head);


}