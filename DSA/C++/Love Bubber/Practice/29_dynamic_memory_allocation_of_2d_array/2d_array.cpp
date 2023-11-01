// For Same Rows and Columns (n size)

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     // creation of 2D array
//     int **arr = new int *[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = new int[n];
//     }
//     // taking input
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     // printing output
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// **************************************************************************************
// For Different Rows and Columns 
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    // creation of 2D array
    int **arr = new int *[m];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    // taking input
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing output
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // Releasing Memory
    for (int i = 0; i < m; i++)
    {
        delete[] arr[i]; // relesing memory of each rows of the 2-D array
    }
    delete[] arr;
    return 0;
}

// *********************    HOME WORK ************************

// Creation of Jaggered array dynamically 
// Solve mock test on code studio
