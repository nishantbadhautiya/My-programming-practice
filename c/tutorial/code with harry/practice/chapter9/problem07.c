#include <stdio.h>
typedef struct complex
{
    int real;
    int imaginary;
}comp;
void display(comp c, int i)
{
    printf("The real part of %dth complex number is %d \n",i+1, c.real);
    printf("The imaginary part %dth complex number is %d \n",i+1, c.imaginary);
}
int main()
{
    comp z[5];
    for (int i = 0; i < 5; i++)
    {
        printf("The real part of %dth complex number is: ", i + 1);
        scanf("%d", &z[i].real);
        printf("The imaginary part of %dth complex number is: ", i + 1);
        scanf("%d", &z[i].imaginary);
    }
    for (int i = 0; i < 5; i++)
    {
        display(z[i],i);
    }
    return 0;
}