#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // push an element in stack
    s->arr[0] = 8;
    s->top++;

    // check whether stack is empty or not
    if (isEmpty(s))
    {
        printf("Stack is Empty ");
    }
    else
    {
        printf("Stack is not Empty");
    }
    return 0;
}