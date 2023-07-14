#include <iostream>
using namespace std;
void updateArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
}
int main()
{
    int arr[5] = {2, 5, 1, 6, 7};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }

    cout<<endl;
    updateArray(arr, sizeof(arr) / sizeof(int));  // Address of the first element of the array is passed so the  updated array will be get when we call this function.

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}