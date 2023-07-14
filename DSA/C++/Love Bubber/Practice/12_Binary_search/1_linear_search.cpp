#include<iostream>
using namespace std;
int linearSearch(int *arr, int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int arr[]= {3,5,12,62,15,63};
    int result = linearSearch(arr, sizeof(arr)/sizeof(int), 62);
    cout<<result<<endl;
    return 0;
}