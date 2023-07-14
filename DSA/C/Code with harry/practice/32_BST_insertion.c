#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createNode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inOrder(struct Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
struct Node *insert_in_BST(struct Node *root, int key)
{
    struct Node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("Cannot insert given Node because it exist in BST ");
            return NULL;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else if (key > root->data)
        {
            root = root->right;
        }
    }
    struct Node *new = createNode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    prev->right = new;
}
int main()
{
    struct Node *n = createNode(5);
    struct Node *n1 = createNode(3);
    struct Node *n2 = createNode(6);
    struct Node *n3 = createNode(1);
    struct Node *n4 = createNode(4);
    n->left = n1;
    n->right = n2;
    n1->left = n3;
    n1->right = n4;
    inOrder(n);
    printf("\n");
    insert_in_BST(n, 2);
    printf("%d \n", n->left->left->right->data);
    return 0;
}