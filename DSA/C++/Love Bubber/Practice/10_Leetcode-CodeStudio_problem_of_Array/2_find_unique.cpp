#include <iostream>
using namespace std;
// int find_unique(int *arr, int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         int count = 1;
//         for (int j = 0; j < size; j++)
//         {
//             if (i != j)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     count++;
//                 }
//             }
//         }
//         if (count == 1)
//         {
//             return arr[i];
//         }
//     }
//     return -1;
// }

int find_unique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {34, 25, 156, 34, 55, 156, 25};
    int size = sizeof(arr) / sizeof(int);
    int result = find_unique(arr, size);
    cout << "Result is: " << result << endl;
    return 0;
}