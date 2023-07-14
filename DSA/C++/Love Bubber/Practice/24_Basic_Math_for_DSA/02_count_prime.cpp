#include <iostream>
#include <vector>
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
int countPrimes(int num)
{
    int count = 0;
    for (int i = 2; i < num; i++)
    {
        if (checkPrime(i))
        {
            count++;
        }
    }
    return count;
}
int sieveOfEratosthencs(int num)
{
    int cnt = 0;
    vector<bool> prime(num + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < num; i++)
    {
        if (prime[i])
        {
            cnt++;
            for (int j = 2 * i; j < num; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    return cnt;
}
int main()
{
    // int num = 10;
    int num = 1000000;
    int ans = sieveOfEratosthencs(num);
    cout << ans << endl;
    return 0;
}