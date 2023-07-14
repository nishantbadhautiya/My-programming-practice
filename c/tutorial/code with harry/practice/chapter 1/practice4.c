#include<stdio.h>

int main()
{
     float c;
     printf("enter the temperature in centigrade:\n");
     scanf("%f",&c);
     float f;
     f=(c*9/5)+32;
     printf("temperature in fahrenhite is: %f",f);
     return 0;
}