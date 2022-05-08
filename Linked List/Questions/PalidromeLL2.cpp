#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int v){
        this->data = v;
        this->next = NULL;
    }

};

void  insertAtTail(Node* &tail, int d){

    if(tail == NULL){
        Node* newNode = new Node(d);
        tail -> next = newNode;
        tail = newNode;
    }

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

Node* getMid(Node* &head){

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL || fast != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }

    return slow;

}

Node* reverse(Node* &head){

    Node* curr = head;
    Node* next = NULL;
    Node* prev = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalidrome(Node* head1, Node* head2){

    while(head2 != NULL){
        if(head1 -> data != head2 -> data){
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    return true;
}
void print(Node* &head){
    Node* temp = head;

    while( temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail (tail, 2);
    insertAtTail (tail, 1);
    insertAtTail (tail, 1);
    insertAtTail (tail, 3);
    insertAtTail (tail, 1);

    print(head);

    //Step 1 get mid
    Node* middle = getMid(head);

    //Step 2 reverse the LL from the middle

    Node* temp = middle -> next;
    middle -> next = reverse(temp);

    //Step 3 Compare fast half with another half

    Node* head1 = head;
    Node* head2 = middle->next;
    cout << isPalidrome(head1, head2);

    // while(head2 != NULL){
    //     if(head1 -> data != head2 -> data){
    //         return false;
    //     }
    //     head1 = head1 -> next;
    //     head2 = head2 -> next;
    // }
    // return true;
}

//Time Compexity --> O(n)
//Space Complexity --> O(1)


