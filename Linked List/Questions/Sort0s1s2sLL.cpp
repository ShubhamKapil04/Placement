#include<iostream>
using namespace std;


class Node
    {
    public:
        int data;
        Node *next;

    Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};

void insert(Node* &head, int d){

    if(head == NULL){
        Node* newNode = new Node(d);
        head = newNode;
    }

    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
Node* sortList(Node *head)
{
    int ZeroCount = 0;
	int OneCount = 0;
	int TwoCount = 0;
	
	Node* temp = head;
	
	while(temp != NULL){
		
		if(temp->data == 0){
			ZeroCount++;
		}
		else if(temp->data == 1){
			OneCount++;
		}
		else if(temp->data == 2){
			TwoCount++;
		}
		temp = temp->next;
	}
	temp = head;
	while(temp != NULL){
		if(ZeroCount != 0){
			temp->data = 0;
			ZeroCount--;
		}
		else if(OneCount != 0){
			temp->data = 1;
			OneCount--;
		}
		else if(TwoCount != 0){
			temp->data = 2;
			TwoCount--;
		}
		temp = temp->next;
	}
	return head;
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
    Node* node1 = new Node(0);
    Node* head = node1;

    insert(head, 1);
    insert(head, 0);
    insert(head, 2);
    insert(head, 1);
    insert(head, 0);
    insert(head, 0);
    insert(head, 1);
    cout << "Before Soreting the Values --> " ;
    print(head);

    sortList(head);
    cout << "After Sorting the Values --> ";

    print(head);
}

//Time Complexity -- O(n);
//Space Complexity -- O(1);