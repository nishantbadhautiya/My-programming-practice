//     *
//    **
//   ***
//  ****
// *****

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the Number: ";
//     cin >> num;
//     int i = 1;
//     while (i <= num)
//     {
//         int space = 1;
//         while (space <= num - i)
//         {
//             cout << " ";
//             space++;
//         }
//         int star = 1;
//         while (star <= i)
//         {
//             cout << "*";
//             star++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        // Print space
        int space = num - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        // Print star Pattern
        int star = 1;
        while (star <= row)
        {
            cout << "*";
            star++;
        }
        cout << endl;
        row++;
    }
    return 0;
}