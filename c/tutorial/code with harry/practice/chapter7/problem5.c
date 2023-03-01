#include <stdio.h>
void reverse_array(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
        // return temp;
    }
}
int main()
{
    int arr[] = {34, 62, 67, 94, 47, 14, 93};
    reverse_array(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("the value of %d element is: %d \n", i + 1, arr[i]);
    }
    return 0;
}