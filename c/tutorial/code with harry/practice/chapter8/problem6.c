#include <stdio.h>
void encrypt(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        // printf("the ascii value of %c is: %d\n",ptr, *ptr);
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{
    char str[] = "Nishant";
    encrypt(str);
    printf("The encrypted string is: %s ", str);
    return 0;
}