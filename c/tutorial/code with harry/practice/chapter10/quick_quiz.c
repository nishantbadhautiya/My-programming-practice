#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harr3y.txt", "r");
    int num1;
    int num2;
    if (ptr == NULL)
    {
        printf("The file does not exist. ");
    }
    else
    {
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);
        printf("The value of num1 is: %d \n", num1);
        printf("The value of num2 is: %d \n", num2);
    }
    return 0;
}