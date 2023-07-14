#include <iostream>
using namespace std;
// void reverse_array(int *arr, int size)
// {
//     for (int i = 0; i < size / 2; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[size - i - 1];
//         arr[size - i - 1] = temp;
//     }
// }

void reverse_array(int *arr, int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int size = 9;
    int arr[size] = {3, 5, 6, 12, 75, 12, -43, 52, 64};
    reverse_array(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}