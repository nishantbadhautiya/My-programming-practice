#include <iostream>
#include "this.h"
using namespace std;
int main()
{
    int a = 4;
    int b = 5;
    // arithmetic operator
    cout << "The value of a+b is: " << a + b << endl;
    cout << "The value of a-b is: " << a - b << endl;
    cout << "The value of a*b is: " << a * b << endl;
    cout << "The value of a/b is: " << a / b << endl;
    cout << "The value of a%b is: " << a % b << endl;
    cout << "The value of a++ is: " << a++ << endl;
    cout << "The value of a-- is: " << a-- << endl;
    cout << "The value of ++a is: " << ++a << endl;
    cout << "The value of --a is: " << --a << endl;
    // assignment operator
    //  int a= 34, b=23;
    //  char c= 'k';
    // conditional operator
    cout << "The value of a==b is: " << (a == b) << endl;
    cout << "The value of a!=b is: " << (a != b) << endl;
    cout << "The value of a<b is: " << (a < b) << endl;
    cout << "The value of a>b is: " << (a > b) << endl;
    cout << "The value of a<=b is: " << (a <= b) << endl;
    cout << "The value of a>=b is: " << (a >= b) << endl;
    // logical operator
    cout << "The value of ((a>=b) && (a<=b)) is: " << ((a >= b) && (a <= b)) << endl;
    cout << "The value of ((a>=b) || (a<=b)) is: " << ((a >= b) || (a <= b)) << endl;
    cout << "The value of !(a<=b) is: " << !(a <= b) << endl;
    return 0;
}
