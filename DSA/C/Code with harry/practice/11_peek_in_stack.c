#include<stdio.h>
#include<stdlib.h>
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
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int element)
{
    if (isFull(ptr))
    {
        printf("stack overflow");
    }
    else
    {
        ptr->top ++;
        ptr->arr[ptr->top] = element;
    }
}
int peek(struct stack *ptr, int position)
{
    if (ptr->top-position+1<0)
    {
        printf("stack is empty it's a invalid number");
        return -1;
    }
    else
    {
        return ptr->arr[ptr->top-position+1];
    }
}
int main()
{
     struct stack *sp;
     sp->size =8;
     sp->top -1;
     sp->arr = (int *)malloc(sp->size * sizeof(int));
     push(sp, 78);
     push(sp, 12);
     push(sp, 36);
     push(sp, 67);
    // printf("element at given position is: %d ",peek(sp,1));
     return 0;
}
