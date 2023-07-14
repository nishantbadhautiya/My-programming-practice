#include <iostream>
using namespace std;
int binarySearch(int *arr, int size, int element)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    int mid;
    while (start <= end)
    {
        // mid = (start + end);
        mid = start + (end - start) / 2;
        if (element == arr[mid])
        {
            return mid + 1;
        }
        if (element > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {3, 5, 12, 22, 35, 43};
    int result = binarySearch(arr, sizeof(arr) / sizeof(int), 22);
    cout << result << endl;
    return 0;
}