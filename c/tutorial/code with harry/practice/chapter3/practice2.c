#include <stdio.h>

int main()
{
    int marks;
    printf("enter your marks:");
    scanf("%d", &marks);
    if (marks <= 100 && marks >= 90)
    {
        printf("Grade: A");
    }
    else if (marks >= 80)
    {
        printf("Grade: B");
    }
    else if (marks >= 70)
    {
        printf("Grade: C");
    }
    else if (marks >= 60)
    {
        printf("Grade: D");
    }
    else if (marks >= 50)
    {
        printf("Grade: E");
    }
    else
    {
        printf("Grade: F");
    }
    return 0;
}