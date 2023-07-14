#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value of %dth floating value: ", i + 1);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the value of %dth element is: %f \n", i + 1, ptr[i]);
    }

    ptr = realloc(ptr, 10 * sizeof(float));
    for (int i = 0; i < 10; i++)
    {
        printf("enter the value of %dth floating value: ", i + 1);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the value of %dth element is: %f \n", i + 1, ptr[i]);
    }
    return 0;
}