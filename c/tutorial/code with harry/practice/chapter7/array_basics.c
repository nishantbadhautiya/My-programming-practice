#include <stdio.h>

int main()
{
    int marks[4];
    printf("enter the marks of student 1:  ");
    scanf("%d", &marks[0]);
    printf("enter the marks of student 2:  ");
    scanf("%d", &marks[1]);
    printf("enter the marks of student 3:  ");
    scanf("%d", &marks[2]);
    printf("enter the marks of student 4:  ");
    scanf("%d", &marks[3]);
    printf("the marks of students are %d , %d , %d and %d ", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}