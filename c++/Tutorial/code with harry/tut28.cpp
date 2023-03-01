#include <iostream>
using namespace std;
class Y;
class X
{
private:
    int num1;
    friend int add(X o1, Y o2);

public:
    void setValue(int value1)
    {
        num1 = value1;
    }
};
class Y
{
private:
    int num2;
    friend int add(X o1, Y o2);

public:
    void setValue(int value2)
    {
        num2 = value2;
    }
};
int add(X o1, Y o2)
{
    return (o1.num1 + o2.num2);
}
int main()
{
    X a1;
    a1.setValue(4);

    Y b1;
    b1.setValue(16);

    int result = add(a1, b1);
    cout << "The sum of a1 and b1 is: " << result;
    return 0;
}