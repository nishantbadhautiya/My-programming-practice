#include <stdio.h>
void printpattern(int num);
int main()
{
    int num = 3;
    printpattern(num);
    return 0;
}
void printpattern(int num)
{
    if (num == 1)
    {
        printf("* \n");
        return;
    }
    printpattern(num - 1);
    for (int i = 0; i < (2 * num - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}