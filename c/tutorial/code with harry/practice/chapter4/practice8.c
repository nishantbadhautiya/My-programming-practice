#include <stdio.h>

int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            break;
        }
        if (prime == 0)
        {
            printf("%d is not a prime number.", num);
        }
        printf("%d is a prime number", num);
    }

    return 0;
}