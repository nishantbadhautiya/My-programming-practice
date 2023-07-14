#include <iostream>
using namespace std;
int main()
{
    // int arr[10] = {2, 5, 6, 9};
    // cout << arr << endl;
    // cout << &arr[0] << endl;
    // cout << *arr << endl;
    // cout << *(&arr[0]) << endl;

    // cout << *arr + 9 << endl;
    // cout << *(arr + 1) <<endl;
    // cout << *(arr + 2) <<endl;
    // cout << *(arr + 3) <<endl;

    // cout << arr[2] << endl;     // output = 6
    // cout << *(arr + 2) << endl; // output = 6       // so arr[i] = *(arr + i)
    // cout << 3 [arr] << endl;    // output = 9
    // cout << *(3 + arr) <<endl;   // output = 9    // so i[arr] = *(i + arr)

    // cout << sizeof(arr) << endl;
    // cout << sizeof(*arr) <<endl;
    // cout << sizeof(&arr) <<endl;
    // cout << sizeof(&arr[0]) << endl;
    // int *ptr = &arr[0];
    // cout << sizeof(ptr) << endl;
    // cout << sizeof(*ptr) << endl;
    // cout << sizeof(&ptr) <<endl;

    // ********************************************************************
    // int a[20] = {1, 3, 5, 6, 7};
    // cout << &a[0] << endl;
    // cout << &a << endl;
    // cout << a << endl;
    // int *p = &a[0];
    // cout << p << endl;
    // cout << *p <<endl;
    // cout << &p << endl;

    // ********************************************************************
    int arr[10];
    // arr = arr + 1;  // Error because we can not change the content in symbol table
    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;


    
    return 0;
}