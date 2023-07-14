#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d   ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct Node *Insertatfirst(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
struct Node *insertatindex(struct Node *head, int data, int index)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *q = head;
    int i = 0;
    while (i != index - 1)
    {
        q = q->next;
        i++;
    }
    ptr->next = q->next;
    q->next = ptr;
    ptr->data = data;
    return head;
}
struct Node *insertatend(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *q = head;
    ptr->data = 66;
    while (q->next!= NULL)
    {
        q = q->next;
    }
    q->next = ptr;
    ptr->next = NULL;
    return head;
}
struct Node * insertafterNode(struct Node *head, struct Node *previousNode , int data)
{
    struct Node *ptr;
    ptr=( struct Node *) malloc(sizeof(struct Node));
    ptr->next = previousNode->next;
    previousNode->next= ptr;
    ptr->data = data;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    // allocate memory for node in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    // link head and second node
    head->data = 9;
    head->next = second;
    // link second and third node
    second->data = 11;
    second->next = third;
    // link third and fourth node
    third->data = 18;
    third->next = fourth;
    // Termination of linked list at the end
    fourth->data = 22;
    fourth->next = NULL;
    LinkedListTraversal(head);
    // head = Insertatfirst(head, 77);
    // head = insertatindex(head, 66, 2);
    // head = insertatend(head, 88);
    head= insertafterNode(head, fourth, 97);
    LinkedListTraversal(head);
    return 0;
}
