#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Creating Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //Creating Distructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "The free value is " << value << endl;
    }
 
};

void insertNode(Node* &tail, int element, int d){

    //linked list is empty
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
        return;
    }
    else{
        //non-empty List

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        //elemnet is found -> curr is represent the element
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }
}

void print(Node* &tail){

    Node* temp = tail;

    //If linked list is empty
    if(tail == NULL){
        cout << " Linked list is empty" << endl;
        return;
    }

    //if linked list have node

    do
    {
        cout << tail-> data <<" ";
        tail = tail->next;
    } while (tail!= temp);
    cout << endl;
}

void deletion(Node* &tail, int value){
    //Empty List
    if(tail==NULL){
        cout << "List is empty" << endl;
        return;
    }
    else{
        //Non - empty list

        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        //when curr = prev
        //Single node
        if(curr = prev){
            tail = NULL;
        }
        //2 or more node
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    // Node* node1 = new Node(12);

    
    // Node* tail = node1;
    Node* tail = NULL;

    //cout << node1->data << endl;

    insertNode(tail, 1, 543);
    print(tail);

    // insertNode(tail,543, 70);
    // print(tail);

    // insertNode(tail, 70, 45);
    // print(tail);

    // insertNode(tail, 45, 15);
    // print(tail);

    deletion(tail,543 );
    print(tail);
}