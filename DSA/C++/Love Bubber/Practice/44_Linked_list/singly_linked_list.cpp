#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
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

void insertAtHead(Node* &head, int d){
    // new node create
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

int length(Node* &head){
    Node *temp = head;
    int count = 1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        count ++;        
    }
    return count;
}

void deleteNode(Node* &head, Node* &tail, int position){
    if(position == 1){
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count ++;
            if(curr->next == NULL){
                prev->next = NULL;
                tail = prev;
            }
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void deleteNodeByValue(Node* &head, Node* &tail, int element){
    Node* curr = head;
    Node* prev = NULL;
    // delete first node
    if(head->data == element){
        head = head->next;
        return;
    }
    // find the node
    while (curr->data != element)
    {
        prev = curr;
        curr = curr->next;
    }
    // delete last node and update tail
    if(element == tail->data){
        prev->next = NULL;
        tail = prev;
        delete tail->next;
    }

    // delete the current node
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
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

int main()
{
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    // print(head);
    insertAtTail(tail, 20);
    // print(head);
    insertAtTail(tail, 30);
    // print(head);
    insertAtPosition(tail, head, 4, 55);
    // print(head);
    insertAtTail(tail, 100);
    // print(head);
    insertAtTail(tail, 200);
    print(head);

    // cout << "Head: " << head->data << endl;
    // cout << "Tail: " << tail->data << endl;
    // deleteNode(head, tail, 6);
    // print(head);
    // cout << "Head: " << head->data << endl;
    // cout << "Tail: " << tail->data << endl;

    deleteNodeByValue(head, tail, 200);
    print(head);
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}
