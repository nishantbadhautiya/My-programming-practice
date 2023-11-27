/*
// https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

// Time complexicity = O(n) 
// space complexicity = O(n)


#include<vector>
class Solution{
  private:
    bool checkPalindrome(vector<int> arr){
        int n = arr.size();
        int s = 0;
        int e = n - 1;
        while(s <= e){
            if(arr[s] != arr[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        vector<int> arr;
        Node* temp = head;
        while(temp != NULL){
            arr.push_back(temp->data);
            temp = temp->next;
        }
        return checkPalindrome(arr);
    }
};



// ********************************************************************************************
// Time complexicity = O(n) 
// space complexicity = O(1)

class Solution{
  private:
    Node* getMiddle(Node* head){
        Node* slow = head;
        Node* fast = head->next;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
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
    
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head == NULL || head->next == NULL){
            return true;
        }
        // step1 : get Middle
        Node* middle = getMiddle(head);
        
        // step2 : reverse the next half list
        Node* temp = middle->next;
        middle->next = reverse(temp);
        
        // step3: compare both halves
        Node* head1 = head;
        Node* head2 = middle->next;
        while(head2 != NULL){
            if(head1->data != head2 -> data){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        // step4 : repeate step 2 (optional)
        temp = middle->next;
        middle->next = reverse(temp);
        return true;
    }
};


*/

