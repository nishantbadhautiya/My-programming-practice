#include <stdio.h>
#include <stdlib.h>
struct circularqueue
{
    int size;
    int f; // to do deletion operation
    int r; // to do insertion operation
    int *arr;
};
int isFull(struct circularqueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct circularqueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void enQueue(struct circularqueue *q, int element)
{
    if (isFull(q))
    {
        printf("Queue is Full so cannot do enQueue operation \n");
    }
    else
    {
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = element;
        printf("you enQueued %d element \n",element);
    }
}
int deQueue(struct circularqueue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is Empty. so cannot do dequeue operation\n");
    }
    else
    {
        q->f = (q->f+1)%q->size;
        printf("You Dequeued %d element \n",q->arr[q->f]);
        return q->arr[q->f];
    }
}
int main()
{
    struct circularqueue q;
    q.size = 4;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int *));
    printf("%d \n", isEmpty(&q));
    printf("%d \n", isFull(&q));

    enQueue(&q, 34);
    enQueue(&q, 18);
    enQueue(&q, 56);
    deQueue(&q);
    printf("%d \n", isEmpty(&q));
    printf("%d \n", isFull(&q));
    return 0;
}