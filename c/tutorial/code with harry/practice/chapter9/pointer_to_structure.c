#include <stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salery;
    char name[30];
};
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    // (*ptr).code = 202;
    ptr->code= 101;
    // (*(&e1)).salery= 5000.34;
    ptr->salery= 5000.4;
    // strcpy((*ptr).name,"Nishant");
    strcpy(ptr->name, "amit");
    printf("code is: %d\n",e1.code);
    printf("salery is: %.2f \n",e1.salery);
    printf("name is: %s",e1.name);
    return 0;
}