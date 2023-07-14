#include <stdio.h>
int table(int *table, int num, int n)
{
    printf("multiplication table of %d is: \n", num);
    for (int i = 0; i < 10; i++)
    {
        table[i] = num * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", num, i + 1, table[i]);
    }
    printf("***************************************************************** \n");
}
int main()
{
    int arr[3][10];
    table(arr[0], 2, 10);
    table(arr[0], 7, 10);
    table(arr[0], 9, 10);
    return 0;
}