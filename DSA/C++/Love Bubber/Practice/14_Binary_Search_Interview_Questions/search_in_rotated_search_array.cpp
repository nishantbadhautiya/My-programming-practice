#include <iostream>
using namespace std;
int binarySearch(int *arr, int s, int e, int key)
{
    // int s = 0;
    // int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int getPivot(int *arr, int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return e;
}
int main()
{
    int arr[] = {34, 45, 56, 77, 5, 7, 12, 18, 25};
    int key = 25;
    int size = sizeof(arr) / sizeof(int);
    int pivot = getPivot(arr, size);
    int result;
    if (arr[pivot] <= key && key <= arr[size - 1])
    {
        result = binarySearch(arr, pivot, size - 1, key);
    }
    else
    {
        result = binarySearch(arr, 0, pivot - 1, key);
    }
    cout << "The index of key in the array is: " << result << endl;
    return 0;
}