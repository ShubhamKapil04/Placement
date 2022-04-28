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