//  *****
//   ****
//    ***
//     **
//      *



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
        int space = 0;
        while (space <= row-1)
        {
            cout<<" ";
            space++;
        }
        // print star
        int star = 1;
        while (star <= num - row + 1)
        {
            cout<<"*";
            star++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}