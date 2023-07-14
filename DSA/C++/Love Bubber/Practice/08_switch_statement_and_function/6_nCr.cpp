#include <iostream>
using namespace std;
int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }

    int fact = num;
    if (num >= 2)
    {
        fact = fact * factorial(num - 1);
    }
    return fact;
}
int nCr(int n, int r)
{
    int result;
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    result = num / denom;
    return result;
}
int main()
{
    cout << nCr(5, 4) << endl;
    return 0;
}