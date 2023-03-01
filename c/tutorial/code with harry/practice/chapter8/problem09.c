#include <stdio.h>
int present(char *str, char ch)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            return 1;
        }
        else
        {
            return 2;
        }
        i++;
    }
}
int main()
{
    char str[] = "NiashaaaaAaaant";
    int l = present(str, 'a');
    if (l == 1)
    {
        printf("Present");
    }
    else
    {
        printf("Not present");
    }
    return 0;
}