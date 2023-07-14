#include <iostream>
using namespace std;
bool isPossibleSolution(int *arr, int m, int n, int mid)
{
    int student = 1;
    int pagecount = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagecount + arr[i] <= mid)
        {
            pagecount += arr[i];
        }
        else
        {
            if (student < m || arr[i] > mid)
            {
                return false;
            }
        }
    }
    return true;
}
int allocateBooks(int *arr, int m, int n)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans;
    while (s <= e)
    {
        if(isPossibleSolution(arr, m, n, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int m = 2;
    int n = sizeof(arr) / sizeof(int);
    int result = allocateBooks(arr, m, n);
    cout << result << endl;
}