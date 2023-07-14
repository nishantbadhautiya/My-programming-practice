// 1-D array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Printing array" <<endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// 2-D array
#include <iostream>
using namespace std;
int main()
{
    // hardcore the input of the 2-D array
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};  //by default it's row wise
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    // // taking input - Row wise
    // int arr[3][4];
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 4; col++)
    //     {
    //         cin >> arr[row][col];
    //     }
    // }

    // taking input - Column wise
    int arr[3][4];
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin>>arr[row][col];
        }
    }

    // Printing our array
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}
