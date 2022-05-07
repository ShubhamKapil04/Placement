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

bool isPalidrome(vector<int> arr){

    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while(s <= e){

        if(arr[s] != arr[e]){
            return false;
        }
       s++;
       e--;
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
    insertAtTail (tail, 2);
    insertAtTail (tail, 1);

    print(head);

    vector<int> arr;

    Node* temp = head;

    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp -> next;
    }

    cout << isPalidrome(arr);
}

//Time Compexity --> O(n)
//Space Complexity --> O(n)