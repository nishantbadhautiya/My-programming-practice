#include<stdio.h>

int main()
{
     int num;
     int fact=1;
     printf("enter a number :");
     scanf("%d",&num);
     for (int i = num; i ; i--)
     {
        fact=fact*i;
     }
     printf("factorial of %d is: %d \n",num,fact);
     return 0;
}