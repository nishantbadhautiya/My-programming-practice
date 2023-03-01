#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *sp)
{
    if (sp->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *sp)
{
    if (sp->top == sp->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char push(struct stack *sp, char element)
{
    if (isFull(sp))
    {
        printf("stack overflow so can not push %c element in the stack \n", element);
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = element;
        return element;
    }
}
char pop(struct stack *sp)
{
    if (isEmpty(sp))
    {
        printf("Stack is underflow. so you can not pop any element from the stack");
    }
    else
    {
        char x = sp->arr[sp->top];
        sp->top--;
        return x;
    }
}
int parenthesis_match(struct stack *sp, char *exp)
{
    for (int i = 0; i < exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            {
                push(sp, '(');
            }
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            else
            {
                pop(sp);
            }
        }
    }
    if (isEmpty(sp))
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
    struct stack *sp;
    sp->size = 8;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *exp = "8*(9*9)((((()))))";
    if (parenthesis_match(sp, exp))
    {
        printf("parenthesis are matched");
    }
    else
    {
        printf("parenthesis are not matched");
    }
    return 0;
}
