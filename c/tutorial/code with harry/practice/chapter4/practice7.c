#include <stdio.h>

int main()
{
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    int fact = 1;
    while (num > 0)
    {
        fact = fact * num;
        num--;
    }
    printf("factorial : %d", fact);
    return 0;
}