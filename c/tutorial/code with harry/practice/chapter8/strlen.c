#include <stdio.h>
// #include<string.h>
int main()
{
    char string[] = "Nishant";
    //  int a= strlen(string);
    //  printf("The length of the string is: %d",a);
    int num;
    while(string != '\0')
    {
        num++;
    }
    printf("the length of the string is: %d", num);
    return 0;
}