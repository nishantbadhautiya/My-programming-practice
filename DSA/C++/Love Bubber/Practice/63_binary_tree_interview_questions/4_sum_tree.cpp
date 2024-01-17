/*


class Solution
{
    private:
    pair<bool, int> isSumTreeFast(Node* root){
        // base case
        if(root == NULL){
            pair<bool, int> p = make_pair(true, 0); // first for isSumTree of not and second for sum of left sub tree and right sub tree and their own data
            return p;
        }
        // if there is a leaf node
        if(root->left == NULL && root->right == NULL){
            pair<bool,int> p = make_pair(true, root->data);
            return p;
        }
        
        pair<bool, int> leftAns = isSumTreeFast(root->left);
        pair<bool, int> rightAns = isSumTreeFast(root->right);
        
        bool left = leftAns.first;
        bool right = rightAns.first;
        bool sumCondition = (root->data == leftAns.second + rightAns.second);
        
        pair<bool, int> ans;
        if(left && right && sumCondition){
            ans.first = true;
            // ans.second = root->data + leftAns.second + rightAns.second;
            ans.second = 2 * root->data;
        }
        else{
            ans.first = false;
        }
        return ans;
    }
    public:
    bool isSumTree(Node* root)
    {
         return isSumTreeFast(root).first;
    }
};


*/
