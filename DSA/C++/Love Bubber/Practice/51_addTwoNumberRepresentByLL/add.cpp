/*
// https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article



class Solution
{
    private:
    Node* reverse(Node* &head){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int val){
        // empty list
        if(head == NULL){
            Node* temp = new Node(val);
            head = temp;
            tail = temp;
            return;
        }
        // non-empty list
        Node* temp = new Node(val);
        tail->next = temp;
        tail = temp;
    }
    
    // First way to solve this problem
    struct Node* add1(struct Node* first, struct Node* second){
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        int carry = 0;
        int digit;
        while(first != NULL && second != NULL){
            int sum = carry + first->data + second->data;
            digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
            first = first->next;
            second = second->next;
        }
        
        while(first != NULL){
            int sum = carry + first->data;
            digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
            first = first->next;
        }
        
        while(second != NULL){
            int sum = carry + second->data;
            digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
            second = second->next;
        }
        
        while(carry != 0){
            int sum = carry;
            digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
        }
        return ansHead;
    }

    // Second way to solve this problem
    struct Node* add2(struct Node* first, struct Node* second){
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        int carry = 0;
        int digit;
        
        while(first != NULL || second != NULL || carry != 0){
            int val1 = 0;
            if(first != NULL)
                val1 = first->data;
            int val2 = 0;
            if(second != NULL){
                val2 = second->data;
            }
            int sum = carry + val1 + val2;
            digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
            if(first != NULL)
                first = first->next;
            if(second != NULL)
                second = second->next;
        }
        return ansHead;
    }
    

    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // step 1 : reverse both input linked list
        first = reverse(first);
        second = reverse(second);
        
        // step 2 : add both list
        Node* ans = add1(first, second);
        
        // step 3: reverse answer list
        ans = reverse(ans);
        return ans;
    }
};


*/

