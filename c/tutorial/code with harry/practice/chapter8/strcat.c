#include<stdio.h>
#include<string.h>
int main()
{
     char str1[34]= "Nishant ";
     char *str2= "Badhautiya";
     strcat(str1, str2);
     printf("The string is: %s",str1);
     return 0;
}