#include <iostream>
using namespace std;
int checkPrime(int num)
{
    if (num == 0 || num == 1)
    {
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num = 127;
    if (checkPrime(num))
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not Prime Number" << endl;
    }
    return 0;
}
