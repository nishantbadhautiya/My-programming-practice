#include <stdio.h>

int main()
{
    int num1;
    int num2;
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    printf("the value of num1 is: %d\n", num1);
    printf("the value of num2 is: %d\n", num2);
    return 0;
}