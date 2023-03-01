#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 3;
    int b = 15;
    printf("the value of a and b before function call is %d and %d \n", a, b);
    printf("the sum of a and b is : %d \n", sum(a, b));
    printf("the value of a and b after function call is %d and %d \n", a, b);

    return 0;
}
int sum(int x, int y)
{
    int c;
    c = x + y;
    x = 3465;
    y = 3622;
    return c;
}