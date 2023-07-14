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
    if (root!=NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
int isBST(struct Node *root)
{
    static struct Node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}
int main()
{
    struct Node *n = createNode(5);
    struct Node *n1 = createNode(8);
    struct Node *n2 = createNode(2);
    struct Node *n3 = createNode(1);
    struct Node *n4 = createNode(4);
    n->left = n1;
    n->right = n2;
    n1->left = n3;
    n1->right = n4;
    inOrder(n);
    printf("\n");
    printf("%d ", isBST(n));
    return 0;
}