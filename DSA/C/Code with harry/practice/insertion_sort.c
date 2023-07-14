#include <stdio.h>
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void insertionsort(int *arr, int size)
{
    // loop for passes
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        // loop for each pass
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {12, 46, 73, 28, 84, 22};
    int size = 6;
    display(arr, size);
    insertionsort(arr, size);
    display(arr, size);
    return 0;
}