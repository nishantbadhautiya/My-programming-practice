#include <stdio.h>

int main()
{
    float radius, height;
    printf("enter the radius of the circle :\n");
    scanf("%f", &radius);
    printf("area of the cirecle of radius %f is: %f \n", radius, 3.14 * radius * radius);
    printf("enter the height of the cylinder: \n");
    scanf("%f", &height);
    printf("volume of the cylinder is: %f", 3.14 * radius * radius * height);
    return 0;
}