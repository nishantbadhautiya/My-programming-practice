#include<iostream>
using namespace std;
class Node {
    public :
        int data;
        Node* next;
        Node(int d) {
            this->data = d;
            this->next = NULL;
        }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_head(Node* &head, Node* &tail, int element){
    Node* temp = new Node(element);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    temp->next = head;
    head = temp;
}

void insert_at_tail(Node* &head, Node* &tail, int element){
    Node* temp = new Node(element);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

void insert_at_between(Node* &head, Node* &tail, int index, int element){
    Node* temp = new Node(element);
    if(head == NULL || index == 0){
        insert_at_head(head, tail, element);
        return;
    }
    int i = 0;
    Node* curr = head;
    Node* prev = NULL;
    while(i < index){
        prev = curr;
        curr = curr->next;
        i++;
    }
    if(curr == NULL){
        insert_at_tail(head, tail, element);
    }
    temp->next = curr;
    prev->next = temp;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insert_at_head(head, tail, 10);
    insert_at_head(head, tail, 20);
    insert_at_tail(head, tail, 30);
    insert_at_between(head, tail, 3, 40);
    print(head);
    cout << head->data << "\t" << tail->data << endl;

    return 0;
}
