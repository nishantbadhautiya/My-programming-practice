//     1
//    121
//   12321
//  1234321
// 123454321



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
        int space = 1;
        // print space
        while (space <= num - row)
        {
            cout << " ";
            space++;
        }
        // print number
        int count = 1;
        while (count <= row)
        {
            cout << count;
            count++;
        }

        int count2 = row - 1;
        while (count2)
        {
            cout << count2;
            count2--;
        }
        cout << endl;
        row++;
    }
    return 0;
}