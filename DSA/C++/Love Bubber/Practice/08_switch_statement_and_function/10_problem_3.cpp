#include <iostream>
using namespace std;
int fibonnachi(int num)
{
    int a = 0;
    int b = 1;
    int ans;
    for (int i = 0; i <= num - 2; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
    }
    return a;
}
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    cout << "Answe is: " << fibonnachi(num) << endl;
    return 0;
}