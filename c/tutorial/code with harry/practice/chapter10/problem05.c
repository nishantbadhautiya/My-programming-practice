#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("problem05.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    int num2 = num * 2;
    printf("%d",num2);
    // ptr = fopen("problem05.txt", "w");
    fprintf(ptr, "%d", num2);
    fclose(ptr);
    return 0;
}
