#include <iostream>
using namespace std;
void merge(int *arr1, int m, int *arr2, int n, int *arr3)
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    // copy the remaining part of arr1
    while (i < m)
    {
        arr3[k++] = arr1[i++];
    }
    // copy the remaining part of arr2
    while (j < n)
    {
        arr3[k++] = arr2[i++];
    }
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8];
    merge(arr1, sizeof(arr1) / 4, arr2, sizeof(arr2) / 4, arr3);
    for (int i = 0; i < sizeof(arr3) / 4; i++)
    {
        cout << arr3[i] << "  ";
    }
    cout << endl;
    return 0;
}