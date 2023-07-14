#include <stdio.h>
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d   ", arr[i]);
    }
    printf("\n");
}
void selectionSort(int *arr, int size)
{
    printf("Running Selection sort algorithms .... \n");
    int indexofmin;
    for (int i = 0; i < size - 1; i++)
    {
        indexofmin = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[indexofmin])
            {
                indexofmin = j;
            }
        }
        // swap arr[i] and arr[indexofmin]
        int temp = arr[i];
        arr[i] = arr[indexofmin];
        arr[indexofmin] = temp;
    }
}
int main()
{
    int arr[] = {8, 0, 7, 1, 3};
    printArray(arr, sizeof(arr) / sizeof(int));
    selectionSort(arr, sizeof(arr));
    printArray(arr, sizeof(arr) / sizeof(int));
    return 0;
}