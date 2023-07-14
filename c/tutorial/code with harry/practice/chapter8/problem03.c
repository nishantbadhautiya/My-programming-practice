#include<stdio.h>
int strlen(char *st)
{
    // int *ptr= st;
    int len= 0;
    while (*st != '\0')
    {
        len++;
        st++;
    }
    return len;
}
int main()
{
     char st[]= "harry";
     int l= strlen(st);
     printf("The number of characters in the string are: %d",l);
     return 0;
}