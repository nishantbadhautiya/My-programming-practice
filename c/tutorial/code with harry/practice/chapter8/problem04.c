#include <stdio.h>
void slice(char *str, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        str[i] = str[m + i];
        i++;
    }
    str[i] = '\0';
}
int main()
{
    char str[56];
    printf("enter the string: ");
    gets(str);
    slice(str, 2, 8);
    puts(str);
    return 0;
}