#include<iostream>
#include<queue>
#include<stack>
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

void linearOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){ // last level has been completed
            cout << endl;  // hit enter if level has been completely traversaled
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << "  ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void linearReverseLevelOrderTraversal(node* root) {
    if (root == nullptr) return;
    queue<node*> q;
    stack<node*> s;
    q.push(root);
    while (!q.empty()) {
        node* temp = q.front();
        q.pop();
        s.push(temp); // Push the node to stack instead of printing

        // Enqueue right child before left to ensure left is at the top of the stack
        if (temp->right) q.push(temp->right);
        if (temp->left) q.push(temp->left);
    }
    // Pop elements from the stack to print in reverse level order
    while (!s.empty()) {
        node* top = s.top();
        cout << top->data << " ";
        s.pop();
    }
}

void ReverseLevelOrderTraversal(node* root) {
    if (root == nullptr) {
        return;
    }
    queue<node*> q;
    stack<node*> s;
    q.push(root);
    while (!q.empty()) {
        int levelNodes = q.size(); // Number of nodes at the current level
        // Enqueue children of all nodes at the current level
        for (int i = 0; i < levelNodes; i++) {
            node* temp = q.front();
            q.pop();
            s.push(temp);
            // Enqueue right child before left to ensure left is at the top of the stack
            if (temp->right) {
                q.push(temp->right);
            }
            if (temp->left) {
                q.push(temp->left);
            }
        }
        // Push a nullptr as a marker for the end of the current level
        s.push(nullptr);
    }

    // Print the nodes in reverse level order with newlines between levels
    while (!s.empty()) {
        node* top = s.top();
        s.pop();
        if (top == nullptr) {
            cout << endl; // Print a newline at the end of each level
        } else {
            cout << top->data << " ";
        }
    }
}



// inorder traversal (L N R)
void inOrder(node* root){
    // base case
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << "  ";
    inOrder(root->right);
}

// preorder traversal(N L R)
void preOrder(node* root){
    // base case
    if(root == NULL){
        return;
    }
    cout << root->data << "  ";
    preOrder(root->left);
    preOrder(root->right);
}

// postOrder traversal(L R N)
void postOrder(node* root){
    // base case
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << "  ";
}

void inorder_Iterative(node* root) {
    if (root == nullptr){
        return;
    }
    stack<node*> s;
    node* current = root;
    while (current != nullptr || !s.empty()) {
        // Traverse to the leftmost node of the current subtree
        while (current != nullptr) {
            s.push(current);
            current = current->left;
        }

        // Current is now nullptr, left subtree traversed, process the node
        current = s.top();
        s.pop();
        cout << current->data << "  ";

        // Move to the right subtree
        current = current->right;
    }
}

void preorder_Iterative(node* root){
    if(root == NULL){
        return;
    }
    node* current = root;
    stack<node*> s;
    s.push(current);

    while(!s.empty()){
        current = s.top();
        s.pop();

        cout << current->data << "  ";

        // Push the right child first, then the left child, to ensure proper preorder sequence
        if(current->right){
            s.push(current->right);
        }
        if(current->left){
            s.push(current->left);
        }
    }
}

void postorder_Iterative(node* root) {
    if (root == nullptr) return;

    stack<node*> s;
    stack<int> resultStack;

    s.push(root);

    while (!s.empty()) {
        node* current = s.top();
        s.pop();

        // Push the value to a separate stack to reverse the order
        resultStack.push(current->data);

        // Push left child first and then right child
        if (current->left) {
            s.push(current->left);
        }
        if (current->right) {
            s.push(current->right);
        }
    }

    // Print the values in reverse order (postorder)
    while (!resultStack.empty()) {
        cout << resultStack.top() << "  ";
        resultStack.pop();
    }
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    int data;
    cout << "Enter data for root: " << endl;
    cin >> data;
    root = new node(data);
    if(data == -1)
        return;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        int leftData;
        cout << "Enter the data for left of " << temp->data << " : " << endl;
        cin >> leftData;
        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        
        int rightData;
        cout << "Enter the data for right of " << temp->data << " : " << endl;
        cin >> rightData;
        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node* root = NULL;
    buildFromLevelOrder(root);  // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    cout << endl << "Level order traversal of the given build tree is: " << endl;
    levelOrderTraversal(root);

    /*
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << endl << "Printing the level Order Traversal of the given tree: " << endl;
    levelOrderTraversal(root);
    cout << "Inorder traversal is: " << endl;
    inOrder(root);
    cout << endl << "Preorder traversal is: " << endl;
    preOrder(root);
    cout << endl << "Postorder traversal is: " << endl;
    postOrder(root);
    cout << endl << "Iterative postorder traversal is: " << endl;
    postorder_Iterative(root);
    cout << endl;
    */
    return 0;
}
