#include <stdio.h>
float average(int num1, int num2, int num3);
int main()
{
    int num1, num2, num3;
    printf("enter first number: \n");
    scanf("%d", &num1);
    printf("enter second number: \n");
    scanf("%d", &num2);
    printf("enter third number: \n");
    scanf("%d", &num3);
    printf("the average of %d, %d, and %d is : %f", num1, num2, num3, average(num1, num2, num3));
    return 0;
}
float average(int num1, int num2, int num3)
{
    float aver = (float)(num1 + num2 + num3) / 3;
    return aver;
}