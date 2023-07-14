// #include <iostream>

// using namespace std;
// int factorial(int num)
// {
//     if (num <= 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return num * factorial(num - 1);
//     }
// }
// int main()
// {
//     // 6!= 6*5*4*3*2*1
//     int num = -5;
//     cout << factorial(num) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int fibbonacci(int num)
{
    if (num < 2)
    {
        return 1;
    }
    else
    {
        return fibbonacci(num - 1) + fibbonacci(num - 2);
    }
}
int main()
{
    int num;
    cout << "enter the number  ";
    cin >> num;
    // 1    1   2   3   5   8   13  21  34  55  89...............
    //      1    2   3   4   5   6   7   8   9   10...............
    cout << "The term at " << num << " position is: " << fibbonacci(num);
    return 0;
}