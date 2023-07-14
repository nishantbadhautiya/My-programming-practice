#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    int *arr;
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
void push(struct stack *sp, char ch)
{
    if (isFull(sp))
    {
        printf("stack is full");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = ch;
    }
}
int pop(struct stack *sp)
{
    if (isEmpty(sp))
    {
        printf("String is empty so cannot pop any element now");
    }
    else
    {
        int value = sp->arr[sp->top];
        sp->top = sp->top - 1;
        return value;
    }
}
int stacktop(struct stack *sp)
{
    int stack_top_element = sp->arr[sp->size - 1];
    return stack_top_element;
}
int is_operator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int check_precedince(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    if (ch == '-' || ch == '+')
    {
        return 2;
    }
    else
    {
        return 1;
    }
}
char *infix_to_postfix( char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc(strlen(infix) + 1 * sizeof(char));
    int i = 0; // to scan the infix expression
    int j = 0; // to fill the postfix expression
    while (infix[i] != '\0')
    {
        if (!is_operator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (check_precedince(infix[i]) > check_precedince(stacktop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    
    char *infix = "4*4+8-3";
    char *postfix_string = infix_to_postfix( infix);
    printf("%s \n", postfix_string);
    return 0;
}