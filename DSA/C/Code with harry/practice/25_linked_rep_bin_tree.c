#include <stdio.h>
#include <malloc.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right; // self refrencial structure
};
struct Node *createNode(int data)
{
    struct Node *n;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
int main()
{
    /*
    struct Node *p;
    p = (struct Node *)malloc(sizeof(struct Node));
    // constructing the root node;
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // constructing the second node
    struct Node *p1;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->left = NULL;
    p1->right = NULL;
    p1->data = 1;

    // constructing the third node
    struct Node *p2;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2->left = NULL;
    p2->right = NULL;
    p2->data = 4;
    */

    struct Node *p = createNode(2);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(4);
    p->left = p1;
    p->right = p2;
    return 0;
}