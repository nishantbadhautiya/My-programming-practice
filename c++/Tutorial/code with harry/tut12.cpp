#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    // int* b;
    // b= &a;
    int *b = &a;
    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << b << endl;

    cout << "The value at address b is: " << *b << endl;
    cout << "The value at address b is: " << *(&a) << endl;

    int **c = &b; // pointer to pointer
    cout << "The address of b is: " << &b << endl;
    cout << "The address of b is: " << c << endl;
    cout << "The value at address of b is: " << *c << endl;
    cout << "The value of a is: " << **c << endl;
    return 0;
}