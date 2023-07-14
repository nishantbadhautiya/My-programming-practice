#include <stdio.h>
typedef struct complex
{
    int a;
    int b;
} comp;
comp vectorsum(comp z1, comp z2)
{
    comp result;
    result.a = z1.a + z2.a;
    result.b = z1.b + z2.b;
    return result;
}
int main()
{
    comp z1, z2, sum;
    z1.a = 2;
    z1.b = 3;
    printf("the vector is: %d+%di \n", z1.a, z1.b);
    z2.a = 4;
    z2.b = 6;
    printf("the vector is: %d+%di \n", z2.a, z2.b);
    sum = vectorsum(z1, z2);
    printf("the vector sum of z1 and z2 is: %d+%di \n", sum.a, sum.b);
    return 0;
}