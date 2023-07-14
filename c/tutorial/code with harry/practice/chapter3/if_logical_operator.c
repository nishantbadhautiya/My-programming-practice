#include<stdio.h>

int main()
{
     int age;
     int vipPass;
    //  vipPass=1;
     printf("enter your age:");
     scanf("%d",&age);
     if ((age<=80 && age>=18) || vipPass==1)
     {
        printf("you can drive");
     }
     else
     {
        printf("you cannot drive");
     }
     return 0;
}