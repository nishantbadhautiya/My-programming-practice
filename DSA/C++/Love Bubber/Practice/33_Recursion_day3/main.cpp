// program to check sorting of array

// #include <iostream>
// using namespace std;
// bool isSorted(int *arr, int size)
// {
//     // base case
//     if (size == 0 || size == 1)
//         return true;

//     // processing
//     if (arr[0] > arr[1])
//     {
//         return false;
//     }
//     // Recursive Relation
//     bool remainingPart = isSorted(arr + 1, size - 1);
//     return remainingPart;
// }
// int main()
// {
//     int arr[] = {12, 34, 55, 363, 363, 363};
//     int size = sizeof(arr) / 4;
//     bool ans = isSorted(arr, size);
//     if (ans)
//     {
//         cout << "Array is Sorted" << endl;
//     }
//     else
//     {
//         cout << "Array is not Sorted" << endl;
//     }
//     return 0;
// }

// ********************************************************************************************************8

#include <iostream>
using namespace std;
int getSum(int *arr, int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }
    // processing
    return arr[0] + getSum(arr + 1, size - 1);
}

int getSum2(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int remaningPart = getSum2(arr + 1, size - 1);
    int sum = arr[0] + remaningPart;
    return sum;
}

void print(int *arr, int size)
{
    cout << "Size of the element is: " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

bool linear_search(int *arr, int size, int element)
{
    print(arr, size);
    // base case
    if (size == 0)
    {
        return false;
    }

    // Processing
    if (arr[0] == element)
    {
        return true;
    }

    // Recursive Relation
    bool remaining_part = linear_search(arr + 1, size - 1, element);
    return remaining_part;
}

void print_for_binary_search(int *arr, int s, int e)
{

    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

bool binary_search(int *arr, int s, int e, int element)
{
    print_for_binary_search(arr, s, e);
    int mid = s + (e - s) / 2;
    // base case
    // if Element not found
    if (s > e)
    {
        return false;
    }
    // if Element found
    if (arr[mid] == element)
    {
        return true;
    }
    if (arr[mid] > element)
    {
        return binary_search(arr, s, mid - 1, element);
    }
    else
    {
        return binary_search(arr, mid + 1, e, element);
    }
}

int main()
{
    // int arr[] = {3, 2, 5, 1, 6};
    // int ans = getSum(arr, sizeof(arr) / 4);

    // int ans = getSum2(arr, sizeof(arr) / 4);

    // bool ans = linear_search(arr, sizeof(arr) / 4, 5);
    // if (ans)
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "Not Found" << endl;
    // }

    int arr[] = {8, 12, 23, 34, 39, 45};
    bool ans = binary_search(arr, 0, sizeof(arr) / 4 - 1, 39);
    cout << ans << endl;
    return 0;
}
