/*

void preorder(BinaryTreeNode<int> *root, int &count){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        count ++;
    }
    preorder(root->left, count);
    preorder(root->right, count);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    int count = 0;
    preorder(root, count);
    return count;
}

*/
