// #include <stdio.h>
// int array(int *ptr)
// {
//     ptr= ptr+2;
//     // int(ptr)= ptr;
//     return ptr;
// }
// int main()
// {
//     int arr[10] = {35, 73, 66, 32, 63, 36, 72, 73, 71, 82};
//     int first_address = array(&arr[0]);
//     if (first_address == &arr[2])
//     {
//         printf("address are same ");
//     }
//     else
//     {
//         printf("address are not same ");
//     }

//     return 0;
// }
// ********************************************************************************************************
#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr = &arr[0];
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("the address are same");
    }
    else
    {
        printf("the address are not same");
    }
    return 0;
}
