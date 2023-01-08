#include <stdio.h>
int main()
{
    int num = 117897;
    int isPrime = 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
        }
    }
    if (isPrime)
    {
        printf("The number %d is a Prime Number \n", num);
    }
    else
    {
        printf("The number %d is a Composite Number \n", num);
    }

    printf("\n");
    return 0;
}