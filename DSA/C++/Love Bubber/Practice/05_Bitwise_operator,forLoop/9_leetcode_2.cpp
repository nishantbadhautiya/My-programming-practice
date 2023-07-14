#include <iostream>
using namespace std;
int hammingweight(int num)
{
    int count = 0;
    while (num != 0)
    {
        // checking last bit
        // if (num & 1 == 1)
        if (num & 1)
        {
            count++;
        }
        num = (num >> 1);
    }
    return count;
}
int main()
{

    int binarynum = 0011100111;
    int result = hammingweight(binarynum);
    cout << result << endl;
    return 0;
}