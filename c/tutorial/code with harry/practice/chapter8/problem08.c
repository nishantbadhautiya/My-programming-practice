#include <stdio.h>
void occurance(char *str, char ch)
{
    int j = 0,i=0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            j++;
        }
        i++;
    }
    printf("Number of characters are: %d", j);
}
int main()
{
    char str[] = "NiashaaaaAaaant";
    occurance(str, 'a');
    return 0;
}