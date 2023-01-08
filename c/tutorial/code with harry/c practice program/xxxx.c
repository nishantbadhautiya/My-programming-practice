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
        return -1;
    }
}
int main()
{
    struct stack S;
    S.size = 80;
    S.top = -1;
    S.arr = (int *)malloc(S.size * sizeof(int));
    isEmpty(S);
    printf("\n");
    return 0;
}