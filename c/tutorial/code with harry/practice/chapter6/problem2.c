#include <stdio.h>

int main()
{
    int a = 5;
    int *b;
    b = &a;
    printf("the value of a is : %d\n", a);
    printf("the address of a is : %u \n", b);
    return 0;
}