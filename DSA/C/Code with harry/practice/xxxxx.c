#include <stdio.h>
int printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d   ", arr[i]);
    }
    printf("\n");
}

void BubbleSort(int *arr, int size)
{
    int isSorted = 0;
    for (int i = 0; i < size; i++)
    {
        printf("Working on the Swap Number: %d \n", i + 1);
        int isSorted = 1;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
void InserSort(int *arr, int size)
{
    for (int i = 1; i <= size - 1; i++)
    {
        int key = arr[i];
        int j = i - 1;
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
    int arr[] = {7, 11, 9, 2, 17, 4};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);

    // **************************************
    // BubbleSort(arr, size);
    InserSort(arr, size);
    // SelectionSort(arr, size);
    // **************************************

    printArray(arr, size);
    return 0;
}
