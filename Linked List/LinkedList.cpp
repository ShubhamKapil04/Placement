#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //Creating Constructor to create new node
    Node(int data){
        cout << "Cunstructor Call" << endl;
        this -> data = data;
        this -> next = NULL;
    }
};


int main(){
    //Creating in Heap Memory
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

}