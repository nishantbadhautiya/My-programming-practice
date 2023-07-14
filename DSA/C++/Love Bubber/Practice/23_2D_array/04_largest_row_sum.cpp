#include <iostream>
using namespace std;
int largestRowSum(int arr[][4], int row, int col)
{
    int maxi = INT32_MIN;
    int rowIndex = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (maxi < sum)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "The maximum sum is : " << maxi << endl;
    return rowIndex;
}
int main()
{
    int arr[3][4];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = largestRowSum(arr, 3, 4);
    cout << "maximum sum index is: " << ans << endl;
    return 0;
}
