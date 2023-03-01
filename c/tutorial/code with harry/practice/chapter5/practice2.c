#include <stdio.h>
float force(float m);
int main()
{
    float m;
    printf("enter the mass of the body : ");
    scanf("%f", &m);
    printf("the force of the body in newton is: %.3f newtons \n", force(m));
    return 0;
}
float force(float m)
{
    float result = m * 9.8;
    return result;
}