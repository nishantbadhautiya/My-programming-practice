// A B C D E
// B C D E F
// C D E F G
// D E F G H
// E F G H I

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the Number: ";
//     cin >> num;
//     int row = 1;
//     char ch = 'A';
//     while (row <= num)
//     {
//         int col = 1;
//         while (col <= num)
//         {
//             char value = ch + col - 1;
//             cout << value << " ";
//             col++;
//         }
//         ch++;
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
    cout << "Enter the Number: ";
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}