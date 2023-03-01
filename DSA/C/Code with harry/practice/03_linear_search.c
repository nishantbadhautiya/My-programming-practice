#include <stdio.h>
int element_search(int *arr, int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {23, 1, 63, 74, 72, 43, 57};
    int size = sizeof(arr) / sizeof(int);
    int num;
    printf("Enter the element of the array to search: ");
    scanf("%d", &num);
    int result = element_search(arr, num, size);
    if (result == -1)
    {
        printf("Element not found ");
    }
    else
    {
        printf("The Given Element found at %dth index", result);
    }
    return 0;
}