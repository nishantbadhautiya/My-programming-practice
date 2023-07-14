#include <stdio.h>
#include <string.h>
int main()
{
    char str1[34];
    char str2[34];
    int i = 0;
    char ch;
    printf("enter the first string character by character: \n");
    while (ch != '\n')
    {
        fflush(stdin);
        scanf("%c", &ch);
        str1[i] = ch;
        i++;
    }
    str1[i - 1] = '\0';
    printf("enter the second string: \n");
    scanf("%s", str2);
    printf("string 1 is: %s \n", str1);
    printf("string 2 is: %s \n", str2);
    int result = strcmp(str1, str2);
    if (result == 0)
    {
        printf("Both string are same\n");
    }
    else
    {
        printf("Both strings are not same\n");
    }
    return 0;
}
