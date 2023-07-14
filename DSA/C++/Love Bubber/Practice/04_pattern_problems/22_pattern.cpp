//       1
//     2 3
//   4 5 6
// 7 8 9 10



#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    int row = 1;
    int count = 1;
    while (row <= num)
    {
        // print space
        int space = 1;
        while (space <= num - row)
        {
            cout << "  ";
            space++;
        }
        // print counting
        int col = 1 ;
        while (col <= row)
        {
            cout << count<<" ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
