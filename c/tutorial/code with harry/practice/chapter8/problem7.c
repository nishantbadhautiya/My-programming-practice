#include <stdio.h>
void decrypt(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char str[] = "Ojtibou";
    decrypt(str);
    printf("The decrypted string is: %s ", str);
    return 0;
}