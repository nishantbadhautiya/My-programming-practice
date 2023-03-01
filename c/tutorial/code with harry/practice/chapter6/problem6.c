#include <stdio.h>
int address(int num);
int main()
{
    int num = 3;
    printf("the value of number is : %d\n", num);
    printf("the address of number is : %u\n", &num);
    printf("the address of number after function call is: %u", address(num));
    return 0;
}
int address(int num)
{
    int add_num;
    add_num = &num;
    return add_num;
}