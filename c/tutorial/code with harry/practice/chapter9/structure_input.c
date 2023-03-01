#include<stdio.h>
struct employee
{
    int code;
    float salary;
    char name[34];
};
int main()
{
     struct employee e1, e2, e3;
     printf("enter the code of employee 1: ");
     scanf("%d",&e1.code);
     printf("enter the salery of employee 1: ");
     scanf("%f",&e1.salary);
     printf("enter the name of employee 1: ");
     scanf("%s",e1.name);
     
     printf("enter the code of employee 2: ");
     scanf("%d",&e2.code);
     printf("enter the salery of employee 2: ");
     scanf("%f",&e2.salary);
     printf("enter the name of employee 2: ");
     scanf("%s",e2.name);

     printf("enter the code of employee 3: ");
     scanf("%d",&e3.code);
     printf("enter the salery of employee 3: ");
     scanf("%f",&e3.salary);
     printf("enter the name of employee 3: ");
     scanf("%s",e3.name);

     return 0;
}