#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salery; 
    char name[34];
};
int main()
{
     struct employee e1;
     struct employee *ptr;
     ptr= &e1;
    //  (*ptr).code= 100;
    //  (*ptr).salery= 50000.22;
    //  strcpy((*ptr).name,"Nishant");
    //  printf("code is : %d\n",e1.code);
    //  printf("salery is: %.2f \n",e1.salery);
    //  printf("name is: %s\n",e1.name);
    ptr->code= 102;
    ptr->salery= 5000.34;
    strcpy(ptr->name, "nishant");
     printf("code is : %d\n",e1.code);
     printf("salery is: %.2f \n",e1.salery);
     printf("name is: %s\n",e1.name);
     return 0;
}