#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salery;
    char name[34];
}emplo;
void show(emplo emp)
{
    printf("code is: %d \n",emp.code);
     printf("salery is: %.2f \n",emp.salery);
     printf("name is: %s\n",emp.name);
}
int main()
{
     emplo e1;
     emplo *ptr;
     ptr= &e1;
     ptr->code=100;
     ptr->salery= 5000.34;
     strcpy(ptr->name,"Nishant");
     show(e1);
     return 0;
}