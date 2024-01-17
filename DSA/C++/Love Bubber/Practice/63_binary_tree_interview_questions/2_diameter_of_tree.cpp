/*

// ***********************    FIRST APPROACH **********************************

class Solution {
  private:
    int height(Node* root){
        // base case 
        if(root == NULL){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        return max(left, right) + 1;
    }
    
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // base case
        if(root == NULL){
            return 0;
        }
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left) + 1 + height(root->right);
        int ans = max(op1, max(op2, op3));
        return ans;
    }
};




// ***********************    SECOND APPROACH **********************************



class Solution {
  private:
    pair<int, int> diameterFast(Node* root){
        if(root == NULL){
            // pair<int, int> p= make_pair(0, 0);
            pair<int,int> p (0,0);  // first is to store diameter and second for height
            return p;
        }
        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + 1 + right.second;
        
        pair<int,int> ans;
        ans.first = max(op1, max(op2, op3));
        ans.second = max(left.second, right.second) + 1;
        return ans;
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        return diameterFast(root).first;
    }
};



*/
