#include <stdio.h>

int main()
{
    int sum = 0, b;
    for (int i = 1; i <= 10; i++)
    {
        b = i * 8;
        sum = sum + b;
    }
    printf("sum= %d", sum);
    return 0;
}