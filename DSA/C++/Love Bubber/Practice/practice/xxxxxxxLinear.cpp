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

void insertionAtHead(Node* &head,Node* &tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertionAtTail(Node* &head, Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
        return;
    }
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertionAtBetween(Node* &head, Node* &tail, int position, int d){
    if(head == NULL){
        insertionAtHead(head, tail, d);
        return;
    }
    Node *curr = head;
    Node *prev = NULL;
    int index = 1;
    while (index < position)
    {
        prev = curr;
        curr = curr->next;
        index++;
    }
    Node *temp = new Node(d);
    temp->next = curr;
    prev->next = temp;
}

void print(Node * head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

void deletion_by_index(Node* &head, Node *&tail, int position){
    int index = 1;
    Node * curr = head;
    Node *prev = NULL;
    if(position == 1){
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    while (index < position)
    {
        prev = curr;
        curr = curr->next;
        index++;
    }
    if(curr->next == NULL){
        prev->next = curr->next;
        prev->next = NULL;
        tail = prev;
        delete curr;
        return;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

Node * reverse(Node* head){
    // base case
    if(head->next == NULL || head == NULL){
        return head;
    }
    // recursive call
    Node * smallHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return smallHead;
}

Node* reverseList(Node* head) {
    return reverse(head);
}

int main()
{
    Node* node1 = NULL;
    Node* head = node1;
    Node* tail = node1;
    insertionAtHead(head, tail, 20);
    insertionAtTail(head, tail, 30);
    insertionAtBetween(head, tail, 2, 40);
    insertionAtHead(head, tail, 50);
    print(head);
    // deletion_by_index(head,tail, 1);
    // print(head);
    // cout << endl;
    // cout << head->data << endl;
    // cout << tail->data << endl;
    head = reverseList(head);
    print(head);
    return 0;
}
