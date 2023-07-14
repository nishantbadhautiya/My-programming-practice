#include <stdio.h>

int main()
{
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    for (int i = 10; i; i--)
    {
        printf("%d*%d =%d \n", num, i, num * i);
    }

    return 0;
}