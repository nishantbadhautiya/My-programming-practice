// A
// B C
// D E F
// G H I J
// K L M N O

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    int row = 1;
    char ch = 'A';
    while (row <= num)
    {
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