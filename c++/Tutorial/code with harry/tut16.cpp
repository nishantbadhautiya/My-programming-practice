#include <iostream>
using namespace std;
int &swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return b;
}
int main()
{
    int a = 3, b = 5;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    // swap(a, b);  // passing value by c++ reference variable
    // return by reference
    swap(a, b) = 344;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    return 0;
}