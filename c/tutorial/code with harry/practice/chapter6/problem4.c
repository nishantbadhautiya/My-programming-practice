#include <stdio.h>
int ten_time(int *a)
{
    return 10 * (*a);
}
int main()
{
    int num, b;
    printf("enter a number: \n");
    scanf("%d", &num);
    b = ten_time(&num);
    printf("the ten time value of number is: %d", b);

    return 0;
}