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
        int count = 1;
        // print fist count
        while (count <= num - row + 1)
        {
            cout << count<<" ";
            count++;
        }
        // print star pattern
        int star = 1;
        while (star <= (row - 1) * 2)
        {
            cout << "*"<<" ";
            star++;
        }
        int count2 = num - row +1;
        while (count2)
        {
            cout<<count2<<" ";
            count2--;
        }
        

        cout << endl;
        row++;
    }
    return 0;
}