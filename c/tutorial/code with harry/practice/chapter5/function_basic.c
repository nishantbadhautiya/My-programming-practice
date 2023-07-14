#include <stdio.h>
void display(); // fuction prototype
int main()
{
    printf("Initilazing funtion \n");
    display(); // fuction call
    printf("finishing fuction \n");
    return 0;
}
void display()
{
    printf("I am display function \n");
}