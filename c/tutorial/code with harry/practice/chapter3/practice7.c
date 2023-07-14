#include<stdio.h>

int main()
{
     char ch;
     printf("enter a character : ");
     scanf("%c",&ch);
     if (ch<=122 && ch>=97)
     {
        printf("%c is lowercase.",ch);
     }
     else
     {
        printf("%c is not lowercase.",ch);
     }
     return 0;
}