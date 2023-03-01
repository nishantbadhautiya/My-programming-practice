#include <stdio.h>
int positive_number_count(int *arr, int n)
{
    int pos_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos_count++;
        }
    }
    return pos_count;
}
int negative_number_count(int *arr, int n)
{
    int negative_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negative_count++;
        }
    }
    return negative_count;
}
int zero_count(int *arr, int n)
{
    int zero_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero_count++;
        }
    }
    return zero_count;
}
int main()
{
    int arr[] = {35, -45, 22, 0, -13, -57, 20, -89, 0};
    printf("total number of positive numbers are: %d\n", positive_number_count(arr, 9));
    printf("total number of negative numbers are: %d \n", negative_number_count(arr, 9));
    printf("total number of zero are: %d ", zero_count(arr, 9));
    return 0;
}