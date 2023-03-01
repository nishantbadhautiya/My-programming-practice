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
    struct employee nishant = {100, 5000.55, "Nishant"};
    printf("code is: %d \n",nishant.code);
    printf("salery is: %.2f \n",nishant.salary);
    printf("name is: %s \n",nishant.name);

    return 0;
}