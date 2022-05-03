#include<iostream>
#include<map> 
using namespace std;
class Node{
    public:
    int data;
    Node* next;


    //Creating Costructor

    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};

void insertNode(Node* &tail, int element, int d){
    //empty Case
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

bool isCircular(Node*  &tail){
//  Empty case
    if(tail == NULL){
        return true;
    }

    Node* temp = tail->next;
    while(temp!=NULL && temp!=tail){
        temp = temp->next;
    }

    if(temp == tail){
        return true;
    }
    return false;
}

bool detectLoop(Node* head){

    //Base case
    if(head==NULL){
        return NULL;
    }

    map<Node*, bool>visited;

    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] == true){
            cout << temp->data <<" ";
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

void print(Node* &tail){

    Node* temp = tail;
    if(tail == NULL){
        cout << "Linked list is empty" << endl;
        return;
    }

    do
    {
        cout << temp->data <<" ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
    

}
int main()
{
    Node* tail = NULL;

    insertNode(tail, 1, 12);
    insertNode(tail, 12, 54);
    insertNode(tail, 54, 76);
    insertNode(tail, 76, 879);
    insertNode(tail, 879, 90);
    insertNode(tail, 90, 654);
/*
    if(isCircular(tail)){
        cout << "linked lsit is Circluar in Nature" << endl;
    }
    else{
        cout << "Linked list is not circular in nature"<< endl;
    }

    print(tail);
    // cout << tail->next << endl;
    */
   if(detectLoop(tail)){
       cout << "loop is present";
   }
   else{
       cout <<" Loop is not present" ;
   }

}