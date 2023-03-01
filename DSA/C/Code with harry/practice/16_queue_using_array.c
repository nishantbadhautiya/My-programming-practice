#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}
int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue is full so can not do enqueue operation");
    }
    else
    {
        q->r++;
        q->arr[q->r] = value;
    }
}
int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("can not dequeue because queue is empty \n");
    }
    else
    {
        q->f++;
        // a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct queue q;
    q.size = 100;
    q.f = -1;
    q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // enqueue some elements
    printf("%d \n", isEmpty(&q));
    printf("%d \n", isFull(&q));
    enqueue(&q, 12);
    enqueue(&q, 15);
    dequeue(&q);
    // dequeue(&q);
    printf("%d \n", isEmpty(&q));
    printf("%d \n", isFull(&q));

    return 0;
}