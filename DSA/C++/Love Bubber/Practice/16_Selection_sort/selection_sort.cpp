#include <iostream>
using namespace std;
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
void selection_sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        // int smallestelement = arr[i];
        int indexofmin = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[indexofmin] > arr[j])
            {
                indexofmin = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[indexofmin];
        arr[indexofmin] = temp;
    }
}
int main()
{
    int arr[] = {12, 32, 15, 63, 23, 5};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    selection_sort(arr, size);
    printArray(arr, size);
    return 0;
}