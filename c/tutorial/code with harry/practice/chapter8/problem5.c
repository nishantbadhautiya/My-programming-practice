#include <stdio.h>
char strcpys(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    // return str2;
    printf("the value of str2 is: %s", str2);
}
int main()
{
    char str1[] = "Nishant";
    char str2[35];
    strcpys(str1, str2);
    return 0;
}