/*


class Solution
{
private:
    void insertAtTail(Node* &head, Node* &tail, int d){
        Node* newNode = new Node(d);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
public:
    // step 1: create a new clone list 
    Node *copyList(Node *head){
        if(head == NULL)
            return NULL;
        
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        // step 2 : cloneNodes add in between Original List
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode != NULL){
            Node* next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;
            
            if(originalNode != NULL){
                next = cloneNode->next;
                cloneNode->next = originalNode;
                cloneNode = next;
            }
        }
        
        // step 3 : random pointer copy
        temp = head;
        while(temp != NULL){
            if(temp->next != NULL){
                temp->next->arb = temp->arb ? temp->arb->next : temp->arb;
            }
            temp = temp->next ? temp->next->next : temp->next;
        }
        
        // step 4 : revert changes as done in step 2
        originalNode = head;
        cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode != NULL){
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            
            if(originalNode != NULL){
                cloneNode->next = originalNode->next;
            }
            cloneNode = cloneNode->next;
        }
        
        // step 5 : return the answer
        return cloneHead;
    }
};


*/

