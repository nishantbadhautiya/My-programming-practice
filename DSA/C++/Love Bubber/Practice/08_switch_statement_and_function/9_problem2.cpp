#include <iostream>
using namespace std;
int setbits(int num1)
{
    int i = 0;
    while (num1 != 0)
    {
        if (num1 & 1 == 1)
        {
            num1 = num1 >> 1;
            i++;
        }
        else
        {
            num1 = num1 >> 1;
        }
    }
    return i;
}
int main()
{
    int num1, num2;
    cout << "Enter the first Number: ";
    cin >> num1;
    cout << "Enter the second Number: ";
    cin >> num2;
    int result = setbits(num1) + setbits(num2);
    cout << "Anser is: " << result << endl;
    return 0;
}