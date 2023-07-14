// A
// B B
// C C C
// D D D D
// E E E E E

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the Number: ";
//     cin >> num;
//     int i = 1;
//     char ch = 'A';
//     while (i <= num)
//     {
//         int j = 1;

//         while (j <= i)
//         {
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         ch++;
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
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}