#include <iostream>
using namespace std;
int c= 120;
int main()
{
    // int a, b,c;
    // cout << "Enter the value of a: " << endl;
    // cin >> a;
    // cout << "Enter the value of b: " << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sum of a and b is: " << c << endl;
    // cout << "The value of global c is: " << ::c << endl; //global variable using scope resolution operator(::).


    // float d= 34.4F;
    // long double e= 34.5L;
    // cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4 is: "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4 is: "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4 is: "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4 is: "<<sizeof(34.4L)<<endl;

    //refrence variable
    // float x= 31;
    // float &y= x;
    // cout<<"X= "<<x<<endl;
    // cout<<"Y= "<<y<<endl;

    //typecasting
    int a= 45;
    float b= 28.34;
    cout<<"The sum of a and b is: "<<a+b<<endl;
    cout<<"The sum of a and b is: "<<a+(int)b<<endl;
    cout<<"The sum of a and b is: "<<a+int(b)<<endl;
}