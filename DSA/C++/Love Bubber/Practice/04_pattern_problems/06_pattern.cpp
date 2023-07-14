// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9



// #include <iostream>
// using namespace std;
// int main()
// {
//     int row = 1;
//     int num;
//     cout << "Enter the Number : ";
//     cin >> num;
//     while (row <= num)
//     {
//         int col = 0;
//         while (col < row)
//         {
//             cout << col + row << " ";
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int value;
        int col = 1;
        value = row;
        while (col <= row)
        {
            cout<<value<<" ";
            value++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}