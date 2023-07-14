#include<stdio.h>

int main()
{
     FILE *ptr;
     ptr= fopen("getcdemo.txt","r");
    //  char c= fgetc(ptr);
     printf("The character is: %c \n",fgetc(ptr));
     printf("The character is: %c \n",fgetc(ptr));
     printf("The character is: %c \n",fgetc(ptr));
     printf("The character is: %c \n",fgetc(ptr));
     printf("The character is: %c \n",fgetc(ptr));
     printf("The character is: %c \n",fgetc(ptr));
     return 0;
}