#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlist_traversal(struct Node *head)
{
    struct Node *ptr = head;
    // printf("%d \n", ptr->data);
    // ptr = ptr->next;
    // while (ptr != head)
    // {
    //     printf("%d \n", ptr->data);
    //     ptr = ptr->next;
    // }

    do
    {
        printf("%d   ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}

struct Node *Insertatfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next!= head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}


int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

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
    fourth->next = head;

    linkedlist_traversal(head);
    head = Insertatfirst(head, 100);
    head = Insertatfirst(head, 90);
    linkedlist_traversal(head);
    return 0;
}
