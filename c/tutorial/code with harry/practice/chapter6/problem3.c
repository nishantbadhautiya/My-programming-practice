#include <stdio.h>
// void address(int a);
void address(int a)
{
    // int *k;
    // k = &a;
    // return k;
    printf("address of i after function call is: %u \n", &a);
}
int main()
{
    int i = 9;
    printf("address of i is: %u \n", &i);
    address(i);
    return 0;
}
