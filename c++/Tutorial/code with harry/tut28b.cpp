#include <iostream>
using namespace std;
class Y;
class X
{
private:
    int num1;
    friend void exchange(X &a1, Y &a2);

public:
    void setdata(int value1)
    {
        num1 = value1;
    }
    void showdata(void)
    {
        cout << num1 << endl;
    }
};
class Y
{
private:
    int num2;
    friend void exchange(X &a1, Y &a2);

public:
    void setdata(int value2)
    {
        num2 = value2;
    }
    void showdata(void)
    {
        cout << num2 << endl;
    }
};
void exchange(X &a1, Y &a2)
{
    int temp;
    temp = a1.num1;
    a1.num1 = a2.num2;
    a2.num2 = temp;
}
int main()
{
    X a1;
    a1.setdata(34);

    Y a2;
    a2.setdata(62);

    exchange(a1, a2);
    cout << "The value of a1 after exchange is: ";
    a1.showdata();
    cout << "The value of a2 after exchange is: ";
    a2.showdata();
    return 0;
}
