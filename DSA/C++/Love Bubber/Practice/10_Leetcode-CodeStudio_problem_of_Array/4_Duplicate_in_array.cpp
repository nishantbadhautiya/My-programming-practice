// BruteForce Method

// #include <iostream>
// using namespace std;
// int findDuplicate(int *arr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 return arr[i];
//             }
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {2, 3, 4, 5, 6, 8, 8};
//     int result = findDuplicate(arr, sizeof(arr) / sizeof(int));
//     cout << "Result is: " << result << endl;
//     return 0;
// }

// Using Bit Manuplation

#include <iostream>
using namespace std;
int findDuplicate(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{
    int arr[] = {6, 3, 1, 5, 4, 3, 2};
    // int arr[] = {2, 2, 2, 2, 2};
    int result = findDuplicate(arr, sizeof(arr) / sizeof(int));
    cout << "Result is: " << result << endl;
    return 0;
}