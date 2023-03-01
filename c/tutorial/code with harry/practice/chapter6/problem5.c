#include <stdio.h>
int sum(int *a, int *b);
float average(int *a, int *b);
int main()
{
    int a = 3, b = 6;
    printf("the value of a and b is: %d and %d \n", a, b);
    printf("sum of a and b is: %d \n", sum(&a, &b));
    printf("average of a and b is: %.2f \n",average(&a, &b));
    return 0;
}
int sum(int *a, int *b)
{
    return *a + *b;
}
float average(int *a, int *b)
{
    return (*a + *b) / 2;
}