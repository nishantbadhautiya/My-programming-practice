#include <bits/stdc++.h>
using namespace std;
// vector<int> wavePrint(vector<vector<int>>arr, int nRows, int mCols)
void wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements you wants to print: ";
    cin >> n;
    vector<vector<int>> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    // cout << (44 & 1) << endl;  // 0
    // cout << (49 & 1) << endl;  // 1
    wavePrint(a, 3, 4);
}
