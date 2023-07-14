#include <iostream>
using namespace std;
bool power_of_two(int num)
{
    int i = 0;
    if (num == 0)
    {
        cout << i << endl;
        return true;
    }
    while (num != 1)
    {
        if (num % 2 != 0)
        {
            return false;
        }
        num = num / 2;
        i++;
    }
    cout << i << endl;
    return true;
}
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    bool result = power_of_two(num);
    cout << result << endl;
    return 0;
}