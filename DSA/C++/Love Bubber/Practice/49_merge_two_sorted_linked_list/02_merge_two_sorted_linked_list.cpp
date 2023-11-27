/*
// https://www.codingninjas.com/studio/problems/merge-two-sorted-linked-lists_800332?leftPanelTabValue=SUBMISSION


Node<int>* solve(Node<int>* first, Node<int>* second){
    if(first->next == NULL){
        first->next = second;
        return first;
    }
    Node<int>* curr1 = first;
    Node<int>* next1 = first->next;
    Node<int>* curr2 = second;
    Node<int>* next2 = curr2->next;
    while(next1 != NULL && curr2 != NULL){
        if((curr2->data >= curr1->data) && (curr2->data <= next1->data)){
            // insert the curr2 in the first list
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            // update the pointer
            curr1 = curr2;
            curr2 = next2;
        }
        else{
            // increase curr1 and next1
            curr1 = next1;
            next1 = next1->next;
            
            if(next1 == NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }
    if(first->data <= second->data){
        return solve(first, second);
    }
    else{
        return solve(second, first);
    }
}


*/

