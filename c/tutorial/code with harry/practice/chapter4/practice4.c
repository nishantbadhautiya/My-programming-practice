#include <stdio.h>

int main()
{
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    int sum = 0;
    // for (int i = 1; i <= num; i++)
    // {
    //     sum = sum + i;
    // }

    // int i=1;
    // while (i <= num)
    // {
    //     sum = sum + i;
    //     i++;
    // }

    int i = 1;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= num);

    printf("%d", sum);
    return 0;
}