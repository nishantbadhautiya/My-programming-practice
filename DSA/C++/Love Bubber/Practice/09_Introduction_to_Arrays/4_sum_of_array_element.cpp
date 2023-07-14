#include <iostream>
using namespace std;
int sum_of_array(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[8] = {3, 3, 5, 1, 9, 4, 3, 1};
    int result = sum_of_array(arr, sizeof(arr) / sizeof(int));
    cout << "The Sum of the Array is: " << result << endl;
    return 0;
}