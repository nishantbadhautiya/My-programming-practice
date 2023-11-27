/*


bool isCircular(Node* head){
    // Write your code here.
    if(head == NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if(temp == NULL){
        return false;
    }
    else{
        return true;
    }
}

// can also solved by using map
*/