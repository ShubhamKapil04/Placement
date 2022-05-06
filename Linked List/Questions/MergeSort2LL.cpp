#include<iostream>
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

void insertAthead(Node* &head, int d){
    //Empty Case
    if(head == NULL){
        Node* newNode = new Node(d);
        head = newNode;
        return;
    }

    //Create New Node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

Node* solve(Node* &first, Node* &second){

    //Create the pointer to point the values

    Node* curr1 = first;
    Node* curr2 = second;
    Node* next1 = curr1->next;
    Node* next2 = curr2->next;

    while( next1 != NULL && curr2 != NULL){

        //case to check where to put the value

        if( (curr2 -> data >= curr1 -> data) && (curr2 -> data <= next1 -> data) ){
            
            curr1 -> next = curr2;
            curr2 -> next = next1;
            curr1 = curr2;
            curr2 = next1; 

        }
        else{   

            curr1 =  next1;
            next1 = next1 -> next;
            //case to check if next1 is not equeal to NULL
            if(next1 == NULL){
                curr1->next = curr2;
                return first;
            }

        }
    }
    return first;
}

Node* merge2LL(Node* &first, Node* &second ){

    //Case to check linked list is empty or not
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }

    if(first->data <= second->data){
      return  solve(first, second);
    }

    else{
        return solve(second, first);
    }

}

Node* SortedMerge(Node* a, Node* b)
{
	Node* result = NULL;
	
	/* Base cases */
	if (a == NULL)
		return(b);
	else if (b == NULL)
		return(a);
	
	/* Pick either a or b, and recur */
	if (a->data <= b->data)
	{
		result = a;
		result->next = SortedMerge(a->next, b);
	}
	else
	{
		result = b;
		result->next = SortedMerge(a, b->next);
	}
	return(result);
}


void print(Node* &head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* node1 = new Node(5);
    Node* head1 = node1;
    insertAthead(head1, 3);
    insertAthead(head1, 1);
    cout << "1st Linked list --> ";
    print(head1);

    //2nd Node
    Node* node2 = new Node(5);
    Node* head2 = node2;
    insertAthead(head2, 4);
    insertAthead(head2, 2);
    cout << "2nd Linked list --> ";
    print(head2);

    cout <<"Merging 2 Linked list --> ";
    SortedMerge(node1, node2);
    print(head1);

}