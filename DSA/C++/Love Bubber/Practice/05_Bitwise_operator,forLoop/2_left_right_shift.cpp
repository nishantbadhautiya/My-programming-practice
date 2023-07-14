#include <iostream>
using namespace std;

int main()
{
    cout << (15 >> 2) << endl; // output = 3    15/(2*2) = 3
    cout << (15 >> 3) << endl; // output = 1    15/(2*2*2) = 1
    cout << (21 << 2) << endl; // output = 84   21*2*2
    return 0;
}