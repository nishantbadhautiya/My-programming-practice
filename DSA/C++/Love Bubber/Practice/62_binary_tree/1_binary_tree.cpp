#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL; 
    }
};

node* buildTree(node* root){
    int data;
    cout << "Enter the data: ";
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout << "Enter the data for inserting left for data " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting right for data " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

int main()
{
    node* root = NULL;
    // create a tree
    root = buildTree(root);
    return 0;
}
