#include <iostream>
using namespace std;
int bitwiseComplement(int num)
{
    int m = num;
    int mask = 0;
    // Edge Case

    if (num == 0)
    {
        return 1;
    }
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int answer = (~num & mask);
    return answer;
}
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    cout << "The Complement of " << num << " is: " << bitwiseComplement(num) << endl;
    return 0;
}