#include<stdio.h>

int main()
{
     int principle, year, interest;
     printf("enter the principle amount:");
     scanf("%d",&principle);
     printf("enter the number of years:");
     scanf("%d",&year);
     printf("enter the interest rate:");
     scanf("%d",&interest);
     float si=principle*year*interest/100;
     printf("the amount of simple interest is: %f",si);

     return 0;
}