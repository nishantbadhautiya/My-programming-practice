#include <stdio.h>
#include <stdlib.h>
struct Node *f = NULL;
struct Node *r = NULL;
struct Node
{
    int data;
    struct Node *next;
};
void Linked_list_Traversal(struct Node *ptr)
{
    printf("Your Linked list Elements are: \n");
    while (ptr != NULL)
    {
        printf("Element is: %d \n", ptr->data);
        ptr = ptr->next;
    }
}
void enQueue(int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Queue is full so can not do enQueue operation");
    }
    else
    {
        ptr->next = NULL;
        ptr->data = value;
        if (f == NULL)
        {
            f = r = ptr;
        }
        else
        {
            r->next = ptr;
            r = ptr;
        }
    }
}
int deQueue(void)
{
    struct Node *ptr = f;
    int value = -1;
    if (f == NULL)
    {
        printf("Queue is Empty so can not do deQueue operation\n");
    }
    else
    {
        f = f->next;
        int value = ptr->data;
        free(ptr);
    }
    return value;
}
int main()
{
    Linked_list_Traversal(f);
    enQueue(34);
    enQueue(14);
    enQueue(54);
    Linked_list_Traversal(f);
    return 0;
}