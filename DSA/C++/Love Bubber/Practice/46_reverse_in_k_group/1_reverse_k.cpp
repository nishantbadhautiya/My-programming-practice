#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node() {
        int value = this -> data;
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node* &head, int d){
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position , int d){
    // insert at start
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count ++ ;
    }
    // insert at last position
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }
    // create a new Node
    Node *nodeToInsert = new Node (d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node* &head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  " ;
        temp = temp->next;
    }
    cout << endl;
}

Node* reverse(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node*temp = NULL;
    Node* curr = head;
    while (curr != NULL)
    {
        Node* forward = curr->next;
        curr->next = temp;
        temp = curr;
        curr = forward;
    }
    return temp;
}

// ***************************************************************************************

Node* kReverse(Node* head, int k) {
    //base call
    if(head == NULL) {
        return NULL;
        // return head;
    }
    //step1: reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count= 0;
    while( curr != NULL && count < k ) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    //step2: Recursion dekhlega aage ka
    if(next != NULL) {
        head -> next = kReverse(next,k);
    }
    //step3: return head of reversed list
    return prev;
}

int main()
{
    // 14 16 4 6 3 18 8 2 
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtPosition(tail, head, 2, 55);
    insertAtTail(tail, 100);
    insertAtTail(tail, 200);
    insertAtTail(tail, 312);
    insertAtTail(tail, 289);
    print(head);
    head = kReverse(head, 5);
    print(head);
    return 0;
}
