#include <iostream>
using namespace std;
int main()
{
    int number[22] = {3, 4, 5, 6, 7, 8};
    // for (int i = 0; i < 12; i++)
    // {
    //     cout << number[i] << endl;
    // }
    cout << sizeof(number) / sizeof(int) << endl;
    return 0;
}