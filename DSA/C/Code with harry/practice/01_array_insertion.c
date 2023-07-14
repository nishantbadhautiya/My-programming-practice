#include <stdio.h>
void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int indexInsertion(int arr[], int size, int index, int capacity, int value)
{
    if (size > capacity)
    {
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = value;
        return 1;
    }
}
int main()
{
    int arr[100] = {2, 6, 7, 39, 60};
    int size = 5, index = 1, value = 83;
    display(arr, size);
    indexInsertion(arr, size, index, 100, value);
    size = size + 1;
    display(arr, size);
    return 0;
}