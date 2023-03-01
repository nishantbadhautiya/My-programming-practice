#include<stdio.h>

int main()
{
     int age;
     printf("enter your age:\n");
     scanf("%d",&age);
     if (age>90)
     {
        printf("you can not drive \n");
     }
     else
     {
        printf("you can drive \n");
     }
     if(age==50)
     {
        printf("you had been completer half century");
     }
     return 0;
}