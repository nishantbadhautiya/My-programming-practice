#include <stdio.h>

int main()
{
    int length, breadth, area;
    printf("enter the length of rectangle \n");
    scanf("%d", &length);
    printf("enter the breadth of rectangle \n");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("area of the rectangle is: %d", area);
    return 0;
}