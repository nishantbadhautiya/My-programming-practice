#include <stdio.h>
int main()
{
    int num1, num2, num3;
    FILE *ptr;
    ptr = fopen("problem01.txt", "r");
    //  fscanf(ptr,"%d",&num1);
    //  fscanf(ptr,"%d",&num2);
    //  fscanf(ptr,"%d",&num3);
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    fclose(ptr);
    //  printf("First integer is: %d \n",num1);
    //  printf("Second integer is: %d \n",num2);
    //  printf("Third integer is: %d \n",num3);;
    printf("The three integers are: %d %d and %d ", num1, num2, num3);
    return 0;
}