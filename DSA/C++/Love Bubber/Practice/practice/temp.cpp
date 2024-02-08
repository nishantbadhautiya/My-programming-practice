#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

int getLength(Node *head){
    int length = 0;
    Node* curr = head;
    while(curr != NULL){
        length++;
        curr = curr->next;
    }
    return length;
}

void insertAtHead(Node* &head, Node* &tail, int d){
    Node* temp = new Node(d);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &head, Node* &tail , int d){
    Node* temp = new Node(d);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position , int d){
    if(position < 1 || (position - 1) > getLength(head)){
        cout << "Can not insert element" << endl;
        return;
    }
    Node* temp = new Node(d);
    Node* curr = head;
    Node* prev = NULL;
    int index = 1;
    if(position == 1){
        insertAtHead(head, tail, d);
        return;
    }
    while(index < position){
        prev = curr;
        curr = curr->next;
        index++;
    }
    if(curr == NULL){
        insertAtTail(head, tail, d);
        return;
    }
    temp->next = curr;
    curr->prev = temp;
    prev->next = temp;
    temp->prev = prev;
}

void deleteNode(Node* &head, Node* &tail, int position){
    if(position == 1){
        // delete first node
        Node* temp = head;
        
    }
    int index = 1;
    Node* curr = head;
    Node* prev = NULL;
    while(index < position){
        prev = curr;
        curr = curr->next;
        index++;
    }
    if(curr->next == NULL){
        // delete the last node
    }
    // delete middle nodes

}

void print(Node* root){
    Node* temp = root;
    while(temp != NULL){
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node* root = NULL;
    Node* head = root;
    Node* tail = root;
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    print(head);
    insertAtPosition(head, tail, 3, 50);
    print(head);
    insertAtPosition(head, tail, 1, 60);
    print(head);
    insertAtPosition(head, tail, 7, 70);
    print(head);
    cout << "Head: " << head->data << " Tail: " << tail->data << endl;
    return 0; 
}
