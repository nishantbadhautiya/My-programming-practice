#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int *ptr2;
    ptr = (int *)malloc(600000 * sizeof(int));
    for (int i = 0; i < 600000; i++)
    {
        ptr2 = (int *)malloc(600000 * sizeof(int));
        printf("enter the %dth number: ", i + 1);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("the value of %dth element is: %d \n", i + 1, ptr[i]);
    }
    return 0;
}