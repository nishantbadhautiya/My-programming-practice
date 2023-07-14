#include <iostream>
using namespace std;
long long int squareRoot(int num)
{
    int s = 0;
    int e = num;
    long long int mid = s + (e - s) / 2;
    int ans;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == num)
        {
            return mid;
        }
        if (square > num)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double accurateRoot(int number, int precision)
{
    double ans = squareRoot(number);
    double factor = 1;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < number; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int number = 62;
    double result = accurateRoot(number, 3);
    cout << result << endl;
    return 0;
}