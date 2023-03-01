#include <stdio.h>
void array_value(int ptr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("the value of %dth element is: %d \n", i, *(ptr+i));
    }
}
int main()
{
    int arr[] = {3, 67, 32, 77, 11, 3687};
    array_value(arr, 6);
    return 0;
}