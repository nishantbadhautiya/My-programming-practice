#include <iostream>
using namespace std;
int modularExponentiation(int base, int pow, int module)
{
    int res = 1;
    while (pow > 0)
    {
        if (pow & 1) // odd
        {
            res = (1LL * (base) * (res) % module) % module; // typecast by 1LL(long long)
        }
        base = (1LL * (base) % module * (base) % module) % module;
        pow = pow >> 1; // same as pow = pow / 2
    }
    return res;
}
int main()
{
    int ans = modularExponentiation(3, 6, 10);
    cout << ans << endl;
    return 0;
}
