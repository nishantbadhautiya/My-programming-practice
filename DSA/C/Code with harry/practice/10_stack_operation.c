#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
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

void push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("stack overflow can not push element %d  in stack \n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow");
        return -1;
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        // ptr->top --;
        return value;
    }
}
int main()
{
    struct stack *sp;
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully \n");
    printf("%d \n", isFull(sp));
    printf("%d \n", isEmpty(sp));
    push(sp, 64);
    push(sp, 14);
    push(sp, 34);
    push(sp, 34);
    push(sp, 34);
    push(sp, 39);
    push(sp, 45);
    push(sp, 90);
    push(sp, 376);
    push(sp, 894);
    // push(sp, 4);
    printf("%d \n", isFull(sp));
    printf("%d \n", isEmpty(sp));
    printf("popped element %d from the stack \n",pop(sp));
    printf("popped element %d from the stack \n",pop(sp));
    printf("popped element %d from the stack \n",pop(sp));
    printf("popped element %d from the stack \n",pop(sp));
    return 0;
}