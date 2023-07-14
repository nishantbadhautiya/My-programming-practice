#include<stdio.h>

int main()
{
     FILE *ptr;
     ptr= fopen("putcdemo.txt","w");
     putc('N',ptr);
     putc('i',ptr);
     putc('s',ptr);
     putc('h',ptr);
     putc('a',ptr);
     putc('n',ptr);
     putc('t',ptr);
     fclose(ptr);
     return 0;
}