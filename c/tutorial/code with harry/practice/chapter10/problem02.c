#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d \n",num, i+1, num*(i+1));
    }
    fclose(ptr);
    printf("Successfully generated table of %d in table.txt \n",num);
    return 0;
}