#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
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

void insertAtHead(Node* &head, Node* &tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    Node *temp = new Node(d);
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &head, Node* &tail, int d){
    // if there is not any element
    if(tail == NULL){
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
        return;
    }
    // if there is an element
    Node *temp = new Node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

int getLength(Node* head){
    int index = 1;
    while (head != NULL)
    {
        head = head->next;
        index++;
    }
    return index;
}

void insertNode(Node* &head,Node* &tail, int d, int position){
    if(position == 1){
        insertAtHead(head, tail, d);
        return;
    }
    else if(position == getLength(head)){
        insertAtTail(head, tail , d);
    }
    else{
        // insert at rather than first position
        Node* temp = new Node(d);
        Node* prev = NULL;
        Node* curr = head;
        int index = 1;
        while (index < position)
        {
            prev = curr;
            curr = prev->next;
            index++;
        }
        temp->next = curr;
        curr->prev = temp;
        prev->next = temp;
        temp->prev = prev;
    }
}

void deleteNode(Node* &head, Node* &tail, int position){
    Node *prev = NULL;
    Node *curr = head;
    int index = 1;
    if(position == 1){
        head = curr->next;
        curr->next->prev = NULL;
        curr->next = NULL;
        delete curr;
        return;
    }
    while (index < position){
        prev = curr;
        curr = curr->next;
        index++;
    }
    if(curr->next == NULL){
        curr->prev = NULL;
        prev->next = NULL;
        delete curr;
        tail = prev;
        return;
    }
    prev->next = curr->next;
    curr->next->prev = prev;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}

void print(Node* head){
    if(head == NULL){
        cout << "Empty Linked List" << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

void reverseLinkedList(Node* &head, Node* &tail){
    Node *temp = NULL;
    Node *current = head;

    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;            
        current = current->prev;
    }

    if(temp != NULL )
        head = temp->prev;
}

int main()
{
    Node *head = NULL, *tail = NULL;
    insertNode(head, tail, 20, 1);
    insertNode(head, tail, 50, 2);
    insertNode(head, tail, 30, 3);
    insertNode(head, tail ,40, 2);
    print(head);
    reverseLinkedList(head, tail);
    print(head);
    cout << head->data << endl;
    cout << tail->data << endl;
    return 0;
}
