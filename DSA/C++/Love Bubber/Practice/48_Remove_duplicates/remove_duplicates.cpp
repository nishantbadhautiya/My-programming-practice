#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    // ~Node(){
    //     int value = this -> data;
    //     //memory free
    //     if(this->next != NULL) {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout << "memory is free for node with data " << value << endl;
    // }
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


void print(Node * head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

// *******************************************************************************************

// Remove duplicates from sorted Linked List
Node * uniqueSortedList(Node * head) {
   	//empty List
    if(head == NULL)
        return NULL;
    //non empty list
    Node* curr = head;
    while(curr != NULL) {
        if( (curr -> next != NULL) && curr -> data == curr -> next -> data) {
            Node* next_next = curr ->next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }
        else //not equal
        {
            curr = curr -> next;
        }   
    }
    return head; 
}

// Approach 1 to Remove duplicates from unsorted linked list, timecomplexicity = O(n^2)
Node *removeDuplicates(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* curr = head;
    while(curr != NULL){
        Node* temp = curr;
        while(temp->next != NULL){
            if(curr->data == temp->next->data){
                // delete the temp node
                Node* nodeToDelete = temp->next;
                temp->next = nodeToDelete->next;
                delete nodeToDelete;
            }
            else{
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}

void bubbleSort(Node* &head) {
    if (head == NULL || head->next == NULL) {
        return;
    }
    bool swapped;
    Node* current;
    Node* lastSorted = NULL;
    do {
        swapped = false;
        current = head;
        while (current->next != lastSorted) {
            if (current->data > current->next->data) {
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
        lastSorted = current;
    } while (swapped);
}

// Approach 2 to Remove duplicates from unsorted linked list using map, time Complexicity = O(n)
void removeDuplicates2(Node* &head){
    if(head == NULL || head->next == NULL){
        return;
    }
    map<int, bool> visited;
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
        if(visited[curr->data] == true){
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
            curr = prev->next;
        }
        else{
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
}

int main()
{
    Node* node1 = NULL;
    Node* head = node1;
    Node* tail = node1;
    insertionAtHead(head, tail, 4);
    insertionAtTail(head, tail, 2);
    insertionAtTail(head, tail, 2);
    insertionAtTail(head, tail, 5);
    insertionAtTail(head, tail, 5);
    insertionAtTail(head, tail, 4);
    insertionAtTail(head, tail, 5);
    print(head);
    removeDuplicates2(head);
    print(head);
    return 0;
}
