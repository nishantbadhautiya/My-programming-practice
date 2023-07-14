#include <iostream>
using namespace std;
class Complex
{
private:
    int a;
    int b;

public:
    friend Complex sumcomplex(Complex o1, Complex o2);
    void setdata(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void getdata()
    {
        cout << "Your Complex Number is: " << a << "+" << b << "i" << endl;
    }
};
Complex sumcomplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, total;
    c1.setdata(1, 2);
    c1.getdata();
    c2.setdata(3, 4);
    c2.getdata();
    total = sumcomplex(c1, c2);
    total.getdata();
    return 0;
}