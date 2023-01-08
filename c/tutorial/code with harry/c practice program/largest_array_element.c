// #include <stdio.h>
// int largest_element(int arr[], int size)
// {
//     int largestelement = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (largestelement < arr[i])
//         {
//             largestelement = arr[i];
//         }
//     }
//     return largestelement;
// }
// int main()
// {
//     int arr[] = {123, 15, 62, 27, 89};
//     // largest_element(arr, 5);
//     printf("largest Element is: %d", largest_element(arr, 5));
//     printf("\n");
//     return 0;
// }


#include<stdio.h>
int largest_element(int *arr, int size){
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max  = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {123, 15, 628, 27, 89};
    largest_element(arr, 5);
    printf("largest Element is: %d", largest_element(arr, 5));
    printf("\n");
    return 0;
}