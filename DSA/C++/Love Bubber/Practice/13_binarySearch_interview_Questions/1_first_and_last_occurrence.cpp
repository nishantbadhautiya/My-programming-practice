#include <iostream>
using namespace std;
int firstOccurence(int *arr, int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int lastOccurence(int *arr, int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    int ans;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 3, 5, 6, 6, 6, 6, 6, 9, 12, 15};
    int first = firstOccurence(arr, sizeof(arr) / sizeof(int), 6);
    int last = lastOccurence(arr, sizeof(arr) / sizeof(int), 6);
    cout << first << endl;
    cout << last << endl;
    return 0;
}

