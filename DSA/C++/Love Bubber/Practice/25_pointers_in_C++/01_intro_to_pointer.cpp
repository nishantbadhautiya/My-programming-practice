#include <iostream>
using namespace std;
int main()
{
    // int num = 5;
    // cout << num << endl;
    // // address of operator - & (in hexadecimal format [0-9, a-f])
    // cout << "address of num is: " << &num << endl;

    // int *ptr ; // our ptr pointer will store some garbage values. it means we are pointing our pointer in unknown memory. that memory will not belongs to our program. that's why it's a bad practice
    // // initialization with zero is known as null pointers ex:- int *ptr = 0;
    // cout << *ptr << endl; // will have some garbage value
    // cout << ptr << endl;
    // cout << ++ptr << endl;
    // cout << ptr << endl;

    // int *ptr = &num;
    // cout << *ptr << endl;
    // cout << ptr << endl;
    // cout << sizeof(num) << endl;
    // cout << sizeof(ptr) << endl;

    // double d = 34.32;
    // double *ptr2 = &d;
    // cout << d << endl;
    // cout << ptr2 << endl;
    // cout << sizeof(d) << endl;
    // cout << sizeof(ptr2) << endl;    // output = 4    always 4 for int, char, double, bool etc..

    // *************************************************************

    // int *p = 0;  // initializing a pointer p to point to address 0, which is called null pointer it's an invalid memory location
    // cout << p << endl;  // value of the pointer p is 0
    // cout << *p << endl;   //no such memory exists so segmentation fault error occurs it's dereference the null pointer p
    //*************************************************************

    // int i = 5;
    // // int *p = 0;
    // int *p;
    // p = &i; // above and this line same as *p = &i;
    // cout << p << endl;
    // cout << *p << endl;

    // int *q = &i;
    // cout << q << endl;
    // cout << *q << endl; // output = 0x61ff04
    //  5
    //  0x61ff04
    //  5
    //*************************************************************
    // int num = 5;
    // int a = num;
    // a ++ ;
    // cout << num << endl;
    // cout << a << endl;

    // int num = 5;
    // int *p = &num;
    // int a = *p;
    // a++;
    // cout << num << endl;   // output = 5
    //*************************************************************

    // int num = 5;
    // int *p = &num;
    // (*p)++;
    // cout<<num<<endl;    // output = 6

    //*************************************************************
    // int num = 5;
    // int *p = &num;
    // cout << num << endl;
    // (*p)++;
    // cout << num << endl;

    // int *q = p;   // coping a pointer
    // cout << p << endl;
    // cout << q << endl;
    // cout << *p << endl;
    // cout << *q << endl;

    //*************************************************************

    // int num = 9;
    // int *p = &num;
    // int *q = p;
    // cout << p << endl;
    // cout << q << endl;
    // (*q) ++ ;
    // cout << num << endl;
    // cout << *q << endl;

    //*************************************************************

    // int i = 3;
    // int *t = &i;
    // // (*t)++; // cannot do *t++ else it will not update the value of *t (i) ;
    // cout << *t++ << endl;
    // // *t = *t + 1;
    // cout << i << endl;

    //*************************************************************
    int i = 3;
    int *t = &i;
    cout << t << endl;
    t = t + 1;
    t = t + 1;
    t = t + 1;
    t = t + 1;
    cout << t << endl;
    return 0;
}
