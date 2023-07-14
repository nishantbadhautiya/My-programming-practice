//     1
//    22
//   333
//  4444
// 55555



#include<iostream>
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
        while (space <= num-row)
        {
            cout<<" ";
            space++;
        }
        // print number
        int value = 1;
        while (value <= row)
        {
            cout<<row;
            value++;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}