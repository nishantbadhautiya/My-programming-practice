// A
// B C
// C D E
// D E F G
// E F G H I


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
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
