// E
// D E
// C D E
// B C D E
// A B C D E

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the Number: ";
//     cin >> num;
//     int row = num;
//     while (row <= num && row > 0)
//     {
//         int col = 1;
//         while (col <= num - row + 1)
//         {
//             char ch = 'A' + row + col - 2;
//             cout << ch << " ";
//             col++;
//         }
//         cout << endl;
//         row--;
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
        char ch = 'A' + num - row;
        int col = 1;
        while (col <= row)
        {
            cout << ch << " ";
            col++;
            ch++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
