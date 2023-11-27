// https://www.codingninjas.com/studio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTabValue=SUBMISSION

/*

Node* approach1(Node *head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node* curr = head;
    while(curr != NULL){
        if(curr->data == 0){
            zeroCount++;
        }
        else if (curr->data == 1){
            oneCount++;
        }
        else if (curr->data == 2){
            twoCount++;
        }
        curr = curr->next;
    }
    // sort the linked list
    curr = head;
    while(curr != NULL){
        if(zeroCount != 0){
            curr->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            curr->data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            curr->data = 2;
            twoCount--;
        }
        curr = curr->next;
    }
    return head;
}

//****************************************************************************
void insertAtTail(Node* &tail, Node* &curr){
    tail->next = curr;
    tail = curr;
}

Node* approach2(Node *head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    Node* curr = head;
    // create seperate list of 0s, 1s and 2s
    while(curr != NULL){
        if(curr->data == 0){
            insertAtTail(zeroTail, curr);
        }
        else if(curr->data == 1){
            insertAtTail(oneTail, curr);
        }
        else if(curr->data == 2){
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }
    // merge 3 sublist
    if(oneHead->next != NULL){ // non empty list of 1s
        zeroTail->next = oneHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // setup head;
    head = zeroHead->next;

    // delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

Node* sortList(Node *head){
    // return approach1(head);
    return approach2(head);
}


*/


