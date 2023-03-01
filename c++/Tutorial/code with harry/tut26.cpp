#include <iostream>
using namespace std;
class Complex
{
private:
    int a;
    int b;

public:
    friend Complex sumofcomplex(Complex c1, Complex c2);
    void setcomplex(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void showcomplex(void)
    {
        cout << "Your Complex Number is: " << a << "+" << b << "i" << endl;
    }
};
Complex sumofcomplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.setcomplex((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}
int main()
{
    Complex c1, c2, total;
    c1.setcomplex(1, 2);
    c1.showcomplex();
    c2.setcomplex(3, 4);
    c2.showcomplex();
    total = sumofcomplex(c1, c2);
    total.showcomplex();
    return 0;
}