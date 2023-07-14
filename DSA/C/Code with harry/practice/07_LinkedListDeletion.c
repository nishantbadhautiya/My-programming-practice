#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void LinkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d   ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct Node *DeleteFirstNode(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *Deleterinbetween(struct Node *head, int index)
{
    // first method to solve this problem
    //  struct Node *p = head;
    //  int i = 0;
    //  while (i != index - 1)
    //  {
    //      p = p->next;
    //      i++;
    //  }
    //  struct Node *q = p->next;
    //  p->next = q->next;
    //  free(q);

    // second method to solve this problem
    struct Node *p = head;
    struct Node *q = p->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
}

struct Node *DeleteLastNode(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
}

struct Node *DeleteatValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
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
    head->data = 9;
    head->next = second;

    second->data = 13;
    second->next = third;

    third->data = 25;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = NULL;

    LinkedlistTraversal(head);

    // head = DeleteFirstNode(head);
    // Deleterinbetween(head, 2);
    // DeleteLastNode(head);
    DeleteatValue(head, 225);

    LinkedlistTraversal(head);
    return 0;
}
