#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void print(Node* &head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "   " ;
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head){
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count ++;
    }
    return count;
}

void insertAtHead(Node* &head, Node* &tail, int d){
    if(head == NULL){
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* &tail , int d){
    if(tail == NULL){
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position , int d){
    if(position == 1){
        insertAtHead(head,tail, d);
        return;
    }
    Node *curr = head;
    int count = 1;
    while (count < position - 1){
        curr = curr->next;
        count++;
    }
    if(curr->next == NULL){
        insertAtTail(head, tail, d);
        return;
    }
    Node *temp = new Node(d);
    // temp->next = curr->next;
    // curr->next = temp;

    temp->next = curr->next;
    curr->next->prev = temp;
    curr->next = temp;
    temp->prev = curr;
}

void deleteNode(Node* &head, Node* &tail, int position){
    if(position == 1){
        Node *temp = head;
        // head = head->next;
        // head->prev = NULL;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    int count = 1;
    Node *curr = head;
    Node *prev = NULL;
    while (count < position)
    {
        prev = curr;
        curr = prev->next;
        count++;
        if(curr->next == NULL){
            curr->prev = NULL;
            prev->next = curr->next;
            delete curr;
        }
    }
    prev->next = curr->next;
    curr->prev = NULL;
    curr->next = NULL;
    delete curr;
}

int main()
{
    // Node* node1 = new Node(10);
    // Node *head = node1;
    // Node *tail = node1;

    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtPosition(head, tail, 4, 50);
    print(head);
    deleteNode(head, tail, 3);
    print(head);
    cout << head->data << endl;
    cout << tail->data << endl;
    cout << "Length of doubly Linked list is: " << getLength(head) << endl;
    return 0;
}
