#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salery;
    char name[34];
};
void display(struct employee emp1)
{
    printf("salary is: %.3f \n", emp1.salery);
    printf("name is: %s \n", emp1.name);
    emp1.code = 500;
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->code = 1001;
    ptr->salery = 50000.44;
    strcpy(ptr->name, "Nishant");
    display(e1);
    printf("code is: %d \n", e1.code);
    return 0;
}