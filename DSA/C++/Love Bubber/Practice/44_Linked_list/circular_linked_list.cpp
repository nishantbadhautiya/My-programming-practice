#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~Node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertNode(Node* &tail, int element , int d){
    // empty list
    if(tail == NULL){
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node* newNode = new Node(d);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void deleteNode(Node* &tail, int value) {
    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty and assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;
        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        //one Node Linked List
        if(curr == prev) {
            tail = NULL;
        }
        //Two or more than two Node linked list
        else if(tail == curr ) {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* tail) {
    Node *temp =  tail;
    if(tail == NULL){
        cout << "List is empty" << endl;
        return;
    }
    // cout << temp->data << "  ";
    // temp = temp->next;
    // while (temp != tail)
    // {
    //     cout << temp->data << "  ";
    //     temp = temp->next;
    // }

    do{
        cout << temp->data << "  ";
        temp = temp->next ;
    } while (temp != tail);
    cout << endl;
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 9);
    insertNode(tail, 5, 6);
    insertNode(tail, 9, 10);
    insertNode(tail, 3, 4);
    print(tail);
    deleteNode(tail, 3);
    print(tail);
    return 0;
}
