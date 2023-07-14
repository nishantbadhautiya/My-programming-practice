#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the number you want to get elements: ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)malloc(n *sizeof(int));
     for (int i = 0; i < n; i++)
     {
        printf("enter the value of %dth element: ",i+1);
        scanf("%d",&ptr[i]);
     }
    for (int i = 0; i < n; i++)
    {
        printf("the value of %dth element is: %d\n", i + 1, ptr[i]);
    }
    return 0;
}

