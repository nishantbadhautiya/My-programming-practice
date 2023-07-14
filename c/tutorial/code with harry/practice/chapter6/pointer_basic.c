#include<stdio.h>

int main()
{
    int i=8;
    int *j;
    j=&i;
    // printf("the value of i is : %d \n",i);
    // printf("the value of i is : %d \n",*j);
    // printf("the value of i is : %d \n" ,*(&i));
    printf("the address of i is : %u \n",j);
    // printf("the address of i is : %u \n",&i);
    // printf("the address of address of  i is : %u \n",&j);
    int **k;
    k=&j;
    printf("the address of address of i is : %u \n",k);
    printf("the value of i is : %d \n",**k);
    printf("the address of address of address of i is : %d \n",&k);

     return 0;
}