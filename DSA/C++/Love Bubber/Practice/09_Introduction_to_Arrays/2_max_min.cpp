#include <iostream>
using namespace std;
int getmax(int *arr, int size)
{
    int maxnum = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        maxnum = max(maxnum, arr[i]);
        // if (max < arr[i])
        // {
        //     max = arr[i];
        // }
    }
    return maxnum;
}
int getmin(int *arr, int size)
{
    int minnum = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        minnum = min(minnum, arr[i]);
        // if (min > arr[i])
        // {
        //     min = arr[i];
        // }
    }
    return minnum;
}
int main()
{
    int arr[8] = {34, 13, -351, 51, -93, 46, 321, 146};
    int max = getmax(arr, sizeof(arr) / sizeof(int));
    int min = getmin(arr, sizeof(arr) / sizeof(int));
    cout << "Maximum Number is: "<< max << endl;
    cout << "Minimum Number is: "<<min << endl;
    return 0;
}