#include <stdio.h>
int sum(int a, int b); // function prototype
int main()
{
    int c;
    c = sum(12, 13);
    printf("The sum of these two value is: %d", c);
    return 0;
}
int sum(int a, int b)
{
    // int total;
    int c = a + b;
    return c;
}
