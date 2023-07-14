/*
problem statement:--->   https://leetcode.com/problems/unique-number-of-occurrences/
*/

#include <iostream>
using namespace std;
bool uniqu eOccurrences(int arr[], int size)
{
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//     }
}
int main()
{
    int arr[] = {1, 2, 2, 1, 1, 3};
    bool result = uniqueOccurrences(arr, sizeof(arr) / sizeof(int));
    return 0;
}