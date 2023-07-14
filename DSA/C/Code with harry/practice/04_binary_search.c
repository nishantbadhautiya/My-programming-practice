#include <stdio.h>
int binary_search(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 6, 7, 13, 17, 35, 48, 49, 69, 73, 93};
    int size = sizeof(arr) / sizeof(int);
    int element = 113;
    int result = binary_search(arr, size, element);
    printf("The element is found at index No: %d", result);
    return 0;
}