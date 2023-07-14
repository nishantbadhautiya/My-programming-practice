// 12345
//  2345
//   345
//    45
//     5


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
        // print space
        int space = 1;
        while (space <= row - 1)
        {
            cout << " ";
            space++;
        }
        // print number
        int value = row;
        while (value <= num)
        {
            cout << value;
            value++;
        }
        cout << endl;
        row++;
    }
    return 0;
}