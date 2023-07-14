#include<stdio.h>
#include<string.h>
int main()
{
     char str1[]= "Nishant";
     char str2[]= "Nishant";
     int result= strcmp(str1, str2);
     printf("The compare result is: %d",result);
     return 0;
}