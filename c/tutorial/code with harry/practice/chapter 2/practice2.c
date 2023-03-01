#include <stdio.h>

int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    printf("%d", num % 97);
    return 0;
}