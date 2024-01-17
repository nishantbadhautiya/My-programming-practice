/*

class Solution {
private:
    void traverseLeft(Node* root, vector<int> &ans){
        // base case
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            return; 
        }
        ans.push_back(root->data);
        if(root->left){
            traverseLeft(root->left, ans);
        }
        else{
            traverseLeft(root->right, ans);
        }
    }
    
    void traverseLeafNode(Node* root, vector<int> &ans){
        // base case 
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return;
        }
        traverseLeafNode(root->left , ans);
        traverseLeafNode(root->right, ans);
    }
    
    void traverseRight(Node* root, vector<int> &ans){
        // base case
        if(root == NULL){
            return ;
        }
        if(root->left == NULL && root->right == NULL){
            return;
        }
        
        if(root->right){
            traverseRight(root->right , ans);
        }
        else{
            traverseRight(root->left , ans);
        }
        ans.push_back(root->data);
    }
    
public:
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root == NULL){
            return ans;
        }
        
        ans.push_back(root->data);
        
        // traverse the left part 
        traverseLeft(root->left, ans);
        
        // traverse the left subtree
        traverseLeafNode(root->left, ans);
        
        // traverse the right subtree
        traverseLeafNode(root->right, ans);
        
        // traverse right part node
        traverseRight(root->right, ans);
        
        return ans;
    }
};

*/
