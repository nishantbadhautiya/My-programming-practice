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
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
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
struct Node * search(struct Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right,key);
    }
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
    struct Node *k = search(n, 3);
    if (k != NULL)
    {
        printf("Element found : %d ", k->data);
    }
    else{
        printf("Element not Found ");
    }
    
    return 0;
}