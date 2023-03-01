#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}
int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct Node *top)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct Node * push(struct Node *top, int value)
{
    struct Node *ptr= (struct Node *)malloc(sizeof(struct Node));
    if (isFull(top))
    {
        printf("Stack Overflow");
    }
    else
    {
        ptr->data = value;
        ptr->next = top;
        top = ptr;
        return top;
    }
}
int pop(struct Node *top)
{
    if (isEmpty(top))
    {
        printf("Stack Underflow");
    }
    else
    {
        struct Node *p = top;
        top = top->next;
        int x = p->data;
        free(p);
        return x;
    }
}
int main()
{
    struct Node *top = NULL;
    top = push(top, 12);
    top = push(top, 42);
    top = push(top, 78);
    LinkedListTraversal(top);
    int poppeditem = pop(top);
    printf("Popped item is %d ", poppeditem);
    return 0;
}
