#include <stdio.h>

int main()
{
     int sub1, sub2, sub3;
     printf("enter the marks of first subject: ");
     scanf("%d", &sub1);
     printf("enter the marks of second subject:");
     scanf("%d", &sub2);
     printf("enter the marks of third subject:");
     scanf("%d", &sub3);
     if ((sub1 >= 30 && sub2 >= 30 && sub3 >= 30) && ((sub1 + sub2 + sub3) / 3) >= 40)
     {
          printf("you get passed");
     }
     else
     {
          printf("you did not passed");
     }
     return 0;
}