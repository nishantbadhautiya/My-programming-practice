#include <iostream>
using namespace std;

// void swap_alternate(int *arr, int size)
// {
//     for (int i = 0; i < size; i += 2)
//     {
//         swap(arr[i], arr[i + 1]);
//     }
// }

// void swap_alternate(int *arr, int size)
// {
//     int i = 0;
//     if (size % 2 == 0)
//     {
//         while (i < size)
//         {
//             swap(arr[i], arr[i + 1]);
//             i += 2;
//         }
//     }
//     if (size % 2 != 0)
//     {
//         while (i < size - 1)
//         {
//             swap(arr[i], arr[i + 1]);
//             i += 2;
//         }
//     }
// }

void swap_alternate(int *arr, int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[] = {34, 23, 62, 6, 90, 56};
    int size = sizeof(arr) / sizeof(int);
    swap_alternate(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}