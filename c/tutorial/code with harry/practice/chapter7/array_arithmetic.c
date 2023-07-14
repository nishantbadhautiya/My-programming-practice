#include <stdio.h>

int main()
{
    int i = 6;
    int *ptr = &i;
    printf("the value of i is: %d \n", i);
    printf("the address of i is: %u \n", ptr);

    int j = 78;
    int *ptr2 = &j;
    printf("the value of j is: %d \n", j);
    printf("the address of j is: %u \n", ptr2);

    int sub;
    sub = ptr - ptr2;
    printf("%d", sub);
    return 0;
}