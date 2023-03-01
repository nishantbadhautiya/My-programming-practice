#include <stdio.h>
void display(int arr[], int size)
{
    // code of traversal or code for display all the elements in the array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void arraydeletion(int arr[], int size, int index)
{
    //code for deletion of an element in the array
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[100] = {23, 53, 62, 77, 84, 20};
    display(arr, 6);
    int index = 2, size = 6;
    arraydeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}
