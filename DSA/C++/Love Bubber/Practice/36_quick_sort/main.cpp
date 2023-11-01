#include<iostream>
using namespace std;
int partition(int *arr, int s , int e){
    int pivot = arr[s];
    // count the element less than pivot
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if(arr[i] <= pivot){
            count++;
        }
    }
    
    // place the pivot at their right place 
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        
        while (arr[j] > pivot)
        {
            j--;
        }
        
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int *arr, int s , int e){
    //base case
    if(s >= e){
        return;
    }
    // Recursive relation/call
    // get the partition point
    int p = partition(arr, s ,e);
    // sort the left part
    quickSort(arr, 0, p - 1);
    // sort the right part
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[] = {3,1,4,5,2};
    int size = sizeof(arr) / 4;
    quickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;
}
