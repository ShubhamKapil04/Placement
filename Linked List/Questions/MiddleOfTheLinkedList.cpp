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


int getLenght(Node* head){
	int len = 0;
	while(head != NULL){
		len++;
		head = head -> next;
	}
	return len;
}
Node *findMiddle(Node *head) {
    int len = getLenght(head);
	
	int ans = (len/2) + 1;
	
	Node* temp = head;
	
	int cnt = 1;
	while(cnt != ans){
		temp = temp -> next ;
		cnt++;
	}
    cout << temp;
	return temp;	
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
    findMiddle(head);
}