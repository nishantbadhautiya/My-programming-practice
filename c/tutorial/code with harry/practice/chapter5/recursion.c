#include <stdio.h>
int factorial(int num);
int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    printf("the factorial of %d is %d ", num, factorial(num));
    return 0;
}
int factorial(int num)
{
    if (num == 1 || num == 0)
        return 1;
    else
    {
        num = num * factorial(num - 1);
        return num;
    }
}