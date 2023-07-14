#include <iostream>
using namespace std;
int linear_search(int *arr, int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {3, 5, 6, 12, 75, 12, -43, 52, 64, 26};
    cout << linear_search(arr, 10, 326);
    return 0;
}