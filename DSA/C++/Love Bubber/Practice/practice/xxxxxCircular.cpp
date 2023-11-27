#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int d) {
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

void insertNode(Node* &tail, int element, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        temp->next = temp;
        tail = temp;
        return;
    }
    Node* curr = tail;
    while(curr->data != element){
        curr = curr->next;
    }
    Node* temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
}

void deleteNode(Node* &tail, int d){
    Node* curr = tail;
    Node* prev = NULL;
    if(tail->data == d){
        while (curr->next->data != d)
        {
            prev = curr;
            curr = curr->next;
        }
        prev = curr;
        curr = curr->next;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        tail = prev->next;
        return;
    }
    while (curr->data != d)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

void print(Node* &tail){
    Node* temp = tail;
    cout << temp->data << "  ";
    temp = temp->next;
    while (temp != tail)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

void print2(Node* tail){
    Node* temp = tail;
    do{
        cout << temp->data << "  ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

// **************************************************************************

int getLength(Node* tail){
    Node* curr = tail->next;
    int len = 0;
    while(curr != tail){
        curr = curr->next;
        len++;
    }
    return len + 1;
}

void split(Node* &tail,int split_num){
    Node* head1 = tail;
    Node* curr = head1;
    int index = 0;
    while(index < split_num - 1){
        curr = curr->next;
        index ++;
    }
    Node* head2 = curr->next;
    curr->next = head1;
    tail = head1;
    print(head1); // first circular linked list 

    curr = head2->next;
    index = 0;
    while(index <= getLength(tail) - split_num){
        curr = curr->next;
        index ++;
    }
    curr->next = head2;
    tail = head2;
    print(head2); // second circular linked list 
}

void createTwoCLL(Node* &tail){
    int length = getLength(tail);
    if(length % 2 == 0) {
        split(tail, length / 2);
    }
    else{
        split(tail, length/2 + 1);
    }
}

int main()
{
    Node* tail = NULL;
    insertNode(tail, 0, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 9);
    insertNode(tail, 9, 11);
    print2(tail);
    createTwoCLL(tail);
    return 0;
}
