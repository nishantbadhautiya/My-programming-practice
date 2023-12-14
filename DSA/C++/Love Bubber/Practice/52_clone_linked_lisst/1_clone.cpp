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
    Node *copyList(Node *head)
    // Time Complexicity = O(n) and space complexicity = O(n)
    {
        // step 1 : copy the node with next pointer to clone
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        // step 2 : create a mapping
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        unordered_map<Node*, Node*> oldToNew;
        while(originalNode != NULL && cloneNode != NULL){
            oldToNew[originalNode] = cloneNode;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }
        
        // step 3: set the random pointer
        originalNode = head;
        cloneNode = cloneHead;
        while(originalNode != NULL){
            // cloneNode->random = oldToNew[originalNode->random];
            cloneNode->arb = oldToNew[originalNode->arb];
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }
        return cloneHead;
    }
};



*/

