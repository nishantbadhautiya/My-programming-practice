#include <stdio.h>

int main()
{
    float tax = 0;
    float income;
    printf("enter the income :");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income-250000);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income-500000);
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income-1000000);
    }
    printf("total tax to be paid by you is %f",tax);
    return 0;
}
