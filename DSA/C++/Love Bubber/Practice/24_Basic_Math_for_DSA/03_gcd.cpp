#include <iostream>
using namespace std;
int gcd(int num1, int num2)
{
    if (num1 == 0)
    {
        return num2;
    }
    if (num2 == 0)
    {
        return num1;
    }
    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 = num1 - num2;
        }
        if (num2 > num1)
        {
            num2 = num2 - num1;
        }
    }
    // return num2;
    return num1;
}
int lcm(int num1, int num2)
{
    return (num1 * num2) / gcd(num1, num2);
}
int main()
{
    int num1, num2;
    cout << "Enter the first Number: ";
    cin >> num1;
    cout << "Enter the second Number: ";
    cin >> num2;
    int ans = gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << ans << endl;
    int ans2 = lcm(num1, num2);
    cout << "LCM of " << num1 << " and " << num2 << " is: " << ans2 << endl;
    return 0;
}
