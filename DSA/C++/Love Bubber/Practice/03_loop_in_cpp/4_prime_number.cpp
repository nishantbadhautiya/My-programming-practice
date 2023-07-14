#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            cout << "prime for " << i << endl;
        }
        else
        {
            cout << "Not Prime for " << i << endl;
        }
        i++;
    }
    return 0;
}