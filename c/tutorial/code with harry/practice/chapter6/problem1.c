#include <stdio.h>
int sum(int num);
int main()
{
    int num = 10;
    int m = sum(num);
    printf("the sum of first 10 digit is %d \n", m);
    return 0;
}
int sum(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
        do
        {
            return num + (num - 1);
        } while (num == 0);
}