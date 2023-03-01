#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[40];
};
int main()
{
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 400.53;
    strcpy(facebook[0].name, "Nishant");

    facebook[1].code = 101;
    facebook[1].salary = 500.53;
    strcpy(facebook[1].name, "vikash");

    facebook[2].code = 102;
    facebook[2].salary = 500.53;
    strcpy(facebook[2].name, "Amit");
    printf("done");
    return 0;
}