// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the Number: ";
//     cin >> num;
//     int row = 1;
//     while (row <= num)
//     {
//         int col = row;
//         while (col <= row && col > 0)
//         {
//             cout << col << " ";
//             col--;
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
    cout << "Enter the Number: ";
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}