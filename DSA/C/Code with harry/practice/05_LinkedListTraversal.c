#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlist_traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements: %d \n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head, *second, *third, *fourth;
    // struct Node *second;
    // struct Node *third;
    // struct Node *fourth;
    // allocate memory for nodes in the heap memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    // Link head and second Node
    head->data = 7;
    head->next = second;
    // Link second and third Node
    second->data = 10;
    second->next = third;
    // Link third and fourth Node
    third->data = 18;
    third->next = fourth;
    // Termination of Linked List at the third Node
    fourth->data = 34;
    fourth->next = NULL;
    linkedlist_traversal(head);
    return 0;
}