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
void insertion_sort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j;

        // // using for loop
        
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > key)
            {
                arr[j + 1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j + 1] = key;
        
        // // using while loop

        // int j = i - 1;
        // while (arr[j] > key && j >= 0)
        // {
        //     arr[j + 1] = arr[j];
        //     j--;
        // }
        // arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {7, 2, 91, 77, 3};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    insertion_sort(arr, size);
    printArray(arr, size);
    return 0;
}