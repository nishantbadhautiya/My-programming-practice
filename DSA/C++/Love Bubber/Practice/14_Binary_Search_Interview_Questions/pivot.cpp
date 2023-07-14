#include <iostream>
using namespace std;
int getPivot(int *arr, int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    // while (s != e)
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
    return s;
    // return e;  // we can also return e of the array
}
int main()
{
    int arr[] = {24, 45, 50, 76, 7, 12, 34};
    int result = getPivot(arr, sizeof(arr) / sizeof(int));
    cout << "Index of pivot element is: " << result << endl;
    return 0;
}
