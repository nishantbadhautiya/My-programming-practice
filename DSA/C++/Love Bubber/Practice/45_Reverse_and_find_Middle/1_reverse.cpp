// https://www.codingninjas.com/studio/problems/reverse-linked-list_920513?leftPanelTabValue=SUBMISSION 

/*
// Iterative way to reverse a linked list 

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node *curr = head;
    Node *prev = NULL;
    Node *forward = NULL;
    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return  prev;
}

*/



// ***************************************************************************************



/*
// Recursive way to reverse a linked list 

void reverse(Node* &head, Node* &curr,Node* &prev){
    // Node *forward = NULL;
    // base case 
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

Node* reverseLinkedList(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    reverse(head, curr, prev);
    return  head;
}

*/


// ***************************************************************************************

/*


Node* reverse_two(Node* &head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* chotaHead = reverse_two(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return chotaHead;
}

Node* reverseLinkedList(Node *head)
{
    return reverse_two(head);
}

*/
