#include <stdio.h>
int main()
{
    FILE *ptr1;
    ptr1 = fopen("pr03_01.txt", "r");
    FILE *ptr2;
    ptr2 = fopen("pr03_02.txt", "w");
    char ch;
    ch = fgetc(ptr1);
    while (ch != EOF)
    {
        fputc(ch, ptr2);
        // fputc(ch, ptr2);
        ch = fgetc(ptr1);
        // printf("%c", ch);
    }
    while (ch != EOF)
    {
        fputc(ch, ptr2);
        // fputc(ch, ptr2);
        ch = fgetc(ptr1);
        // printf("%c", ch);
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}