#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[56];
};
int main()
{
    struct employee amazon[100];
    amazon[0].code = 100;
    amazon[0].salary = 400.53;
    strcpy(amazon[0].name, "Nishant");

    amazon[1].code = 101;
    amazon[1].salary = 500.53;
    strcpy(amazon[1].name, "vikash");

    printf("code is: %u \n", &amazon[0].code);
    printf("salery is: %u \n", &amazon[0].salary);
    printf("name is: %u \n", &amazon[0].name);
 
    printf("code is: %u \n", &amazon[1].code);
    printf("salery is: %u \n", &amazon[1].salary);
    printf("name is: %u \n", &amazon[1].name);

    return 0;
}