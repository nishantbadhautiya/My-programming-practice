/*
// https://www.codingninjas.com/studio/problems/merge-sort-linked-list_920473


Node* findMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* &left, Node* &right){
    // if any linked list is empty
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;
    while(left != NULL && right != NULL){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    // copy the left List
    while(left != NULL){
        temp->next = left;
        temp = left;
        left = left->next;
    }
    // copy the right List
    while(right != NULL){
        temp->next = right;
        temp = right;
        right = right->next;
    }
    return ans->next;
}

Node *sortLL(Node *head){
    // base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* mid = findMid(head);

    // divide into two parts
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    // sort both linked list using recursion 
    left = sortLL(left);
    right = sortLL(right);

    // merge both linked list
    Node* result = merge(left, right);
    return result;
}



*/

