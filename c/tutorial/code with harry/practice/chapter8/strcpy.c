#include<stdio.h>
#include<string.h>
int main()
{
     char str1[44];
     char *str2= "Badhautiya";
     strcpy(str1,str2);
     printf("the value of str1 is: %s",str1);
     return 0;
}