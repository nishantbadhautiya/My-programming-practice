#include <iostream>
using namespace std;
int factorial(int n)
{
    // base condition
    cout << n << endl;
    if (n == 0)
        return 1;
    // Recursive Relation
    // int smallProblem = factorial(n - 1);
    // int bigProblem = n * smallProblem;
    // return bigProblem;
    return n * factorial(n - 1);
}
int power(int n)
{
    // base case
    if (n == 0)
        return 1;
    // Recursive Relation
    // int smallerProblem = power(n - 1);
    // int biggerProblem = 2 * smallerProblem;
    // return biggerProblem;
    return 2 * power(n - 1);
}
void print_number(int num)
{
    // base case
    if (num == 0)
    {
        return;
    }

    // Resursive Relation
    print_number(num - 1);

    // processing
    cout << num << endl;
}

int main()
{
    int num;
    cin >> num;
    // int ans = factorial(num);
    // int ans = power(num);
    cout << endl;
    print_number(num);
    // cout << ans << endl;
    return 0;
}
