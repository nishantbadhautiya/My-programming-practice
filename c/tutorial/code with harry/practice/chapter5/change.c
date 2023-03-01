#include<stdio.h>
int change(int a);
int main()
{
    int b=77;
    printf("the value of b before change is: %d \n",b);
    change(b);
    printf("the value of b after change is: %d \n",b);
     return 0;
}
int change(int b)
{
    b=3;
    return b;
}