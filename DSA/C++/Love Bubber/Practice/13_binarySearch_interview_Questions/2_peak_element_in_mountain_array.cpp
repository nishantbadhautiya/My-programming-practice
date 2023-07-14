#include <iostream>
using namespace std;
int peak_in_mountain(int *arr, int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
    // return e;
}
int main()
{
    int arr[] = {2, 4, 6, 9, 12, 7, 5, 1};
    int result = peak_in_mountain(arr, sizeof(arr) / sizeof(int));
    cout << "Peak element in the Array is: " << result << endl;
    return 0;
}