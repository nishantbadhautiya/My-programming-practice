#include<stdio.h>

int main()
{
     char string[]= {'N','i','s','h','a','n','t','\0'};
    // char string[]= "Nishant";
     for (int i = 0; i < 7; i++)
     {
        printf("The %c character address is: %u \n",string[i], &string[i]);
     }
     
     return 0;
}