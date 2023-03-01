#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salery;
    char name[44];
};
int main()
{
    struct employee e1;
    e1.code = 100;
    e1.salery = 50000.75;
    strcpy(e1.name, "Nishant");
    printf("%d \n",e1.code);
    printf("%.3f \n",e1.salery);
    printf("%s \n",e1.name);
    return 0;
}