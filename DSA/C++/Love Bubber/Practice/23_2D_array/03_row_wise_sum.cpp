#include <iostream>
using namespace std;
void printRowWiseArray(int arr[][4], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}
void printColumnWiseArray(int arr[][4], int row, int col)
{
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}
void rowWiseSum(int arr[][4], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << "sum of " << row + 1 << "th row is: " << sum << endl;
    }
}
void columnWiseSum(int arr[][4], int row, int col)
{
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << "sum of " << col + 1 << "th column is: " << sum << endl;
    }
}

int main()
{
    cout << "Enter the Elements: " << endl;
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Printing the array: " << endl;
    // printRowWiseArray(arr, 3, 4);
    // rowWiseSum(arr, 3, 4);
    printColumnWiseArray(arr, 3, 4);
    columnWiseSum(arr, 3, 4);
    return 0;
}
