#include <bits/stdc++.h> 
using namespace std;
class Node 
{ 
    public:
    int data;
    Node *next;
    // Node(int data) 
    // {
    // this->data = data;
    // this->next = NULL;
    // }
};

int getLenght(Node* &head){

    Node* temp = head;
    int len = 0;

    //constion upto loop will work
    while(temp != NULL){
        temp = temp->next;
        len++;
    }

    // cout << len << endl;
    // returning the lenght
    return len;
}


void middleNode(Node* &head){

    //First We have to get the Lenght of Linked List
    int len = getLenght(head);

    //ans where we get the middle of lenght

    int ans = (len/2) + 1;

    Node* temp = head;

    int cnt = 1;
    while(cnt != ans){
        temp = temp->next;;
        cnt++;
    }
    cout << temp->data << endl;
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
    Node* node1 = new Node();
    Node* secHead = new Node();
    Node* middle = new Node();
    Node* tail = new Node();

    node1->data = 12;
    node1->next = secHead;
    secHead->data = 43;
    secHead->next = middle;
    middle->data = 321;
    middle->next = tail;
    tail->data = 32;
    tail->next = NULL;

  
    Node* head = node1;

    print(head);
    middleNode(head);
}