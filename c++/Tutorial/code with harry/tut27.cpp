#include <iostream>
using namespace std;
class Complex; // forward Declaration
class Calculator
{
private:
public:
    int sumrealcomplex(Complex , Complex);
    int sumimaginarycomplex(Complex , Complex);
};
class Complex
{
private:
    int a;
    int b;

public:
    // friend int Calculator ::sumrealcomplex(Complex o1, Complex o2);
    // friend int Calculator :: sumimaginarycomplex(Complex o1, Complex o2);
    friend class Calculator;
    void setdata(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void getdata(void)
    {
        cout << "The Complex Number is: " << a << "+" << b << "i" << endl;
    }
};
int Calculator ::sumrealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumimaginarycomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex c1, c2;
    c1.setdata(1, 2);
    c1.getdata();
    c2.setdata(3, 4);
    c2.getdata();
    Calculator calc1, calc2;
    int result1 = calc1.sumrealcomplex(c1, c2);
    cout << "The sum of Real Parts of both Complex Number is: " << result1<<endl;
    int result2 = calc2.sumimaginarycomplex(c1, c2);
    cout << "The sum of imaginary Parts of both Complex Number is: " << result2<<endl;
    return 0;
}