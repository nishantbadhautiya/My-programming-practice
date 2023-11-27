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

// ********************************************************************

bool detectLoop(Node* &head){
    // time complexicity = O(n)  space complexicity = O(n) 
    // empty list
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp = head;
    // for non-empty list
    while (temp != NULL){
        if(visited[temp] == true){
            cout << "Loop is present at " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* detect_loop_by_floyds_cycle_detection_algorithm(Node* head){
    // time complexicity = O(n)  space complexicity = O(1) 
    Node* slow = head;
    Node* fast = head;
    if(head == NULL){
        return head;
    }
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            cout << "Loop present at " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = detect_loop_by_floyds_cycle_detection_algorithm(head);
    if(intersection == NULL){
        cout << "There is not any loop in the list" << endl;
        return NULL;
    }
    Node* slow = head;
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* &head){
    if(head == NULL){
        return;
    }
    Node* intersection = detect_loop_by_floyds_cycle_detection_algorithm(head);
    Node* temp = intersection;
    while (temp->next != intersection)
    {
        temp = temp->next;
    }
    temp = temp->next;
    temp->next = NULL;
}

int main()
{
    Node* node1 = NULL;
    Node* head = node1;
    Node* tail = node1;
    insertionAtHead(head, tail, 20);
    insertionAtTail(head, tail, 30);
    insertionAtTail(head, tail, 40);
    insertionAtTail(head, tail, 50);
    // tail->next = head->next;
    // print(head);
    if(detect_loop_by_floyds_cycle_detection_algorithm(head) != NULL){
        cout << "Loop is present" << endl;
    }
    else{
        cout << "Loop is not Present" << endl;
    }
    Node* loop = getStartingNode(head);
    cout << "Loop starting at " << loop->data << endl;
    removeLoop(head);
    print(head);
    return 0;
}
