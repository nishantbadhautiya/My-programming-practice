#include <iostream>
using namespace std;
class Complex
{
private:
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getdata(void);
    void getsumdata(void);
    void sumofcomplex(Complex o1, Complex o2);
};
void Complex::getdata()
{
    cout << "Complex Number is: " << a << "+" << b << "i" << endl;
}
void Complex::getsumdata()
{
    cout << "Sum of c1 and c2 Complex Number is: " << a << "+" << b << "i" << endl;
}
void Complex ::sumofcomplex(Complex o1, Complex o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}
int main()
{
    Complex c1, c2, c3;
    c1.setdata(3, 4);
    c1.getdata();
    c2.setdata(7, 8);
    c2.getdata();
    c3.sumofcomplex(c1, c2);
    c3.getsumdata();
    return 0;
}