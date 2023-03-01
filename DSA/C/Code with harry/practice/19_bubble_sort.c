// Bubble sort algorithms to sort an array
// author : Nishant badhautiya
// Date : 12/07/2022

#include <stdio.h>
void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void bubble_sort(int *arr, int size)
{
    int isSorted;
    for (int i = 0; i < size - 1; i++) // for loop for pass
    {
        printf("working on the pass number %d \n ", i + 1);
        isSorted = 1;
        for (int j = 0; j < size - i - 1; j++) // for loop for swap two elements
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return; // returning our function.
        }
    }
}
int main()
{
    // int arr[10] = {12, 41, 23, 62, 17, 78};
    // int arr[10] = {12, 18, 23, 41, 62, 78};
    int arr[10] = {7, 11, 9, 2, 17, 4};
    int size = 6;
    printarray(arr, size);
    bubble_sort(arr, size);
    printarray(arr, size);
    return 0;
}