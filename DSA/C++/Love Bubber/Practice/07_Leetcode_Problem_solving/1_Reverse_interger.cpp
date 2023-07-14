#include <iostream>
using namespace std;
int reverseNumber(int num)
{
    int digit;
    int ans = 0;
    while (num != 0)
    {
        digit = num % 10;
        if ((ans > INT32_MAX / 10) || (ans < INT32_MIN / 10))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        num = num / 10;
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    cout << "Reverse Number is: " << reverseNumber(num) << endl;
    return 0;
}