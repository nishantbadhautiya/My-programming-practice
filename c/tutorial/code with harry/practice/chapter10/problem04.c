#include <stdio.h>
#include <string.h>
int main()
{
   FILE *ptr;
   ptr = fopen("problem04.txt", "w");
   char name[34];
   float salery;
   printf("enter  the employee name: ");
   gets(name);
   printf("enter the salery of the employee: ");
   scanf("%f", &salery);
   char ch;
   ch = fputc(ch, ptr);
   while (ch != '\0')
   {
      fputc(ch, ptr);
   }
   return 0;
}
