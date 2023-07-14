#include <iostream>
using namespace std;
int subtrace_produce_and_sum(int num)
{
    int mul= 1 , sum = 0;
    for (int i = 0; i < 3; i++)
    {
        int digit = num % 10;
        mul = mul * digit;
        sum = sum + digit;
        num = num / 10;
        if (num == 0)
        {
            break;
        }
    }
    return (mul - sum);
}
int main()
{
    int num = 456;
    int result = subtrace_produce_and_sum(num);
    cout<<result<<endl;
    return 0;
}