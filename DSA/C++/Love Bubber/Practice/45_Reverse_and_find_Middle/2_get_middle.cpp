/*


Node *solution(Node *head){
    int len = 0;
    // getting length of the linked list
    Node *temp = head;
    while(temp != NULL){
        temp = temp -> next;
        len++;
    }
    int midnode = (len / 2) + 1;
    // find the middle node 
    temp = head;
    int index = 1;
    while(index < midnode){
        temp = temp->next;
        index++;
    }
    return temp;
}

Node *solution2(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    if (head->next->next == NULL){
        return head->next;
    }
    else{
        Node* noob = head;
        Node* pro = head->next;
        while(pro != NULL){
            pro = pro->next;
            if(pro != NULL){
                pro = pro->next;
            }
            noob = noob->next;
        }
        return noob;
    }
}

Node *findMiddle(Node *head) {
    // return solution(head);
    return solution2(head);
}


*/
