#include <iostream>
using namespace std;
int main()
{
    int num = 3;
    int *ptr = &num;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;
    cout << "Printing number : " << num << endl;
    cout << "Printing ptr: " << ptr << endl;
    cout << "Printing address of ptr: " << &ptr << endl;
    cout << "Printing ptr2: " << ptr2 << endl;
    cout << "printing the value of ptr: " << *ptr2 << endl;
    cout << "printing the value of num: " << **ptr2 << endl;
    cout << "Printing the value of num: " << ***ptr3 << endl;
    cout << "Printing the address of num: " << **ptr3 << endl;

    cout << endl << "Printing the address of number " << endl;
    cout << &num << endl;
    cout << ptr << endl;
    cout << *ptr2 << endl;
    cout << **ptr3 << endl;

    return 0;
}
