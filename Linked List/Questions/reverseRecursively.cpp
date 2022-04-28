/*
    Time Complexity:O(N)
    Space Complexity:O(N)

    Where N is the total nodes in Linked List
*/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{

    // Base condition
    if (head == NULL || head->next == NULL) 
	{
        // Return the last node.
        return head;
    }

    // Reverse the rest of Linked List
    LinkedListNode<int> *rest = reverseLinkedList(head->next);

    // Changing the reference of next node next to itself
    head->next->next = head;

    // Assign current node next to NULL.
    head->next = NULL;

    // Return the reverse Linked List.
    return rest;

}

void reverse(LinkedListNode<int> *head, LinkedListNode<int> *curr, LinkedListNode<int> *prev){
	
	//base case
	if(curr == NULL){
		head = prev;
		return ;
	}
	
	LinkedListNode<int> *forward = curr->next;
	reverse(head, forword, curr);
	curr->next = prev;
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
	LinkedlistNode<int> curr = head;
	LinkedlistNode<int> prev = NULL;
	reverse(head, curr, prev);
	return head;
}